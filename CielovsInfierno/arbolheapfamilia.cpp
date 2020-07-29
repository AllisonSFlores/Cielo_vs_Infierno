
#include "ArbolHeapFamilia.h"

void ArbolHeapFamilia::insertar(Persona *persona){
    buscarFamilia(persona);
    arbol.append(persona);
};

void ArbolHeapFamilia::ordenar(){
   ordenarAux(0,arbol.size()-1);
}

/// Ordenamiento QuickSort recursivo, ordenar dividiendo.
/// \brief ArbolHeap::ordenarAux
/// \param _izq
/// \param _der
///
void ArbolHeapFamilia::ordenarAux(int _izq,int _der){

    int izq = _izq;
    int der =_der;
    int piv = arbol[(izq+der)/2]->getId();
    Persona *tmp;

    do{
        while( (arbol[izq]->getId() < piv) && (der <= _der) ){
            izq++;
        }
        while( (piv < arbol[der]->getId()) && (der > _izq) ){
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
void ArbolHeapFamilia::buscarFamilia(Persona * persona){
    qDebug()<<"buscar familia";
    if(!arbol.isEmpty()){
        qDebug()<<"el heap familia no esta vacio";
        int hijos = random();
        qDebug()<<"buscandole a "+QString::number(persona->id)+"  "+QString::number(hijos)+" hijos";
        for (int i=1 ; i<=hijos ; i++){
            Persona * disponible =buscarDisponible();
            if (disponible == NULL){
                break;
            }
            else{
                persona->hijos[i-1]=disponible;
                disponible->padre=persona;
            }
        }
    }
}
Persona * ArbolHeapFamilia::buscarDisponible(){
    qDebug()<<"buscar disponible";
    if (arbol.first()->padre == NULL){
        qDebug()<<"raiz padre nulo";
        return arbol.first();
    }
    qDebug()<<"largo del arbol"+ QString::number(arbol.size());
    int largo = arbol.size();
    for (int i=0 ; i<largo ; i++){
        if(arbol[i] != NULL && arbol[i]->padre==NULL){
            return arbol[i];
        }
    }
    return NULL;
}/*
Persona * ArbolHeapFamilia::buscarDisponible(){
    qDebug()<<"buscar disponible";
    if (arbol.first()->padre == NULL){
        qDebug()<<"raiz padre nulo";
        return arbol.first();
    }
    qDebug()<<"largo del arbol"+ QString::number(arbol.size());
    int largo = arbol.size();
    for (int i=1 ; i<=(largo/2) ; i++){
        if(i*2<arbol.size() && arbol[i*2] != NULL && arbol[i*2]->padre==NULL){
            return arbol[i*2];
        }
        else if((i*2)+1<arbol.size() && arbol[(i*2)+1] != NULL && arbol[(i*2)+1]->padre==NULL){
                return arbol[(i*2)+1];
        }
    }
    return NULL;
}*/
int ArbolHeapFamilia::random(){
    std::uniform_int_distribution<int> distrib(0, 4);
    return distrib(*QRandomGenerator::global());

}
void ArbolHeapFamilia::imprimir(){

    for (int i=0;i<=arbol.length()-1;i++){
        arbol[i]->imprimir();
    }
}
