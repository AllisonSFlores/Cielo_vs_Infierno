#include "arbolheapdemonio.h"

ArbolHeapDemonio::ArbolHeapDemonio(QString nombreDemonio, int pidDemonio){
    demonio= nombreDemonio;
    idDemonio=pidDemonio;
}
void ArbolHeapDemonio::insertar(Persona *persona){
    qDebug()<<"Insertando a";
    persona->imprimir();
    ArbolHeapFamilia * familia = buscarFamilia(persona);
    if(familia != NULL){
        familia->insertar(persona);
    }
    else{
        familia=new ArbolHeapFamilia();
        familia->insertar(persona);
        arbol.append(familia);
        ordenar();
    }
};

void ArbolHeapDemonio::ordenar(){
   ordenarAux(0,arbol.size()-1);
}

/// Ordenamiento QuickSort recursivo, ordenar dividiendo.
/// \brief ArbolHeap::ordenarAux
/// \param _izq
/// \param _der
///
void ArbolHeapDemonio::ordenarAux(int _izq,int _der){

    int izq = _izq;
    int der =_der;
    int piv = arbol[(izq+der)/2]->sumarPecado(idDemonio);
    ArbolHeapFamilia *tmp;

    do{
        while( (arbol[izq]->sumarPecado(idDemonio) < piv) && (der <= _der) ){
            izq++;
        }
        while( (piv < arbol[der]->sumarPecado(idDemonio)) && (der > _izq) ){
            der--;
        }
        if( izq <= der ){
            tmp = arbol[izq];
            arbol[izq] = arbol[der];
            arbol[der] = tmp;
            izq++;
            der--;
        }
    }while( izq <= der );


    if( _izq < der )
        ordenarAux(_izq, der);
    if( izq < _der )
       ordenarAux(izq,_der );
}

ArbolHeapFamilia *  ArbolHeapDemonio::buscarFamilia(Persona * persona){

    qDebug()<<"buscar heap de mi familia";
    if(!arbol.isEmpty()){
        int largo = arbol.length();
        for(int i = 0;i<largo ; i++){
            if (arbol[i]->apellidoFamilia == persona->getApellido() && arbol[i]->paisFamilia == persona->getPais()){
                return arbol[i];
            }
        }

    }
    return NULL;
}

Persona * ArbolHeapDemonio::menosPecador(){
    Persona * menosPecadorv = arbol[0]->menosPecador();
    for(int i = 1 ; i < arbol.size() ; i++){
        if( arbol[i]->menosPecador()->pureza() > menosPecadorv->pureza()){
            menosPecadorv = arbol[i]->menosPecador();
        }
    }
    return menosPecadorv;
}
bool ArbolHeapDemonio::eliminarHumano(Persona *humano){
    for(int i = 0 ; i < arbol.size() ; i++){
        if(arbol[i]->eliminarHumano(humano)){
            qDebug()<<"true de eliminar heap demonio";
            return true;
        }
    }
    qDebug()<<"false de eliminar heap demonio";
    return false;
}

void ArbolHeapDemonio::imprimir(){
    qDebug()<<"--------------------------------------------"+demonio;
    if(!arbol.isEmpty()){

        int i =0;
        while(i<arbol.size() && arbol[i]!=NULL){
            arbol[i]->imprimir();
            i++;
        }
        }
    else{
        qDebug()<<"vacia";
    }
}




