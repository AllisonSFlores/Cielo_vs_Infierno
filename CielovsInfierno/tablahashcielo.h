#ifndef TABLAHASHCIELO_H
#define TABLAHASHCIELO_H
#include "lscielo.h"

struct TablaHashCielo
{
    LSCielo tabla[1000];
    int cantAb[7]={0,0,0,0,0,0,0};
    int cantPecados[7]={0,0,0,0,0,0,0};
    TablaHashCielo();
    int funcionHash(int n);
    bool insertar(Persona * phumano);
    bool inTabla(int pn);
    void imprimirTabla();
    QString cantxPecados();
    QString cantxAB();
    int neto();
    void registrarAB(Persona *);
    int obtenerIDValido();
    int randomID(int seed);
    QString informacion();
};
#endif // TABLAHASHCIELO_H
