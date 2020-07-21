#ifndef TABLAHASHENTEROS_H
#define TABLAHASHENTEROS_H
#include "lsint.h"

struct TablaHashEnteros{
    LSInt  tabla[2000];


    TablaHashEnteros();
    int funcionHash(int n);
    bool insertar(int pn);
    bool inTabla(int pn);
    void imprimirTabla();
};

#endif // TABLAHASHENTEROS_H
