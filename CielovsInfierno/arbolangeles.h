#ifndef ARBOLANGELES_H
#define ARBOLANGELES_H
#include "angel.h"
#include"persona.h"
struct NodoArbolAngeles{
    int nivel;
    int cont;
    Angel * angel;
    Persona * humano;
    NodoArbolAngeles * izq;
    NodoArbolAngeles * cen;
    NodoArbolAngeles * der;

    NodoArbolAngeles();
    NodoArbolAngeles(int a,int);
    NodoArbolAngeles(Angel * pangel,int a,Persona * humano);
    void imprimirNodo();
};

struct ArbolAngeles{

    NodoArbolAngeles * raiz;
    ArbolAngeles();
    void insertar(Angel * pangel, Persona * phumano);
    NodoArbolAngeles * buscarCampo(NodoArbolAngeles * raiz, int altura);
    int getAltura(NodoArbolAngeles * raiz);
    NodoArbolAngeles * hojaIzq(NodoArbolAngeles * praiz);
};
#endif // ARBOLANGELES_H
