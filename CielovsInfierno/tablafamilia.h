#ifndef TABLAFAMILIA_H
#define TABLAFAMILIA_H
#include "lsfamilia.h"

struct NodoTabla{
    QString apellido;
    LSFamilia * lista;
    NodoTabla * next;
    NodoTabla();
    NodoTabla(QString apellido);
};

struct TablaFamilia{
    NodoTabla * lastNode ,* firstNode;

    TablaFamilia();
    void printAll();
    void insert(Persona * ppersona);
    void insertAux(NodoTabla * nodo);
    int len();
    bool isEmpty();
    NodoTabla *  lookFor(QString ID);
};



#endif // TABLAFAMILIA_H
