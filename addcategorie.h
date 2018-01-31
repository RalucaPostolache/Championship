#ifndef ADDCATEGORIE_H
#define ADDCATEGORIE_H

#include <QDialog>
#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include "categorie.h"
namespace Ui {
class AddCategorie;
}

class AddCategorie : public QDialog
{
    Q_OBJECT

public:
    explicit AddCategorie(QWidget *parent = 0);
    ~AddCategorie();
    Categorie getNewCategorie();
    void setData(const QString id,const QString nume,const QString varsta_minima,const QString varsta_maxima,const QString greutate_minima,const QString greutate_maxima,const QString experienta);
    void accept();

private:
    Ui::AddCategorie *ui;
};

#endif // ADDCATEGORIE_H
