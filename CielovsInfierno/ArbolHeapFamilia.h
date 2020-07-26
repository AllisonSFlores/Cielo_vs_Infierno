#ifndef ARBOLHEAP_H
#define ARBOLHEAP_H
#include <QString>
#include <QVector>
#include "persona.h"

struct ArbolHeap{

    QString nombreFamilia;
    QString apellidoFamilia;
    int cantPecadosFamilia;
    QVector<int> arbol;
    ArbolHeap(){}

    void insertar(int);
    void ordenar();
    void ordenarAux(int,int);
    void imprimir();
};

#endif // ARBOLHEAP_H
