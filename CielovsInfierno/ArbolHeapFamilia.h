#ifndef ARBOLHEAP_H
#define ARBOLHEAP_H
#include <QString>
#include <QVector>
#include "persona.h"

struct ArbolHeap{

    QString nombreFamilia;
    QString apellidoFamilia;
    int cantPecadosFamilia;
    QVector<Persona*> arbol;
    ArbolHeap(){}

    void insertar(Persona*);
    void ordenar();
    void ordenarAux(int,int);
    void imprimir();
};

#endif // ARBOLHEAP_H
