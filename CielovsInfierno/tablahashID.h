#ifndef TABLAHASHENTEROS_H
#define TABLAHASHENTEROS_H
#include "lsint.h"

struct TablaHashID{
    LSInt  tabla[2000];

    TablaHashID();
    int funcionHash(int n);
    bool insertar(int pn);
    bool inTabla(int pn);
    void imprimirTabla();
    int obtenerIDValido();
    int randomID(int seed);
};

#endif // TABLAHASHENTEROS_H
