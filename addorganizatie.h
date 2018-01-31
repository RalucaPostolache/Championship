#ifndef ADDORGANIZATIE_H
#define ADDORGANIZATIE_H
#include "organizatie.h"
#include <QDialog>

namespace Ui {
class AddOrganizatie;
}

class AddOrganizatie : public QDialog
{
    Q_OBJECT

public:
    explicit AddOrganizatie(QWidget *parent = 0);
    ~AddOrganizatie();
    Organizatie getNewOrganizatie();
    void setData(const QString id,const QString tara,const QString numar_participanti);
    void accept();

private:
    Ui::AddOrganizatie *ui;
};

#endif // ADDORGANIZATIE_H
