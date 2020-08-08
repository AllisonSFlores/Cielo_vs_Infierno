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
        registrarAB(phumano);
        return true;
    }
    else{
        return false;
    }
}

int TablaHashCielo::neto(){
    int ba=0;
    int peca=0;
    for(int i = 0 ; i < 7 ; i++){
        ba+=cantAb[i];
        peca+=cantPecados[i];
    }
    return ba-peca;
}
void TablaHashCielo::registrarAB(Persona * humano){
    for(int i = 0 ; i < 7 ; i++){
        cantAb[i]+=humano->buenasAcciones[i];
        cantPecados[i]+=humano->pecados[i];
    }
}
QString TablaHashCielo::cantxAB(){
    QString ba[7]={"Humildad :","Solidarida :","Calma :","Diligencia :","Donacion :","Ayuno :","Castidad :"};
    QString datos;
    for(int i = 0 ; i < 7 ; i++){
        datos+=ba[i]+"\t"+QString::number(cantAb[i])+"\n";
    }
    return datos;
}
QString TablaHashCielo::cantxPecados(){
    QString ba[7]={"Orgullo :","Envidia :","Ira :","Pereza :","Codicia :","Gula :","Lujuria :"};
    QString datos;
    for(int i = 0 ; i < 7 ; i++){
        datos+=ba[i]+"\t"+QString::number(cantPecados[i])+"\n";
    }
    datos+="\n";
    return datos;
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
QString TablaHashCielo::informacion(){
    QString datos="";
    for(int i = 0 ; i < 1000 ; i++){
        datos+="Bucket: "+QString::number(i)+"\n";
        datos+=tabla[i].consultas()+"\n";
    }
    return datos;
}
