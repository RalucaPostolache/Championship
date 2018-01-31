#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include "addparticipant.h"
#include "participant.h"
#include "organizatie.h"
#include "addorganizatie.h"
#include "categorie.h"
#include "addcategorie.h"
#include "addclasament.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    QSqlTableModel *m_model;
    //AdaugaOrganizatie *m_adaugaorganizatie;
    AddParticipant *addParticipant;
    AddOrganizatie *addOrganizatie;
    AddCategorie *addCategorie;
    AddClasament *addClasament;
private:
    void setupModel();
    void selectQuery();
    static QSqlDatabase getDatabase();
    // void addActionOrg();
     void onRefreshDB();
     //void setDB(QSqlDatabase db) {m_db = db;}

 public:
     //static QString QPSQL = "QPSQL";
    // static QSqlDatabase m_db; //= QSqlDatabase::addDatabase(QPSQL);
 private slots:
     void addActionParticipant();
     void addActionOrganizatie();
     void addActionCategorie();
     void addActionClasament();

};

#endif // MAINWINDOW_H
