#ifndef MUNDO_H
#define MUNDO_H
#include "persona.h"
#include<QVector>

struct Nodo;
struct arbolMundo;
struct listaDoble;
struct NodoLd;
struct NodoParaArbol;

struct Nodo{

    int ID;
    NodoLd* punteroALista;
    Nodo* hijoizquierdo;
    Nodo* hijoderecho;

    Nodo (int id,NodoLd* puntero){
        ID = id;
        hijoizquierdo = hijoderecho = NULL;
        punteroALista = puntero;
    }

};

struct arbolMundo{
    Nodo* raiz;

    arbolMundo(){
        raiz = NULL;
    }

    void insertar (int,NodoLd*);
    Nodo* insertar(int, Nodo*,NodoLd*);
    void pasarDatoAinsertar(QVector<NodoParaArbol*>);
    void mostrarMundo(Nodo*, int);
    void inOrder(Nodo*);
    NodoLd* recorrerArbol(int,Nodo*);
    NodoLd* recorrerListaMundo(int);
    //Informacion en pantalla
    QString ultimoNivelAux();
    QString ultimoNivel(Nodo*nodo, QString ultimo);
    int cantidadNodosAux();
    int cantidadNodos(Nodo*);
    int nivelesAux();
    int niveles(Nodo*);

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
    int porcentaje(int,int);
    void metodoOrdenamiento();
    QVector<int> devolverRandom();
    QVector<NodoParaArbol*> listaParaArbol();
    QVector<int> ordenarIndices(QVector<int>);
    bool inLista(int,QVector<int>);
    int random(int);
    int cercanoAux(int);
    int cercanoAlaPotencia(int,int,int);
    void  sumarPecadosYbuenasAcciones();
    void imprimirPecadosYbuenasAcciones();
    //Ordenar segun pecados
    listaDoble *generarCopia();
    listaDoble *determinarNivelPecador(int);
    QVector<Persona*> condenados(int);
    void ordenarPorPecado();
    QVector<int> ordenarContinentesPecado();
    QVector<int> ordenarContinentesBuenasAcciones();
    //Consultas
    QString devolverPecadores();
    QString devolverBuenos();
    void ordenarPecadores();
    void ordenarBuenos();
    QString pecadoresApellido(QString);
    QString pecadoresContininente(QString);
    QString pecadoresPais(QString);
    QString pecadoresCreencia(QString);
    QString pecadoresProfesion(QString);
    QString buenosApellido(QString);
    QString buenosContininente(QString);
    QString buenosPais(QString);
    QString buenosCreencia(QString);
    QString buenosProfesion(QString);
    int sumarPecados(NodoLd *);
    int sumarBA(NodoLd *);
    QString porcentajeConsulta(listaDoble *,bool);

};

struct NodoParaArbol{

    Persona *persona;
    NodoLd* puntero;

    NodoParaArbol(Persona *p,NodoLd* pt){
        persona = p;
        puntero = pt;
    }
};

#endif // MUNDO_H
