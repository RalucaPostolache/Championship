#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addorganizatie.h"
#include "addorganizatie.cpp"
#include "participant.h"
#include "addparticipant.h"
#include "organizatie.h"
#include "categorie.h"
#include "clasament.h"
#include "addclasament.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QSqlField>
#include <QSqlRecord>
#include <QMainWindow>
#include <QString>

QSqlDatabase m_db;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // connect(ui->actionAdd_Item, &QAction::triggered, this, &MainWindow::onAddItem);
    //m_addItemDialog = new AddItemDialog(this);

    m_db = QSqlDatabase::addDatabase("QPSQL");
    m_db.setHostName("baasu.db.elephantsql.com");
    m_db.setDatabaseName("tejazcfz");
    m_db.setUserName("tejazcfz");
    m_db.setPassword("qG1nryaFhXczTBLhOTFXD1WDdABvMnTs");

    bool ok = m_db.open();
    if(!ok)
    {
        QString a = m_db.lastError().text();


        ui->statusBar->showMessage(a);
//        ui->statusBar->showMessage(tr("Database not connected!"));
    }
    else
    {
        ui->statusBar->showMessage(tr("Database connected!"));
    }
    setupModel();
    ui->table->setModel(m_model);

   connect(ui->actionRefresh, &QAction::triggered, this, &MainWindow::onRefreshDB);
   connect(ui->actionaddActionParticipant, &QAction::triggered, this, &MainWindow::addActionParticipant);
   connect(ui->actionaddActionOrganizatie, &QAction::triggered, this, &MainWindow::addActionOrganizatie);
   connect(ui->actionaddActionCategorie, &QAction::triggered, this, &MainWindow::addActionCategorie);
   connect(ui->actionaddActionClasament, &QAction::triggered, this, &MainWindow::addActionClasament);
 //  connect(ui->actionAddOrg, &QAction::triggered, this, &MainWindow::addActionOrg);
   //addOrg = new AdaugaOrganizatie(this);
    addParticipant = new AddParticipant(this);
    addOrganizatie = new AddOrganizatie(this);
    addCategorie  = new AddCategorie(this);
    addClasament  = new AddClasament(this);
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addActionParticipant()
{
    int s = addParticipant->exec();
    if(s == QDialog::Accepted)
      {
         Participant participant = addParticipant->getNewParticipant();


         QSqlQuery query = QSqlQuery(m_db);
         query.prepare("INSERT INTO participant (id, nume, prenume, punctaj, id_organizatie_fgk, id_categorie_fgk) "
                              "VALUES (?, ?, ?, ?, ?, ?)");
         query.addBindValue(participant.id);
         query.addBindValue(participant.nume);
         query.addBindValue(participant.prenume);
         query.addBindValue(participant.punctaj);
         query.addBindValue(participant.id_organizatie_fgk);
         query.addBindValue(participant.id_categorie_fgk);
         query.exec();

    }
}

void MainWindow::addActionOrganizatie()
{
    int s = addOrganizatie->exec();
    if(s == QDialog::Accepted)
      {
         Organizatie organizatie = addOrganizatie->getNewOrganizatie();

         QSqlQuery query = QSqlQuery(m_db);
         query.prepare("INSERT INTO organizatie (id, tara, numar_participanti) "
                              "VALUES (?, ?, ?)");
         query.addBindValue(organizatie.id);
         query.addBindValue(organizatie.tara);
         query.addBindValue(organizatie.numar_participanti);
         query.exec();

    }
}

void MainWindow::addActionCategorie()
{
    int s = addCategorie->exec();
    if(s == QDialog::Accepted)
      {
         Categorie categorie = addCategorie->getNewCategorie();


         QSqlQuery query = QSqlQuery(m_db);
         query.prepare("INSERT INTO categorie (id, nume, varsta_minima, varsta_maxima, greutate_minima, greutate_maxima, experienta) "
                              "VALUES (?, ?, ?, ?, ?, ?,?)");
         query.addBindValue(categorie.id);
         query.addBindValue(categorie.nume);
         query.addBindValue(categorie.varsta_minima);
         query.addBindValue(categorie.varsta_maxima);
         query.addBindValue(categorie.greutate_minima);
         query.addBindValue(categorie.greutate_maxima);
         query.addBindValue(categorie.experienta);
         query.exec();

    }
}

void MainWindow::addActionClasament()
{
    int s = addClasament->exec();
    if(s == QDialog::Accepted)
      {
         Clasament clasament = addClasament->getNewClasament();


         QSqlQuery query = QSqlQuery(m_db);
         query.prepare("INSERT INTO clasament (id, id_participant_fgk, id_categorie_fgk, pozitie) "
                              "VALUES (?, ?, ?, ?)");
         query.addBindValue(clasament.id);
         query.addBindValue(clasament.id_participant_fgk);
         query.addBindValue(clasament.id_categorie_fgk);
         query.addBindValue(clasament.pozitie);
         query.exec();

    }
}

/*

void MainWindow::onRefreshDB()
{
    selectQuery();
}

QSqlDatabase MainWindow::getDatabase()
 {
     return m_db;
}
*/

void MainWindow::setupModel()
{
    m_model = new QSqlTableModel(this, m_db);
    m_model->setTable("participant");
//    m_model->setEditStrategy(QSqlTableModel::OnFieldChange);
    m_model->setEditStrategy(QSqlTableModel::OnManualSubmit);

    m_model->setHeaderData(0, Qt::Horizontal, tr("id"));
    m_model->setHeaderData(1, Qt::Horizontal, tr("nume"));
    m_model->setHeaderData(2, Qt::Horizontal, tr("prenume"));
    m_model->setHeaderData(3, Qt::Horizontal, tr("punctaj"));
    m_model->setHeaderData(4, Qt::Horizontal, tr("id_organizatie_fgk"));
    m_model->setHeaderData(5, Qt::Horizontal, tr("id_categorie_fgk"));

    m_model->select();
}

void MainWindow::onRefreshDB(){}


void MainWindow::selectQuery()
{
    m_model->select();
}

