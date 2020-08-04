#include "arbolheapdemonio.h"

ArbolHeapDemonio::ArbolHeapDemonio(QString nombreDemonio, int pidDemonio){
    demonio= nombreDemonio;
    idDemonio=pidDemonio;
}
void ArbolHeapDemonio::insertar(Persona *persona){
    persona->estado=infierno;
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

    qDebug()<<"buscar familia";
    if(!arbol.isEmpty()){
        qDebug()<<"el heap demonio no esta vacio";
        int largo = arbol.length()-1;
        for(int i = 0;i<largo ; i++){
            if (arbol[i]->apellidoFamilia == persona->getApellido() && arbol[i]->paisFamilia==persona->pais[0]){
                return arbol[i];
            }
        }

    }
    return NULL;
}

int ArbolHeapDemonio::random(){
    std::uniform_int_distribution<int> distrib(0, 4);
    return distrib(*QRandomGenerator::global());

}
void ArbolHeapDemonio::imprimir(){

    for (int i=0;i<=arbol.length()-1;i++){
        arbol[i]->imprimir();
    }
}




