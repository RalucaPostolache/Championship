#ifndef ADDPARTICIPANT_H
#define ADDPARTICIPANT_H

#include <QDialog>
#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include "participant.h"

namespace Ui {
class AddParticipant;
}

class AddParticipant : public QDialog
{
    Q_OBJECT

public:
    explicit AddParticipant(QWidget *parent = 0);
    ~AddParticipant();
    Participant getNewParticipant();
    void setData(const QString id,const QString nume,const QString prenume,const QString punctaj,const QString id_organizatie_fgk,const QString id_categorie_fgks);
    void accept();
private:
    Ui::AddParticipant *ui;
};

#endif // ADDPARTICIPANT_H
