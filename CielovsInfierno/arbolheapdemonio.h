#ifndef ARBOLHEAPDEMONIO_H
#define ARBOLHEAPDEMONIO_H
#include "ArbolHeapFamilia.h"
#include <QVector>

//Heap de heaps
struct ArbolHeapDemonio{


    QVector<ArbolHeapFamilia*> arbol;
    ArbolHeapDemonio(){}

   /* void insertar(ArbolHeap*);
    void ordenar();
    void ordenarAux(int,int);  //por cantidad de pecados de la familia
    void imprimir();*/
};

#endif // ARBOLHEAPDEMONIO_H
