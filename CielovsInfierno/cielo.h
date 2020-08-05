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
    QString nombres[2][10];
    Cielo();
    void reino();
    int getAlturaArbol();
    int generacion();
    void salvacion(QVector<Persona *>);


    int version(int p);
    void nombresmatriz();
    int ramdom();
};

#endif // CIELO_H
