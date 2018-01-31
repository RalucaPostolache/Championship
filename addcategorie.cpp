#include "addcategorie.h"
#include "ui_addcategorie.h"
#include "categorie.h"

#include <QMessageBox>

AddCategorie::AddCategorie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddCategorie)
{
    ui->setupUi(this);
}

AddCategorie::~AddCategorie()
{
    delete ui;
}
Categorie AddCategorie::getNewCategorie()
{


    int id = (ui->id->text().toInt());
    QString nume = (ui->nume->text());
    int varsta_minima = (ui->varsta_minima->text().toInt());
    int varsta_maxima = (ui->varsta_maxima->text().toInt());
    int greutate_minima = (ui->greutate_minima->text().toInt());
    int greutate_maxima = (ui->greutate_maxima->text().toInt());
    QString experienta = (ui->experienta->text());
    return Categorie(id, nume, varsta_minima, varsta_maxima, greutate_minima, greutate_maxima, experienta);
}
void AddCategorie::setData(const QString id,const QString nume,const QString varsta_minima,const QString varsta_maxima,const QString greutate_minima,const QString greutate_maxima,const QString experienta)
{

    ui->id->setText(id);
    ui->nume->setText(nume);
    ui->varsta_minima->setText(varsta_minima);
    ui->varsta_maxima->setText(varsta_maxima);
    ui->greutate_minima->setText(greutate_minima);
    ui->greutate_maxima->setText(greutate_maxima);
     ui->experienta->setText(experienta);
    //ui->id_clasament_fgk->setText(id_clasament_fgk);
}

void AddCategorie::accept()
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
    ui->varsta_minima->text().toInt(&ok);
    if(!ok)
    {
        QMessageBox::warning(this, tr("Add Item Error"), tr("Id should be a number"));
    }
    else
    {
        QDialog::accept();
    }
    ok=true;
    ui->greutate_minima->text().toInt(&ok);
    if(!ok)
    {
        QMessageBox::warning(this, tr("Add Item Error"), tr("Id should be a number"));
    }
    else
    {
        QDialog::accept();
    }

    ok=true;
    ui->greutate_maxima->text().toInt(&ok);
    if(!ok)
    {
        QMessageBox::warning(this, tr("Add Item Error"), tr("Id should be a number"));
    }
    else
    {
        QDialog::accept();
    }
}
