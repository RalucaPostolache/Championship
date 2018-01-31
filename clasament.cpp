#include "clasament.h"

Clasament::Clasament(){}

Clasament::Clasament(int id,int id_participant_fgk,int id_categorie_fgk,int pozitie){
    this->id = id;
    this->id_participant_fgk = id_participant_fgk;
    this->id_categorie_fgk = id_categorie_fgk;
    this->pozitie = pozitie;
}
void Clasament::setId(int id){
      this->id;
}
void Clasament::setIdParticipant(int id_participant_fgk){
      this->id_participant_fgk;
}
void Clasament::setIdCategorie(int id_categorie_fgk){
     this->id_categorie_fgk;
}
void Clasament::setPozitie(int pozitie){
     this->pozitie;
}
