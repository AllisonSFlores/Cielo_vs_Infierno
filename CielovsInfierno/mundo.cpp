#include "mundo.h"
#include <QDebug>
#include <math.h>
#include <conio.h>
#include <QDebug>


QString arbolMundo::ultimoNivelAux(){
    QString ultimo="";
    return ultimoNivel(raiz, ultimo);
}

QString arbolMundo::ultimoNivel(Nodo* nodo,QString ultimo){

    if (nodo != NULL){
        if (nodo->hijoizquierdo==NULL && nodo->hijoderecho==NULL){
            ultimo+= nodo->punteroALista->persona->imprimirFamilia();
        }
        return ultimoNivel(nodo->hijoizquierdo,ultimo)+ultimoNivel(nodo->hijoderecho,ultimo);
    }

    return ultimo;

}

int arbolMundo::cantidadNodosAux(){

    return cantidadNodos(raiz);
}
int arbolMundo::cantidadNodos(Nodo* nodo){
    if (nodo == NULL)
           return 0;
    else
           return 1+ cantidadNodos(nodo->hijoderecho)+cantidadNodos(nodo->hijoizquierdo);
}


int arbolMundo::nivelesAux(){

    return niveles(raiz);
}

int arbolMundo::niveles(Nodo* nodo){

    if (nodo == NULL)
        return -1;
    else
        return 1 + niveles(nodo->hijoizquierdo);

}

/// Saca la mitad de un vector y lo inserta en el arbol
/// \brief arbolMundo::pasarDatoAinsertar
/// \param nodosDelArbol
///
void arbolMundo::pasarDatoAinsertar(QVector<NodoParaArbol*> nodosDelArbol){

    if (!nodosDelArbol.isEmpty()){
        int largo = nodosDelArbol.size();
        int mitad = largo/2;
        if (largo%2==1){
            NodoParaArbol* borrado = nodosDelArbol[mitad];
            nodosDelArbol.remove(mitad);
            insertar(borrado->persona->getId(),borrado->puntero);
        }
        QVector<NodoParaArbol*> v1;
        QVector<NodoParaArbol*> v2;
        for (int i=0; i<mitad;i++){
            v1.append(nodosDelArbol[i]);
        }
        for (int i=mitad; i<nodosDelArbol.size();i++){
            v2.append(nodosDelArbol[i]);
        }
        pasarDatoAinsertar(v1);
        pasarDatoAinsertar(v2);
    }
}


void arbolMundo::insertar(int id, NodoLd* puntero){

    raiz = insertar(id, raiz,puntero);
}


Nodo* arbolMundo::insertar(int id, Nodo* nodo,NodoLd* puntero){

    if (nodo == nullptr){
        nodo = new Nodo(id,puntero);
    }

    else if (nodo->ID < id){
        nodo->hijoderecho = insertar(id, nodo->hijoderecho,puntero);
    }
    else if (nodo->ID >= id){
        nodo->hijoizquierdo = insertar(id, nodo->hijoizquierdo,puntero);
    }
    return nodo;
}



void arbolMundo::mostrarMundo(Nodo* nodo, int contador){
    if (nodo == nullptr)
        return;
    else{
        QString e;
        mostrarMundo(nodo->hijoderecho,contador+1); //se muestra toda la derecha
        for (int i=0;i<contador;i++){
            e+="         ";
        }
        qDebug()<<e<<nodo->ID<<Qt::endl<<Qt::endl;
        mostrarMundo(nodo->hijoizquierdo,contador+1);//luego toda la izquierda
    }
}

void arbolMundo::inOrder(Nodo* nodo){
    if (nodo != NULL){
        inOrder(nodo->hijoizquierdo);
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
        while(temporal != NULL){
           // qDebug()<<temporal->persona->getId()<<" -> ";
            qDebug()<<temporal->persona->nivelMaldad<<" -> ";
            temporal = temporal->siguiente;
        }
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
    int porcentaje = largo*0.01;
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

    Persona* temp;

    NodoLd *actual = primerNodo;
    NodoLd *siguiente = primerNodo;

    if (primerNodo != NULL){

        while(actual != NULL){

            siguiente = actual->siguiente;

            while(siguiente!= NULL){

                if(actual->persona->getId() > siguiente->persona->getId()){
                    temp = siguiente->persona;
                    siguiente->persona= actual->persona;
                    actual->persona= temp;
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


/// Pecar y heredar pecados a los hijos y nietos
/// \brief listaDoble::sumarPecadosYbuenasAcciones
///
void  listaDoble::sumarPecadosYbuenasAcciones(){

    if (primerNodo == NULL){
        qDebug()<<"La lista esta vacia";
    }
    else{

        NodoLd *temporal= primerNodo;
        while(temporal->siguiente != NULL){

            for (int i=0;i<7;i++){
               int cantPecados = random(99);
               temporal->persona->pecados[i] += cantPecados;
               int cincuentaPorciento = cantPecados*0.5;
               for (int j=0;j<5;j++){  //los 5 hijos
                    int veintiCincoPorciento = cantPecados*0.25;
                   if (temporal->persona->hijos[j] != NULL){
                       temporal->persona->hijos[j]->pecados[i]+=cincuentaPorciento;
                       for (int k=0;k<5;k++){
                           if (temporal->persona->hijos[j]->hijos[k]!= NULL){
                               temporal->persona->hijos[j]->hijos[k]->pecados[i] = veintiCincoPorciento;
                           }
                       }
                   }
               }

            }
            temporal = temporal->siguiente;
        }

        //Porque primero se crean los pecados.
        NodoLd *tmp= primerNodo;
        while(tmp->siguiente != NULL){

            for (int i=0;i<7;i++){
               tmp->persona->buenasAcciones[i] += random(99);
            }
            tmp = tmp->siguiente;
        }

    }
}


void listaDoble::imprimirPecadosYbuenasAcciones(){
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
                qDebug()<<"Tipo de buena accion: "<<j<<":"<<temporal->persona->buenasAcciones[j];
            }
            temporal = temporal->siguiente;
        }
    }

}

/// Restar el pecado con antagonico
/// \brief listaDoble::determinarNivelPecador
/// \param i
/// \return copia de la lista del mundo
///
listaDoble *listaDoble::determinarNivelPecador(int i){
    // i es el indice, o sea el pecado
    listaDoble *copia = generarCopia();

    NodoLd *temporal= copia->primerNodo;
    while(temporal!= NULL){
        int cantPecados = temporal->persona->pecados[i];
        int cantBuenasAcciones = temporal->persona->buenasAcciones[i];
        temporal->persona->nivelMaldad = cantPecados-cantBuenasAcciones;
        temporal = temporal->siguiente;
    }
    copia->ordenarPorPecado();
    return copia;
}


///  Toma el 5% de los más pecadores de cierto pecado solo si están vivos
/// \brief listaDoble::condenados
/// \param i
/// \return Qvector de los más pecadores
///
QVector<Persona*> listaDoble::condenados(int i){

    listaDoble *copia = determinarNivelPecador(i);
    //copia->imprimir();

    QVector<Persona*> masPecadores;
    //saco el 5%
    int porcentaje = (copia->largoLista())*0.05;
    int n=0;
    NodoLd *temporal= copia->primerNodo;

    while(n < porcentaje && temporal!= NULL){
        if (temporal->persona->estado == mundo){
            temporal->persona->estado = infierno;
            masPecadores.append(temporal->persona);
            n++;
        }
        temporal = temporal->siguiente;

    }

    //PARA VEEEERLOSSSS
    qDebug()<<"LOS CONDENADOS";
    for (int g=0;g<masPecadores.length();g++){
        qDebug()<<masPecadores[g]->getNombre()<<masPecadores[g]->nivelMaldad;
    }
    return masPecadores;
}


listaDoble *listaDoble::generarCopia(){

    listaDoble *copia = new listaDoble();
    NodoLd *temporal= primerNodo;
    while(temporal!= NULL){
        copia->insertarAlFinal(temporal->persona);
        temporal = temporal->siguiente;
    }
    return copia;

}



void listaDoble::ordenarPorPecado(){

    Persona *temp;
    NodoLd *actual = primerNodo;
    NodoLd *siguiente = primerNodo;

    if (primerNodo != NULL){

        while(actual != NULL){

            siguiente = actual->siguiente;

            while(siguiente!= NULL){

                if(actual->persona->nivelMaldad < siguiente->persona->nivelMaldad){
                    temp = siguiente->persona;
                    siguiente->persona = actual->persona;
                    actual->persona = temp;
                }
                siguiente = siguiente->siguiente;
            }
            actual = actual->siguiente;
        }
    }

}

QVector<int> listaDoble::ordenarContinentesPecado(){

    QVector<int>  continentes = {0,0,0,0,0};

    NodoLd *temporal= primerNodo;
    while(temporal!= NULL){
        if(temporal->persona->getContinente()=="Asia"){
            continentes[0]+=temporal->persona->getCantPecados();
        }
        else if(temporal->persona->getContinente()=="Oceania"){
            continentes[1]+=temporal->persona->getCantPecados();
        }
        else if(temporal->persona->getContinente()=="Africa"){
            continentes[2]+=temporal->persona->getCantPecados();
        }
        else if(temporal->persona->getContinente()=="America"){
            continentes[3]+=temporal->persona->getCantPecados();
        }
        else if(temporal->persona->getContinente()=="Europa"){
            continentes[4]+=temporal->persona->getCantPecados();
        }
        temporal = temporal->siguiente;
    }

    return continentes;
}



QVector<int> listaDoble::ordenarContinentesBuenasAcciones(){

    QVector<int>  continentes = {0,0,0,0,0};

    NodoLd *temporal= primerNodo;
    while(temporal!= NULL){
        if(temporal->persona->getContinente()=="Asia"){
            continentes[0]+=temporal->persona->getCantBuenasAcciones();
        }
        else if(temporal->persona->getContinente()=="Oceania"){
            continentes[1]+=temporal->persona->getCantBuenasAcciones();
        }
        else if(temporal->persona->getContinente()=="Africa"){
            continentes[2]+=temporal->persona->getCantBuenasAcciones();
        }
        else if(temporal->persona->getContinente()=="America"){
            continentes[3]+=temporal->persona->getCantBuenasAcciones();
        }
        else if(temporal->persona->getContinente()=="Europa"){
            continentes[4]+=temporal->persona->getCantBuenasAcciones();
        }
        temporal = temporal->siguiente;
    }

    return continentes;
}

QString listaDoble::devolverPecadores(){
    QString filtro;
    NodoLd *temporal= primerNodo;

    while(temporal != NULL){
        filtro+=temporal->persona->imprimirPersonaP();
        temporal = temporal->siguiente;
    }
    return filtro;
}


QString listaDoble::devolverBuenos(){
    QString filtro;
    NodoLd *temporal= primerNodo;

    while(temporal != NULL){
        filtro+=temporal->persona->imprimirPersonaB();
        temporal = temporal->siguiente;
    }
    return filtro;
}



void listaDoble::ordenarPecadores(){

    Persona *temp;
    NodoLd *actual = primerNodo;
    NodoLd *siguiente = primerNodo;

    if (primerNodo != NULL){

        while(actual != NULL){

            siguiente = actual->siguiente;

            while(siguiente!= NULL){

                if(actual->persona->getCantPecados() < siguiente->persona->getCantPecados()){
                    temp = siguiente->persona;
                    siguiente->persona = actual->persona;
                    actual->persona = temp;
                }
                siguiente = siguiente->siguiente;
            }
            actual = actual->siguiente;
        }
    }
}
void listaDoble::ordenarBuenos(){

    Persona *temp;
    NodoLd *actual = primerNodo;
    NodoLd *siguiente = primerNodo;

    if (primerNodo != NULL){

        while(actual != NULL){

            siguiente = actual->siguiente;

            while(siguiente!= NULL){

                if(actual->persona->getCantBuenasAcciones()< siguiente->persona->getCantBuenasAcciones()){
                    temp = siguiente->persona;
                    siguiente->persona = actual->persona;
                    actual->persona = temp;
                }
                siguiente = siguiente->siguiente;
            }
            actual = actual->siguiente;
        }
    }

}



QString listaDoble::pecadoresApellido(QString apellido){
   QString filtro;
   NodoLd *temporal= primerNodo;
   listaDoble *subLista=new listaDoble();

    while(temporal != NULL){
        if (temporal->persona->getApellido()==apellido){
            subLista->insertarAlFinal(temporal->persona);
        }
        temporal = temporal->siguiente;
    }

    subLista->ordenarPecadores();
    filtro = subLista->devolverPecadores();
    return filtro;

}

QString listaDoble::buenosApellido(QString apellido){
   QString filtro;
   NodoLd *temporal= primerNodo;
   listaDoble *subLista=new listaDoble();

    while(temporal != NULL){
        if (temporal->persona->getApellido()==apellido){
            subLista->insertarAlFinal(temporal->persona);
        }
        temporal = temporal->siguiente;
    }

    subLista->ordenarBuenos();
    filtro = subLista->devolverBuenos();
    return filtro;

}


QString listaDoble::pecadoresPais(QString pais){
    QString filtro;
    NodoLd *temporal= primerNodo;
    listaDoble *subLista=new listaDoble();

     while(temporal != NULL){
         if (temporal->persona->getPais()==pais){
             subLista->insertarAlFinal(temporal->persona);
         }
         temporal = temporal->siguiente;
     }

     subLista->ordenarPecadores();
     filtro = subLista->devolverPecadores();
     return filtro;
}



QString listaDoble::buenosPais(QString pais){

    QString filtro;
    NodoLd *temporal= primerNodo;
    listaDoble *subLista=new listaDoble();

     while(temporal != NULL){
         if (temporal->persona->getPais()==pais){
             subLista->insertarAlFinal(temporal->persona);
         }
         temporal = temporal->siguiente;
     }

     subLista->ordenarBuenos();
     filtro = subLista->devolverBuenos();
     return filtro;
}



QString listaDoble::pecadoresContininente(QString continente){
    QString filtro;
    NodoLd *temporal= primerNodo;
    listaDoble *subLista=new listaDoble();

     while(temporal != NULL){
         if (temporal->persona->getContinente()==continente){
             subLista->insertarAlFinal(temporal->persona);
         }
         temporal = temporal->siguiente;
     }

     subLista->ordenarPecadores();
     filtro = subLista->devolverPecadores();
     return filtro;
}


QString listaDoble::buenosContininente(QString continente){
    QString filtro;
    NodoLd *temporal= primerNodo;
    listaDoble *subLista=new listaDoble();

     while(temporal != NULL){
         if (temporal->persona->getContinente()==continente){
             subLista->insertarAlFinal(temporal->persona);
         }
         temporal = temporal->siguiente;
     }

     subLista->ordenarBuenos();
     filtro = subLista->devolverBuenos();
     return filtro;
}


QString listaDoble::pecadoresCreencia(QString creencia){
    QString filtro;
    NodoLd *temporal= primerNodo;
    listaDoble *subLista=new listaDoble();

     while(temporal != NULL){
         if (temporal->persona->getCreencia()==creencia){
             subLista->insertarAlFinal(temporal->persona);
         }
         temporal = temporal->siguiente;
     }

     subLista->ordenarPecadores();
     filtro = subLista->devolverPecadores();
     return filtro;

}
QString listaDoble::buenosCreencia(QString creencia){
    QString filtro;
    NodoLd *temporal= primerNodo;
    listaDoble *subLista=new listaDoble();

     while(temporal != NULL){
         if (temporal->persona->getCreencia()==creencia){
             subLista->insertarAlFinal(temporal->persona);
         }
         temporal = temporal->siguiente;
     }

     subLista->ordenarBuenos();
     filtro = subLista->devolverBuenos();
     return filtro;

}

QString listaDoble::pecadoresProfesion(QString profesion){
    QString filtro;
    NodoLd *temporal= primerNodo;
    listaDoble *subLista=new listaDoble();

     while(temporal != NULL){
         if (temporal->persona->getProfesion()==profesion){
             subLista->insertarAlFinal(temporal->persona);
         }
         temporal = temporal->siguiente;
     }

     subLista->ordenarPecadores();
     filtro = subLista->devolverPecadores();
     return filtro;

}

QString listaDoble::buenosProfesion(QString profesion){
    QString filtro;
    NodoLd *temporal= primerNodo;
    listaDoble *subLista=new listaDoble();

     while(temporal != NULL){
         if (temporal->persona->getProfesion()==profesion){
             subLista->insertarAlFinal(temporal->persona);
         }
         temporal = temporal->siguiente;
     }

     subLista->ordenarBuenos();
     filtro = subLista->devolverBuenos();
     return filtro;

}


