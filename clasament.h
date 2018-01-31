#ifndef CLASAMENT_H
#define CLASAMENT_H
#include <QString>

class Clasament
{
public:
    Clasament();
    Clasament(int id,int id_participant_fgk,int id_categorie_fgk,int pozitie);
    void setId(int id);
    void setIdParticipant(int id_participant_fgk);
    void setIdCategorie(int id_categorie_fgk);
    void setPozitie(int pozitie);

public:
    int id;
    int id_participant_fgk;
    int id_categorie_fgk;
    int pozitie;
};
#endif // CLASAMENT_H
