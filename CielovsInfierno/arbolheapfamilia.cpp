
#include "ArbolHeapFamilia.h"

void ArbolHeapFamilia::insertar(Persona *persona){
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

void ArbolHeapFamilia::imprimir(){

    for (int i=0;i<=arbol.length()-1;i++){
        qDebug()<<arbol[i]->getId();
    }
}
