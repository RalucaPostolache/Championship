#include "categorie.h"
#include <QString>

Categorie::Categorie(){}
Categorie::Categorie(int id, QString nume, int varsta_minima, int varsta_maxima, int greutate_minima, int greutate_maxima, QString experienta){
    this->id = id;
    this->nume = nume;
    this->varsta_minima = varsta_minima;
    this->varsta_maxima = varsta_maxima;
    this->greutate_maxima = greutate_maxima;
    this->greutate_minima = greutate_minima;
    this->experienta = experienta;
}
void Categorie::setId(int id){
     this->id;
}
void Categorie::setNume(QString nume){
     this->nume;
}
void Categorie::setVarsta_Maxima(int varsta_maxima){
     this->varsta_maxima;
}
void Categorie::setVarsta_Minima(int varsta_minima){
     this->varsta_minima;
}
void Categorie::setGreutate_Maxima(int greutate_maxima){
     this->greutate_maxima;
}
void Categorie::setGreutate_Minima(int greutate_minima){
     this->greutate_minima;
}
 void Categorie::setExperienta(QString experienta){
     this->experienta;
}
