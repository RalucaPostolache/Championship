#ifndef PARTICIPANT_H
#define PARTICIPANT_H
#include <QString>

class Participant
{
public:
    Participant();
    Participant(int id, QString nume, QString prenume, int punctaj,
            int id_organizatie_fgk, int id_categorie_fgk);
    void setId(int id);
    void setNume(QString nume);
    void setPrenume(QString prenume);
    void setPunctaj(int punctaj);
    void setId_Org(int id_organizatie_fgk);
    //void setId_Clasament(int id_clasament_fgk);
    void setId_Categ(int id_categorie_fgk);


public:
    int id;
    int punctaj;
    int id_organizatie_fgk;
    //int id_clasament_fgk;
    int id_categorie_fgk;
    QString nume;
    QString prenume;



};

#endif // PARTICIPANT_H
