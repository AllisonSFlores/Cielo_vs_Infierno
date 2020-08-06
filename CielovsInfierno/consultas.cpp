#include "consultas.h"

QVector<QString> Consultas::getPaises(){
    return paises;
}

void Consultas::setPaises(QVector<QString> ppaises){
    paises= ppaises;
}

void Consultas::imprimirPaises(){

    for(int i=0;i<25;i++){
        qDebug()<<paises.takeAt(i);
    }
}

void Consultas::setListaDoble(listaDoble *mundo){
    personas = mundo;
}

/// ordena los paises desde el más al menos pecador/bueno
/// \brief Consultas::ordenarPaises
/// \return
///
QVector<QString> Consultas::ordenarPaises(int sumaPaises[25]){

    //Una copia para no perder el orden original
    QVector<QString> todosPaises = paises;
    qDebug()<<"ordenarPaises len paises"<<todosPaises.length();

    int temp=0;
    QString temp2="";
      for (int i=1; i<25; i++){
        for(int j=0 ; j<25 - 1; j++){
            if (sumaPaises[j] < sumaPaises[j+1]){
                //Lista con cantidad de pecados o buenas acciones
                temp = sumaPaises[j];
                sumaPaises[j] = sumaPaises[j+1];
                sumaPaises[j+1] = temp;
                //Lista con paises
                temp2 = todosPaises[j];
                todosPaises[j] = todosPaises[j+1];
                todosPaises[j+1] = temp2;
            }
        }
      }

      qDebug()<<"RESULTADOS DE LAS SUMAS";
      for(int i=0;i<25;i++){
          qDebug()<<i<<": "<<sumaPaises[i];
      }
      qDebug()<<"RESULTADOS DE LOS PAISES";
      for(int i=0;i<25;i++){
          qDebug()<<i<<": "<<todosPaises[i];
      }
      return todosPaises;
}

/// Retorna los paises más pecadores ordenados
/// \brief Consultas::masPecadores
/// \return
///
QVector<QString> Consultas::masPecadores(){

    int sumaPaises[25]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    if (personas->primerNodo == NULL){
        qDebug()<<"La lista esta vacia";
    }
    else{
        NodoLd *temporal= personas->primerNodo;
        while(temporal != NULL){
           for(int i=0;i<25;i++){
                if (paises[i]==temporal->persona->getPais()){
                    sumaPaises[i]+=temporal->persona->getCantPecados();
                }
           }
           temporal = temporal->siguiente;
        }
    }
    return ordenarPaises(sumaPaises);

}

QVector<QString> Consultas::masBuenos(){

    int sumaPaises[25]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    if (personas->primerNodo == NULL){
        qDebug()<<"La lista esta vacia";
    }
    else{
        NodoLd *temporal= personas->primerNodo;
        while(temporal != NULL){
           for(int i=0;i<25;i++){
                if (paises[i]==temporal->persona->getPais()){
                    sumaPaises[i]+=temporal->persona->getCantBuenasAcciones();
                }
           }
           temporal = temporal->siguiente;
        }
    }
    return ordenarPaises(sumaPaises);

}

