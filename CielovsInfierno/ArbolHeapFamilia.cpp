#include "ArbolHeapFamilia.h"

void ArbolHeap::insertar(int dato){
    arbol.append(dato);
};

void ArbolHeap::ordenar(){
   ordenarAux(0,arbol.size()-1);
}

/// Ordenamiento QuickSort recursivo, ordenar dividiendo.
/// \brief ArbolHeap::ordenarAux
/// \param _izq
/// \param _der
///
void ArbolHeap::ordenarAux(int _izq,int _der){

    int izq = _izq;
    int der =_der;
    int piv = arbol[(izq+der)/2];
    int tmp = 0;

    do{
        while( (arbol[izq] < piv) && (der <= _der) ){
            izq++;
        }
        while( (piv < arbol[der]) && (der > _izq) ){
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

void ArbolHeap::imprimir(){

    for (int i=0;i<arbol.length()-1;i++){
        qDebug()<<arbol[i];
    }
}
