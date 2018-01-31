#ifndef ORGANIZATIE_H
#define ORGANIZATIE_H
#include <QString>


class Organizatie
{
public:
    Organizatie();
    Organizatie(int id, QString tara, int numar_participanti);
    void setId(int id);
    void setTara(QString tara);
    void setNumarParticipanti(int numar_participanti);

public:
    int id;
    QString tara;
    int numar_participanti;
};

#endif // ORGANIZATIE_H
