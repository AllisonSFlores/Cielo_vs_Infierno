#ifndef CIELO_H
#define CIELO_H
#include <QIODevice>
#include <QtCore>
#include "arbolangeles.h"
#include "tablahashcielo.h"
#include "math.h"

struct Cielo{
    ArbolAngeles * arbol;
    TablaHashCielo * tabla;
    QString nombres[2][10]= {"Miguel","Nuriel","Aniel","Rafael","Gabriel","Shamsiel","Raguel","Uriel","Azrael","Sariel"};

    Cielo();
    void reino();
    int getAlturaArbol();
    void salvacion();


    int version(int p);
    void nombresmatriz();
    int ramdom();
};

#endif // CIELO_H
