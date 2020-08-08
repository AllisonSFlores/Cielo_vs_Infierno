#include "arbolheapdemonio.h"

ArbolHeapDemonio::ArbolHeapDemonio(QString nombreDemonio, int pidDemonio,QString ppecado){
    demonio= nombreDemonio;
    idDemonio=pidDemonio;
    pecado = ppecado;
    cantAB=0;
    cantPecados=0;
    cantPecadosHeap=0;
}
void ArbolHeapDemonio::insertar(Persona *persona){
    ArbolHeapFamilia * familia = buscarFamilia(persona);
    cantPecadosHeap += persona->pecados[idDemonio];
    if(familia != NULL){
        familia->insertar(persona);
    }
    else{
        familia=new ArbolHeapFamilia();
        familia->insertar(persona);
        arbol.append(familia);
        ordenar();
    }
    familia->ordenarAuxPecados(0,familia->arbol.size()-1, idDemonio);
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
/**
 * Busca si  ya esta creado el arbol de la familia que le corresponde a persona
 * @brief ArbolHeapDemonio::buscarFamilia
 * @param persona
 * @return
 */
ArbolHeapFamilia *  ArbolHeapDemonio::buscarFamilia(Persona * persona){

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
/**
 * Recorre el arbol pidiendole a cada familia el menos pecador y retorna el menos pecador
 * @brief ArbolHeapDemonio::menosPecador
 * @return Persona menos pecadora de todo el arbol
 */
Persona * ArbolHeapDemonio::menosPecador(){
/*
    Persona * menosPecadorv = NULL;
    for(int i = 0 ; i < arbol.size() ; i++){
        if((menosPecadorv == NULL && !arbol[i]->arbol.isEmpty()) ||arbol[i]->menosPecador()->pureza() > menosPecadorv->pureza()){
            menosPecadorv = arbol[i]->menosPecador();
        }
    }
    return menosPecadorv;*/
    Persona * menosPecadorv = NULL;
    for(int i = 0 ; i < arbol.size() ; i++){
        if(arbol[i]->menosPecador()!=NULL ){
            if(menosPecadorv != NULL){
                if(arbol[i]->menosPecador()->pureza() > menosPecadorv->pureza()){
                    menosPecadorv=arbol[i]->menosPecador();
                }
            }
            else{
                menosPecadorv=arbol[i]->menosPecador();
            }
        }
    }
    return menosPecadorv;
}
void ArbolHeapDemonio::limpiar(){
    if(!arbol.isEmpty()){
        for(int i = 0 ; i < arbol.size() ; i++){
            if(arbol[i]->arbol.isEmpty()){
                arbol.removeOne(arbol[i]);
            }
        }
    }
}
/**
 * Recorre el arbol pidiendole a cada familia que borre a humano, si le retornan true es porque estaba y lo borro
 * @brief ArbolHeapDemonio::eliminarHumano
 * @param humano
 * @return true si el humano fue eliminado, false el humano no estaba en el arbol por lo que no lo pudo borrar;
 */
bool ArbolHeapDemonio::eliminarHumano(Persona *humano){
    for(int i = 0 ; i < arbol.size() ; i++){
        if(arbol[i]->eliminarHumano(humano)){
            limpiar();
            return true;
        }
    }
    return false;
}
QString ArbolHeapDemonio::consultas(){
    QString datos = "";
        qDebug()<<demonio;
        maxPecadormin();
        datos += demonio+"\t"+pecado+"\t Cantidad de humanos:"+QString::number(canHumano())+"\t Promedio: "+
                QString::number(promedioDePecados())+"\t";
        if(!pecadoresv.isEmpty()){
            datos+=" Maximo de pecados: "+QString::number(pecadoresv[pecadoresv.size()-1]->getCantPecados())+
                    " Minimo de pecados: "+QString::number(pecadoresv[0]->getCantPecados())+"\nPecadores:";
            qDebug()<<"datos max y min "+datos;
            for(int k =pecadoresv.size()-1 ; k>=0 ; k--){

                datos+=pecadoresv[k]->imprimirFamilia();
            }
        }
    qDebug()<<datos;
    return datos;
}
void ArbolHeapDemonio::maxPecadormin(){
    if(!arbol.isEmpty()){
            for(int i =0 ; i < arbol.size() ; i++){
                for(int j =0 ; j < arbol[j]->arbol.size() ; j++){
                    pecadoresv.append(arbol[i]->arbol[j]);
                }
            }
            ordenara();
    }
}


double ArbolHeapDemonio::promedioDePecados(){
    return cantPecadosHeap / canHumano();



}

int ArbolHeapDemonio::canHumano(){
    int n=0;
    for(int i =0 ; i<arbol.size() ; i++){
        n += arbol[i]->arbol.size();
    }
    return n;
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
        qDebug()<<"vacio";
    }
}
void ArbolHeapDemonio::ordenara(){
   ordenarAuxa(0,pecadoresv.size()-1);
}

/// Ordenamiento QuickSort recursivo, ordenar dividiendo.
/// \brief ArbolHeap::ordenarAux
/// \param _izq
/// \param _der
///
void ArbolHeapDemonio::ordenarAuxa(int _izq,int _der){
    qDebug()<<pecadoresv;
    int izq = _izq;
    int der =_der;
    int piv = pecadoresv[(izq+der)/2]->getCantPecados();
    Persona *tmp;

    do{
        while( (pecadoresv[izq]->getCantPecados() < piv) && (der <= _der) ){
            izq++;
        }
        while( (piv < pecadoresv[der]->getCantPecados()) && (der > _izq) ){
            der--;
        }
        if( izq <= der ){
            tmp = pecadoresv[izq];
            pecadoresv[izq] = pecadoresv[der];
            pecadoresv[der] = tmp;
            izq++;
            der--;
        }
    }while( izq <= der );


    if( _izq < der )
        ordenarAux(_izq, der);
    if( izq < _der )
       ordenarAux(izq,_der );
}



