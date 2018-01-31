#include "addparticipant.h"
#include "ui_addparticipant.h"
#include "participant.h"

#include <QMessageBox>
AddParticipant::AddParticipant(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddParticipant)
{
    ui->setupUi(this);
}

AddParticipant::~AddParticipant()
{
    delete ui;
}

Participant AddParticipant::getNewParticipant()
{

    int id = (ui->id->text().toInt());
    QString nume = (ui->nume->text());
    QString prenume = (ui->prenume->text());
    int punctaj = (ui->punctaj->text().toInt());
    int id_Org = (ui->id_organizatie_fgk->text().toInt());
    //int id_Clasament = (ui->id_clasament_fgk->text().toInt());
    int id_Categ = (ui->id_categorie_fgk->text().toInt());

    return Participant(id, nume, prenume, punctaj, id_Org, id_Categ);
}
void AddParticipant::setData(const QString id,const QString nume,const QString prenume,const QString punctaj,const QString id_organizatie_fgk,const QString id_categorie_fgk)
{

    ui->id->setText(id);
    ui->nume->setText(nume);
    ui->prenume->setText(prenume);
    ui->punctaj->setText(punctaj);
    ui->id_organizatie_fgk->setText(id_organizatie_fgk);
    ui->id_categorie_fgk->setText(id_categorie_fgk);

    //ui->id_clasament_fgk->setText(id_clasament_fgk);
}

void AddParticipant::accept()
{
    bool ok = true;
    ui->id->text().toInt(&ok);
    if(!ok)
    {
        QMessageBox::warning(this, tr("Add Item Error"), tr("Id should be a number"));
    }
    else
    {
        QDialog::accept();
    }
    ok=true;
    ui->punctaj->text().toInt(&ok);
    if(!ok)
    {
        QMessageBox::warning(this, tr("Add Item Error"), tr("Id should be a number"));
    }
    else
    {
        QDialog::accept();
    }
    ok=true;
    ui->id_categorie_fgk->text().toInt(&ok);
    if(!ok)
    {
        QMessageBox::warning(this, tr("Add Item Error"), tr("Id should be a number"));
    }
    else
    {
        QDialog::accept();
    }

    ok=true;
    ui->id_organizatie_fgk->text().toInt(&ok);
    if(!ok)
    {
        QMessageBox::warning(this, tr("Add Item Error"), tr("Id should be a number"));
    }
    else
    {
        QDialog::accept();
    }
}
