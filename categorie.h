#ifndef CATEGORIE_H
#define CATEGORIE_H
#include <QString>

class Categorie
{
public:
    Categorie();
     Categorie(int id, QString nume, int varsta_minima, int varsta_maxima, int greutate_minima, int greutate_maxima, QString experienta);
     void setId(int id);
     void setNume(QString nume);
     void setVarsta_Minima(int varsta_minima);
     void setVarsta_Maxima(int varsta_maxima);
     void setGreutate_Minima(int greutate_minima);
     void setGreutate_Maxima(int greutate_maxima);
     void setExperienta(QString experienta);


    int id;
    QString nume;
    int varsta_minima;
    int varsta_maxima;
    int greutate_minima;
    int greutate_maxima;
    QString experienta;
};

#endif // CATEGORIE_H
