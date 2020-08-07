#include "tablahashcielo.h"

TablaHashCielo::TablaHashCielo()
{

}

int TablaHashCielo::funcionHash(int n){
    int a = n/10000;
    return a;
}
bool TablaHashCielo::insertar(Persona * phumano){
    if(!inTabla(phumano->getId())){
        int key = funcionHash(phumano->getId());
        tabla[key].insert(phumano);
        return true;
    }
    else{
        return false;
    }
}

bool TablaHashCielo::inTabla(int pn){

    int key = funcionHash(pn);
    if(tabla[key].lookFor(pn)){  //Busca en la lista del indice key
        return true;
    }
    else{
        return false;
    }
}

void TablaHashCielo::imprimirTabla(){
    for(int i=0;i<1000; i++){
        qDebug()<<"Key:"<<i;
        tabla[i].printAll(); //funcion de la lista
    }
}
QString TablaHashCielo::informacion(QVector<Persona *>){

}
