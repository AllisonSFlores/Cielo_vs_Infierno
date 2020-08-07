#ifndef TABLAHASHCIELO_H
#define TABLAHASHCIELO_H
#include "lscielo.h"

struct TablaHashCielo
{
    LSCielo tabla[1000];
    TablaHashCielo();
    int funcionHash(int n);
    bool insertar(Persona * phumano);
    bool inTabla(int pn);
    void imprimirTabla();
    int obtenerIDValido();
    int randomID(int seed);
    QString informacion(QVector<Persona * >);
};
#endif // TABLAHASHCIELO_H
