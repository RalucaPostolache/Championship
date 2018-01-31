#include "addclasament.h"
#include "ui_addclasament.h"
#include "clasament.h"
#include <QMessageBox>
AddClasament::AddClasament(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddClasament)
{
    ui->setupUi(this);
}

AddClasament::~AddClasament()
{
    delete ui;
}
Clasament AddClasament::getNewClasament()
{

    int id = (ui->id->text().toInt());
    int id_participant_fgk = (ui->id_participant_fgk->text().toInt());
    int id_categorie_fgk = (ui->id_categorie_fgk->text().toInt());
    int pozitie = (ui->pozitie->text().toInt());

    return Clasament(id, id_participant_fgk, id_categorie_fgk, pozitie);
}
void AddClasament::setData(const QString id,const QString id_participant_fgk,const QString id_categorie_fgk,const QString pozitie)
{

    ui->id->setText(id);
    ui->id_participant_fgk->setText(id_participant_fgk);
    ui->id_categorie_fgk->setText(id_categorie_fgk);
    ui->pozitie->setText(pozitie);

    //ui->id_clasament_fgk->setText(id_clasament_fgk);
}

void AddClasament::accept()
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
    ui->id_participant_fgk->text().toInt(&ok);
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
    ui->pozitie->text().toInt(&ok);
    if(!ok)
    {
        QMessageBox::warning(this, tr("Add Item Error"), tr("Id should be a number"));
    }
    else
    {
        QDialog::accept();
    }
}
