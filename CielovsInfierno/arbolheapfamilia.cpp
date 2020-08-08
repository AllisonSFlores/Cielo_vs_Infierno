
#include "ArbolHeapFamilia.h"

void ArbolHeapFamilia::insertar(Persona *persona){
    buscarFamilia(persona);
    arbol.append(persona);
};
void ArbolHeapFamilia::insertara(Persona *persona){
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
void ArbolHeapFamilia::ordenarAuxPecados(int _izq,int _der,int demonio){

    int izq = 0;
    int der =arbol.size()-1;
    int piv = arbol[(izq+der)/2]->pecados[demonio];
    Persona *tmp;

    do{
        while( (arbol[izq]->pecados[demonio] < piv) && (der <= _der) ){
            izq++;
        }
        while( (piv < arbol[der]->pecados[demonio]) && (der > _izq) ){
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

    if(!arbol.isEmpty()){
        int hijos = random();
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
    if (arbol.first()->padre == NULL){
        return arbol.first();
    }
    int largo = arbol.size();
    for (int i=0 ; i<largo ; i++){
        if(arbol[i] != NULL && arbol[i]->padre==NULL){
            return arbol[i];
        }
    }
    return NULL;
}
int ArbolHeapFamilia::sumarPecado(){
    int cant =0;
    for (int i=0 ; i<arbol.length()-1;i++){
        cant+=arbol[i]->getCantPecados();
    }
    return cant;
}
int ArbolHeapFamilia::sumarPecado(int d){
    int cant =0;
    for (int i=0 ; i<arbol.length();i++){
        cant+=arbol[i]->pecados[d];
    }
    return cant;
}
/**
 * Recorre el arbol buscando el humano menos pecador
 * @brief ArbolHeapFamilia::menosPecador
 * @return El humano menos pecador del arbol
 */
Persona * ArbolHeapFamilia::menosPecador(){
    Persona * menosPecadorv=NULL;
    for(int i = 0 ; i < arbol.size() ; i++){
        if(arbol[i]->pureza()> -1){
            menosPecadorv=arbol[i];
            for(int j = 0 ; j < arbol.size() ; j++){
                if(arbol[j]->pureza()>menosPecadorv->pureza()){
                    menosPecadorv=arbol[j];
                }
            }
            return menosPecadorv;
        }
    }
    return menosPecadorv;
    /*for(int i = 0 ; i < arbol.size() ; i++){

        if((menosPecadorv == NULL &&arbol[i]->pureza()> -1) ||(arbol[i]->pureza()> -1 && (arbol[i]->pureza() > menosPecadorv->pureza()))){
            menosPecadorv = arbol[i];
        }
    }
    return menosPecadorv;}*/
}
/**
 * Elimina de arbol humano
 * @brief ArbolHeapFamilia::eliminarHumano
 * @param humano
 * @return true si el humano estaba en el arbol, false si no estaba por lo que no lo pudo borrar
 */
bool ArbolHeapFamilia::eliminarHumano(Persona * humano){
    if(!arbol.isEmpty()){
        return arbol.removeOne(humano);
    }
    else{
        return false;
    }
}


int ArbolHeapFamilia::random(){
    std::uniform_int_distribution<int> distrib(0, 4);
    return distrib(*QRandomGenerator::global());

}
void ArbolHeapFamilia::imprimir(){

    for (int i = 0 ; i < arbol.size() ; i++){
        qDebug()<<"Familia size: "<<arbol.size();
        arbol[i]->imprimir();
    }
}

QString ArbolHeapFamilia::imprimirEstadoBA(){
    QString informacion = "FAMILIA: "+apellidoFamilia+" PAÍS:   "+paisFamilia+"\n";
    for (int i = 0 ; i < arbol.size() ; i++){
        informacion += arbol[i]->imprimirEstadoBA()+"\n";
    }
    return informacion;
}
QString ArbolHeapFamilia::imprimirEstadoPecados(){
    QString informacion = "FAMILIA: "+apellidoFamilia+" PAÍS:   "+paisFamilia+"\n";
    for (int i = 0 ; i < arbol.size() ; i++){
        informacion += arbol[i]->imprimirEstadoPecados()+"\n";
    }
    return informacion;
}

QString ArbolHeapFamilia::imprimirFamilia(){
    QString informacion = "FAMILIA: "+apellidoFamilia+" PAÍS:   "+paisFamilia+"\n";
    for (int i = 0 ; i < arbol.size() ; i++){
        informacion += arbol[i]->imprimirFamilia()+"\t";
    }
    return informacion;
}

QString ArbolHeapFamilia::imprimirPorcentajes(){
    QString informacion = "FAMILIA: "+apellidoFamilia+" PAÍS:   "+paisFamilia+"\n";
    informacion += "El porcentaje vivos es: " +QString::number(porcentajeVivos())+" porciento\n";
    informacion += "El porcentaje muertos y en el infierno es: " +QString::number(porcentajeInfierno())+"   porciento\n";
    informacion += "El porcentaje muertos y en el cielo es: " +QString::number(porcentajeCielo())+" porciento\n";
    return informacion;
}

double ArbolHeapFamilia::porcentajeVivos(){
    double vivos=0;
    for (int i = 0 ; i < arbol.size() ; i++){
        if(arbol[i]->getEstado()==0){
            vivos+= 1;
        }
    }
    return (vivos/arbol.size())*100;
}

double ArbolHeapFamilia::porcentajeInfierno(){
    double infierno=0;
    for (int i = 0 ; i < arbol.size() ; i++){
        if(arbol[i]->getEstado()==1){
            infierno+= 1;
        }
    }
    return (infierno/arbol.size())*100;

}

double ArbolHeapFamilia::porcentajeCielo(){

    double cielo=0;
    for (int i = 0 ; i < arbol.size() ; i++){
        if(arbol[i]->getEstado()==2){
            cielo+= 1;
        }
    }
    return (cielo/arbol.size())*100;

}
