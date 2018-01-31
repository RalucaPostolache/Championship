#include "organizatie.h"

Organizatie::Organizatie(){}
Organizatie::Organizatie(int id, QString tara, int numar_participanti){
            this->id = id;
            this->tara = tara;
            this->numar_participanti = numar_participanti;
}
void Organizatie::setId(int id){
    this->id;
}
void Organizatie::setTara(QString tara){
    this->tara;
}
void Organizatie::setNumarParticipanti(int numar_participanti){
    this->numar_participanti;
}
