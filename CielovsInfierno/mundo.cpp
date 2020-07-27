#include "mundo.h"
#include <QDebug>
#include <math.h>
#include <conio.h>
#include <QDebug>


void arbolMundo::pasarDatoAinsertar(QVector<NodoParaArbol*> nodosDelArbol){


    int largo = nodosDelArbol.length();
   // qDebug()<<"Largo"<<largo;
    if (largo>3){
        while (largo>4){
            int mitad=largo/2;
            //qDebug()<<"mitad"<<mitad;
            //solo es impar una vez
            if(largo%2 == 1){
                NodoParaArbol* borrado = nodosDelArbol[mitad];
                insertar(borrado->persona->getId(),borrado->puntero); //falta el puntero lo paso al insertar
                nodosDelArbol.remove(mitad);

            }
            else{
                int mediaMitad = mitad/2;
                NodoParaArbol* borrado1 = nodosDelArbol[mediaMitad];
                insertar(borrado1->persona->getId(),borrado1->puntero);
                nodosDelArbol.remove(mediaMitad);
                NodoParaArbol* borrado2 = nodosDelArbol[(mitad+mediaMitad)-1];
                insertar(borrado2->persona->getId(),borrado2->puntero);
                nodosDelArbol.remove((mitad+mediaMitad)-1);
            }

            largo = nodosDelArbol.length();
        }
    //cuando solo quedan 4 noditos, metalos
        for (int i=0;i<largo;i++){
            NodoParaArbol* borrado = nodosDelArbol[i];
            insertar(borrado->persona->getId(),borrado->puntero);
        }
    }
    else if (largo==1){
        NodoParaArbol* borrado = nodosDelArbol[0];
        insertar(borrado->persona->getId(),borrado->puntero);
    }
    else{
        //qDebug()<<"arbol de 3 nodos "<<largo;
        //si es un arbol de 3, el del medio es la raiz
        int mitad=largo/2;
       // qDebug()<<"mitad arbol de 3 nodos "<<mitad;
        NodoParaArbol* borrado = nodosDelArbol[mitad];
        insertar(borrado->persona->getId(),borrado->puntero); //falta el puntero lo paso al insertar
        nodosDelArbol.remove(mitad);
       // qDebug()<<"mitad arbol de 3 nodos "<<mitad;
        largo = nodosDelArbol.length();
        //insertar los otros 2
        for (int i=0;i<largo;i++){
            NodoParaArbol* borrado = nodosDelArbol[i];
            insertar(borrado->persona->getId(),borrado->puntero);
        }
    }
}


void arbolMundo::insertar(int id, NodoLd* puntero){

    raiz = insertar(id, raiz,puntero);
}

Nodo* arbolMundo::insertar(int id, Nodo* nodo,NodoLd* puntero){

    /*Cuando el nodo es nulo ahí debe insertar*/
    if (nodo == nullptr){
        nodo = new Nodo(id,puntero); //return new Nodo(valor);  es lo mismo
    }
    /*Si el dato del nodo a insertar es mayor busca donde insertar
    a la derecha
    */
    else if (nodo->ID < id){
        nodo->hijoderecho = insertar(id, nodo->hijoderecho,puntero);
    }
    /*Si el dato del nodo a insertar es menor busca donde insertar
    a la izquierda
    */
    else if (nodo->ID >= id){
        nodo->hijoizquierdo = insertar(id, nodo->hijoizquierdo,puntero);
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
        qDebug()<<nodo->ID<<Qt::endl<<Qt::endl;
        mostrarMundo(nodo->hijoizquierdo,contador+1);//luego toda la izquierda
    }
}

void arbolMundo::inOrder(Nodo* nodo){
    if (nodo != NULL){
        inOrder(nodo->hijoizquierdo);
        //Nomás para comprobar
        qDebug()<<"Nodo ID: "<<nodo->ID << " -- Puntero a sí mismo en lista "<<nodo->punteroALista<< " -- con ID de persona "<<nodo->punteroALista->persona->getId();
        inOrder(nodo->hijoderecho);
    }
}

/// Recorre el arbol buscando en el mejor camino para recorrer la lista
/// \brief arbolMundo::recorrerArbol
/// \param id
/// \param nodo
/// \return el nodo que tiene el puntero a lista
///
NodoLd* arbolMundo::recorrerArbol(int id, Nodo* nodo){

    if (nodo->hijoderecho == NULL && nodo->hijoderecho == NULL){
        return  nodo->punteroALista;
    }
    else if (nodo->ID < id){
        return  recorrerArbol(id, nodo->hijoderecho);
    }
    else {
        return recorrerArbol(id, nodo->hijoizquierdo);
    }

}

/// Dado un nodo de la lista recorre hacia la derecha o izquierda en busqueda de otro nodo
/// \brief arbolMundo::recorrerListaMundo
/// \param id
/// \return temporal, nodo con puntero a una persona.
///
NodoLd* arbolMundo::recorrerListaMundo(int id){

    NodoLd *temporal = recorrerArbol(id, raiz);
    while(temporal != NULL){
        if (temporal->persona->getId() < id){
            qDebug()<<"Se fue a la derecha";
            temporal = temporal->siguiente;
        }
        else if (temporal->persona->getId() > id){
            qDebug()<<"Se fue a la izquierda";
            temporal = temporal->anterior;
        }
        else{
            qDebug()<<"ID encontrado: "<<temporal->persona->getId();
            return temporal;
            break;
       }
    }

    return NULL;
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
        valor = random(largoLista()-1);
        while(inLista(valor,indicesParaArbol)){
            valor = random(largoLista()-1);
        }
        indicesParaArbol.append(valor);
    }
    return ordenarIndices(indicesParaArbol); //devuelve posiciones ordenadas
}

/// Devuelve un vector con personas para crear el árbol
/// \brief listaDoble::listaParaArbol
/// \return nodosDelArbol
///
QVector<NodoParaArbol*> listaDoble::listaParaArbol(){

    QVector<NodoParaArbol*> nodosDelArbol;
    QVector<int> indicesParaArbol= devolverRandom();
   // qDebug()<<"indices"<<indicesParaArbol;

    int j=0;
    int i=0;
    NodoLd *temporal= primerNodo;  //lista del mundo

    while(temporal != NULL && i<indicesParaArbol.size()){
        if (j == indicesParaArbol[i]){
            NodoParaArbol *nodo = new NodoParaArbol(temporal->persona,temporal);
            nodosDelArbol.append(nodo);
            i++;
        }
        j++;
        temporal = temporal->siguiente;
    }

    //qDebug()<<"indices nodo arbol"<<nodosDelArbol;
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


int listaDoble::random(int seed){
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

void  listaDoble::sumarPecados(){

    if (primerNodo == NULL){
        qDebug()<<"La lista esta vacia";
    }
    else{

        NodoLd *temporal= primerNodo;
        while(temporal->siguiente != NULL){

            for (int i=0;i<7;i++){
               temporal->persona->pecados[i] += random(99);
            }
            temporal = temporal->siguiente;
        }

    }
}

//Prueba
void listaDoble::imprimirPecados(){
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
            qDebug()<<temporal->persona->getNombre()+" "+temporal->persona->getApellido();
            for (int j=0;j<7;j++){
                qDebug()<<"Tipo de pecado: "<<j<<":"<<temporal->persona->pecados[j];
            }
            temporal = temporal->siguiente;
        }
    }

}

