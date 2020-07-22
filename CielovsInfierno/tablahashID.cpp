#include "tablahashID.h"

TablaHashID::TablaHashID()
{
    qDebug()<<"Tabla creada";
}

int TablaHashID::funcionHash(int n){
    int a = n/5000;
    //qDebug()<<"Generando key para "+QString::number(n)+" salio "+QString::number(a);
    return a;
}
bool TablaHashID::insertar(int pn){
    if(!inTabla(pn)){
        int key = funcionHash(pn);
        tabla[key].insert(pn);
        return true;
    }
    else{
        return false;
    }
}

bool TablaHashID::inTabla(int pn){

    int key = funcionHash(pn);
    if(tabla[key].lookFor(pn)){  //Busca en la lista del indice key
        return true;
    }
    else{
        return false;
    }
}

void TablaHashID::imprimirTabla(){
    for(int i=0;i<2000; i++){
        qDebug()<<"Key:"<<i;
        tabla[i].printAll(); //funcion de la lista
    }
}

