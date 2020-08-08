#ifndef ARBOLHEAPDEMONIO_H
#define ARBOLHEAPDEMONIO_H
#include "ArbolHeapFamilia.h"
#include <QVector>

//Heap de heaps
struct ArbolHeapDemonio{
    QString demonio;
    QString pecado;
    int idDemonio;          //el indice que le corresponde en el arreglo de pecados de las personas
    int cantPecados;
    int cantPecadosHeap;
    int cantAB;
    QVector<Persona*> pecadoresv;

    QVector<ArbolHeapFamilia*>  arbol;

    ArbolHeapDemonio(){}
    ArbolHeapDemonio(QString nombreDemonio,int pidDemonio,QString ppecado);
    void insertar(Persona*);
    void ordenar();
    void ordenarAux(int,int);
    Persona * buscarDisponible();
    ArbolHeapFamilia * buscarFamilia(Persona * persona);
    Persona * menosPecador();
    void limpiar();
    QString consultas();
    bool eliminarHumano(Persona * humano);
    double promedioDePecados();
    void  maxPecadormin();
    int canHumano();
    int random();
    void imprimir();
    void ordenara();
    void ordenarAuxa(int _izq,int _der);
};

#endif // ARBOLHEAPDEMONIO_H
