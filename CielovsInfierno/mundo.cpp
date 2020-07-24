#include "mundo.h"
#include <QDebug>
#include <math.h>
#include <conio.h>
#include <QDebug>

void arbolMundo::insertar(Persona *persona){

    raiz = insertar(persona, raiz);
}

Nodo* arbolMundo::insertar(Persona *persona, Nodo* nodo){

    /*Cuando el nodo es nulo ahí debe insertar*/
    if (nodo == nullptr){
        nodo = new Nodo(persona); //return new Nodo(valor);  es lo mismo
    }
    /*Si el dato del nodo a insertar es mayor busca donde insertar
    a la derecha
    */
    else if (nodo->persona->getId() < persona->getId()){
        nodo->hijoderecho = insertar(persona, nodo->hijoderecho);
    }
    /*Si el dato del nodo a insertar es menor busca donde insertar
    a la izquierda
    */
    else if (nodo->persona->getId() >= persona->getId()){
        nodo->hijoizquierdo = insertar(persona, nodo->hijoizquierdo);
    }
    return nodo;
}

void arbolMundo::mostrarMundo(Nodo* nodo, int contador){
    if (nodo == nullptr)
        return;
    else{
        mostrarMundo(nodo->hijoderecho,contador+1); //se muestra toda la derecha
        for (int i=0;i<contador;i++){
            qDebug()<<"         ";
        }
        qDebug()<<nodo->persona->getId()<<Qt::endl<<Qt::endl;
        mostrarMundo(nodo->hijoizquierdo,contador+1);//luego toda la izquierda
    }
}








//LISTA DEL MUNDO


void listaDoble::insertarAlFinal(Persona *persona){
    /*
    Funcion: Insertar al final de la lista.
    Entradas: Entero dato.
    Salidas: Ninguna.
    */
    if (primerNodo==NULL){
        primerNodo=ultimoNodo= new NodoLd(persona);
    }
    else{
        ultimoNodo->siguiente = new NodoLd(persona);
        ultimoNodo->siguiente->anterior = ultimoNodo;
        ultimoNodo = ultimoNodo->siguiente;
    }
}


void listaDoble::imprimir(){
    /*
    Funcion: Imprimir toda la lista.
    Entradas: Ninguna.
    Salidas: Ninguna.
    */
    if (primerNodo == NULL){
        qDebug()<<"La lista esta vacia";
    }
    else{
        NodoLd *temporal= primerNodo;
        while(temporal->siguiente != NULL){
            qDebug()<<temporal->persona->getId()<<" -> ";
            temporal = temporal->siguiente;
    }
        qDebug()<<temporal->persona->getId();
    }

}

int listaDoble::largoLista(){
    /*
    Funcion: Decir el largo de la lista.
    Entradas: Ninguna.
    Salidas: Ninguna.
    */
    if (primerNodo==NULL){
        return 0;
    }
    else{
        NodoLd *temporal = primerNodo;
        int contador=0;
        while(temporal != NULL){
            contador++;
            temporal = temporal->siguiente;
        }
        return contador;
    }
}


int listaDoble::porcentaje(){

    int largo = largoLista();
    //cantidad nodos del arbol
    int porcentaje = largo*0.1; //cambiar por 0.01
    //Devuelve el porcentaje en cantidad con la suma de potencias de 2 mayor al 10%
    return cercanoAux(porcentaje);
}

int listaDoble::cercanoAux(int num){
    return cercanoAlaPotencia(num,0,0);
}


int listaDoble::cercanoAlaPotencia(int num,int resultado,int pot){
    if (resultado>num){
        return resultado;
    }

    else{
        resultado = resultado + pow(2,pot);
        return cercanoAlaPotencia(num,resultado,pot+1);
    }
}

void listaDoble::metodoOrdenamiento(){
    /*
    Funcion: Ordenar de menor a mayor
    Entradas: Ninguna
    Salidas: Ninguna
    */

    int temp;

    NodoLd *actual = primerNodo;
    NodoLd *siguiente = primerNodo;

    if (primerNodo != NULL){

        while(actual != NULL){

            siguiente = actual->siguiente;

            while(siguiente!= NULL){

                if(actual->persona->getId() > siguiente->persona->getId()){
                    temp = siguiente->persona->getId();
                    siguiente->persona->id = actual->persona->getId();
                    actual->persona->id = temp;
                }

                siguiente = siguiente->siguiente;

            }

            actual = actual->siguiente;


        }
    }

}
/// Devuelve un vector de posiciones ordenadas para luego tomar a las personas
/// \brief listaDoble::devolverRandom
/// \return
///
QVector<int> listaDoble::devolverRandom(){

    int valor;
    int porcentajeL = porcentaje();
    qDebug()<<"porcentaje"<<porcentaje();
    QVector<int> indicesParaArbol;

    for(int i=0;i<=porcentajeL-1;i++){  //hagalo la cantidad 10%
        valor = indiceRandom(largoLista());
        while(inLista(valor,indicesParaArbol)){
            valor = indiceRandom(largoLista());
        }
        indicesParaArbol.append(valor);
    }
    return ordenarIndices(indicesParaArbol); //devuelve posiciones ordenadas
}

/// Devuelve un vector con personas para crear el árbol
/// \brief listaDoble::listaParaArbol
/// \return nodosDelArbol
///
QVector<Persona*> listaDoble::listaParaArbol(){

    QVector<Persona*> nodosDelArbol;
    QVector<int> indicesParaArbol= devolverRandom();
    qDebug()<<"indices"<<indicesParaArbol;

    int j=0;
    int i=0;
    NodoLd *temporal= primerNodo;  //lista del mundo
    while(temporal != NULL && i<=indicesParaArbol.length()-1){
        if (j == indicesParaArbol[i]){
            qDebug()<<"indice i"<<indicesParaArbol[i];
            nodosDelArbol.append(temporal->persona);
            i++;
        }
        j++;
        temporal = temporal->siguiente;
    }

    qDebug()<<"indices"<<nodosDelArbol;
    //Ya está ordenada
    return nodosDelArbol;
}


bool listaDoble::inLista(int i,QVector<int> indicesParaArbol){
    for(int n=0; n<=indicesParaArbol.length()-1;n++){
        if (indicesParaArbol[n]==i){
            return true; //Ya esta en la lista
        }
    }
    return false;
}


int listaDoble::indiceRandom(int seed){
    std::uniform_int_distribution<int> distrib(0, seed);
    return distrib(*QRandomGenerator::global());
}


/// Ordena un vector con el metodo burbuja
/// \brief listaDoble::ordenarIndices
/// \param indicesParaArbol
/// \return indicesParaArbol ya ordenado
///
QVector<int> listaDoble::ordenarIndices(QVector<int> indicesParaArbol){

    int temp=0;
    for (int i=1; i<indicesParaArbol.length(); i++){
        for(int j=0 ; j<indicesParaArbol.length() - 1; j++){
            if (indicesParaArbol[j] > indicesParaArbol[j+1]){
                temp = indicesParaArbol[j];
                indicesParaArbol[j] = indicesParaArbol[j+1];
                indicesParaArbol[j+1] = temp;
            }
        }
    }
    return indicesParaArbol;
}






