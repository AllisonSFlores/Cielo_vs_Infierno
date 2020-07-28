#ifndef LSFAMILIA_H
#define LSFAMILIA_H
#include "ArbolHeapFamilia.h"

struct NodoFamilia{
    QString pais;
    ArbolHeapFamilia * arbol;
    NodoFamilia * next;
    NodoFamilia();
    NodoFamilia(QString ppais,ArbolHeapFamilia * parbol);
    NodoFamilia(QString ppais);
};

struct LSFamilia{
    NodoFamilia * lastNode ,* firstNode;
    LSFamilia();
    void printAll();
    void insert(Persona * ppersona);
    void insertAux(NodoFamilia * nodo);
    int len();
    bool isEmpty();
    NodoFamilia *  lookFor(QString ID);
};

#endif // LSFAMILIA_H
