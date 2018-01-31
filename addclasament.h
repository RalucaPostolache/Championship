#ifndef ADDCLASAMENT_H
#define ADDCLASAMENT_H

#include <QDialog>
#include "clasament.h"

namespace Ui {
class AddClasament;
}

class AddClasament : public QDialog
{
    Q_OBJECT

public:
    explicit AddClasament(QWidget *parent = 0);
    ~AddClasament();
    Clasament getNewClasament();
    void setData(const QString id,const QString id_participant_fgk,const QString id_categorie_fgk,const QString pozitie);
    void accept();
private:
    Ui::AddClasament *ui;
};

#endif // ADDCLASAMENT_H
