#ifndef ARBOLHEAPDEMONIO_H
#define ARBOLHEAPDEMONIO_H
#include "ArbolHeapFamilia.h"
#include <QVector>

//Heap de heaps
struct ArbolHeapDemonio{
    QString demonio;
    int idDemonio;          //el indice que le corresponde en el arreglo de pecados de las personas

    QVector<ArbolHeapFamilia*>  arbol;

    ArbolHeapDemonio(){}
    ArbolHeapDemonio(QString nombreDemonio,int pidDemonio);
    void insertar(Persona*);
    void ordenar();
    void ordenarAux(int,int);
    Persona * buscarDisponible();
    ArbolHeapFamilia * buscarFamilia(Persona * persona);
    Persona * menosPecador();
    void limpiar();
    bool eliminarHumano(Persona * humano);
    int random();
    void imprimir();
};

#endif // ARBOLHEAPDEMONIO_H
