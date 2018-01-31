#include "addorganizatie.h"
#include "ui_addorganizatie.h"
#include "organizatie.h"

#include <QMessageBox>

AddOrganizatie::AddOrganizatie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddOrganizatie)
{
    ui->setupUi(this);
}

AddOrganizatie::~AddOrganizatie()
{
    delete ui;
}

Organizatie AddOrganizatie::getNewOrganizatie()
{

    int id = (ui->id->text().toInt());
    QString tara = (ui->tara->text());
    int numar_participanti = (ui->numar_participanti->text().toInt());

    return Organizatie(id, tara, numar_participanti);
}
void AddOrganizatie::setData(const QString id,const QString tara,const QString numar_participanti)
{

    ui->id->setText(id);
    ui->tara->setText(tara);
    ui->numar_participanti->setText(numar_participanti);
}

void AddOrganizatie::accept()
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
    ui->numar_participanti->text().toInt(&ok);
    if(!ok)
    {
        QMessageBox::warning(this, tr("Add Item Error"), tr("Id should be a number"));
    }
    else
    {
        QDialog::accept();
    }
}
