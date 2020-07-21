#include "tablahashenteros.h"

TablaHashEnteros::TablaHashEnteros()
{
    qDebug()<<"Tabla creada";
}
int TablaHashEnteros::funcionHash(int n){
    int a =n%2000;
    qDebug()<<"generando key para"+QString::number(n)+" salio "+QString::number(a);
    return n%2000;        //los bucket no deberian tener mas de 5000
}
bool TablaHashEnteros::insertar(int pn){
    if(!inTabla(pn)){
        qDebug()<<"No esta en la tabla, insertando";
        int key = funcionHash(pn);
        tabla[key].insert(pn);
        return true;
    }
    else{
        qDebug()<<"ya esta en la tabla";
        return false;
    }
}
bool TablaHashEnteros::inTabla(int pn){
    qDebug()<<"inTbla";
    int key = funcionHash(pn);
    if(tabla[key].lookFor(pn)){
        qDebug()<<"esta en tabla funcion";
        return true;
    }
    else{
        qDebug()<<"no esta en tabla funcionen";
        return false;
    }
}
void TablaHashEnteros::imprimirTabla(){
    for(int i=0;i<2000; i++){
        tabla[i].printAll();
    }
}

