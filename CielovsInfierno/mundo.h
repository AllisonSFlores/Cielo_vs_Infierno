#ifndef MUNDO_H
#define MUNDO_H
#include "persona.h"
#include<QVector>

struct Nodo;
struct arbolMundo;
struct listaDoble;
struct NodoLd;

struct Nodo{

    Persona *persona;
    Nodo* hijoizquierdo;
    Nodo* hijoderecho;

    Nodo (Persona *_persona){
        persona = _persona;
        hijoizquierdo = hijoderecho = NULL;
    }

};

struct arbolMundo{
    Nodo* raiz;

    arbolMundo(){
        raiz = NULL;
    }

    void insertar (Persona *);
    Nodo* insertar(Persona *, Nodo*);
    void pasarDatoAinsertar(listaDoble*);
    void mostrarMundo(Nodo*, int);
};

//Para la lista ordenada de humanos
struct NodoLd{
    Persona *persona;
    NodoLd *siguiente;
    NodoLd *anterior;

    NodoLd(Persona *_persona){
        persona = _persona;
        siguiente = NULL;
        anterior = NULL;
    }
};

struct listaDoble{
    NodoLd *primerNodo;
    NodoLd *ultimoNodo;

    listaDoble(){
        primerNodo = NULL;
        ultimoNodo = NULL;
    }

    //Prototipos de funciones

    void insertarAlFinal(Persona *);
    int largoLista();
    void imprimir();
    int porcentaje();
    void metodoOrdenamiento();
 //   listaDoble *devolverRandom(); //devuelve lista ordenada de indices random
 //   listaDoble *listaParaArbol();
 //   bool inLista(int);
    QVector<int> devolverRandom();
    QVector<Persona*> listaParaArbol();
    //COSAS REPETIDAS, NO SÉ (por hacerlo con qvector):C
    QVector<int> ordenarIndices(QVector<int>);
    bool inLista(int,QVector<int>);
    int indiceRandom(int);
    int cercanoAux(int);
    int cercanoAlaPotencia(int,int,int);
    NodoLd* borrarEnPosicion(int);
    NodoLd* find(int);


};


#endif // MUNDO_H
