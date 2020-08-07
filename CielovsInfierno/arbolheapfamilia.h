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
    void insertara(Persona*);
    void ordenar();
    void ordenarAux(int,int);
    Persona * buscarDisponible();
    void buscarFamilia(Persona * persona);
    int sumarPecado();
    int sumarPecado(int d);
    Persona * menosPecador();
    void limpiar();
    bool eliminarHumano(Persona * humano);      //si esta lo borra  y retorna true sino retorna false
    int random();
    void imprimir();
    QString imprimirEstadoBA();
    QString imprimirEstadoPecados();
    QString imprimirFamilia();
    QString imprimirPorcentajes();
    double porcentajeVivos();
    double porcentajeCielo();
    double porcentajeInfierno();

};

#endif // ARBOLHEAP_H

