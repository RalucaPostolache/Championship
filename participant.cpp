#include "participant.h"

Participant::Participant() {}

Participant::Participant(int id, QString nume, QString prenume, int punctaj,
                   int id_organizatie_fgk, int id_categorie_fgk){
    this->id = id;
    this->nume = nume;
    this->prenume = prenume;
    this->punctaj= punctaj;
    this->id_organizatie_fgk = id_organizatie_fgk;
    this->id_categorie_fgk=id_categorie_fgk;
    //this->id_clasament_fgk=id_clasament_fgk;

}
void Participant::setId(int id){
     this->id;
}
void Participant::setNume(QString nume){
     this->nume;
}
void Participant::setPrenume(QString prenume){
     this->prenume;
}

void Participant::setPunctaj(int punctaj){
     this->punctaj;
}
void Participant::setId_Org(int id_organizatie_fgk){
     this->id_organizatie_fgk;
}

void Participant::setId_Categ(int id_categorie_fgk){
     this->id_categorie_fgk;
}

