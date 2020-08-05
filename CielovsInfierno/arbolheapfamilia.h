#ifndef ARBOLHEAP_H
#define ARBOLHEAP_H
#include <QString>
#include <QVector>
#include "persona.h"

struct ArbolHeapFamilia{

    QString paisFamilia;
    QString apellidoFamilia;
    QVector<Persona*> arbol;

    ArbolHeapFamilia(){
    }
    void insertar(Persona*);
    void ordenar();
    void ordenarAux(int,int);
    Persona * buscarDisponible();
    void buscarFamilia(Persona * persona);
    int sumarPecado();
    int sumarPecado(int d);
    Persona * menosPecador();
    int random();
    void imprimir();

};

#endif // ARBOLHEAP_H

