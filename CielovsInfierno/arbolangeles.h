#ifndef ARBOLANGELES_H
#define ARBOLANGELES_H
#include "angel.h"
struct NodoArbolAngeles{
    int nivel;
    int cont;
    Angel * angel;
    NodoArbolAngeles * izq;
    NodoArbolAngeles * cen;
    NodoArbolAngeles * der;

    NodoArbolAngeles();
    NodoArbolAngeles(int a,int);
    NodoArbolAngeles(Angel * pangel,int a);
    void imprimirNodo();
};

struct ArbolAngeles{

    NodoArbolAngeles * raiz;
    ArbolAngeles();
    void insertar(Angel * pangel);
    NodoArbolAngeles * buscarCampo(NodoArbolAngeles * raiz, int altura);
    int getAltura(NodoArbolAngeles * raiz);
    NodoArbolAngeles * hojaIzq(NodoArbolAngeles * praiz);
};
#endif // ARBOLANGELES_H
