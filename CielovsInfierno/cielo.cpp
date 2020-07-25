#include "cielo.h"

Cielo::Cielo()
{

    arbol= new ArbolAngeles();
    tabla =new TablaHashCielo();
    reino();
}
void Cielo::reino(){
    Angel * dios =new Angel("Dios",0,1);
    Angel * Serafines =new Angel("Serafines",0,2);
    Angel * Querubines =new Angel("Querubines",0,2);
    Angel * Tronos =new Angel("Tronos",0,2);
    arbol->insertar(dios);arbol->insertar(Serafines);arbol->insertar(Querubines);arbol->insertar(Tronos);

}
int Cielo::getAlturaArbol(){
    return arbol->getAltura(arbol->raiz);
}
void Cielo::salvacion(){
    int n = pow(3, getAlturaArbol());
    qDebug()<<"Angeles nuevos: "+QString::number(n);
    for(int i = 0 ; i < n ; i++){
        int j = ramdom();
        Angel * angel = new Angel(nombres[0][j],version(j),0);
        //AQUI SE LES DIRIA QUE VAYAN A SALVAR AL HUMANO
        arbol->insertar(angel);
    }
}

int Cielo::version(int p){
    int v =nombres[1][p].toInt();
    nombres[1][p]=QString::number(v+1);
    return v;

}
void Cielo::nombresmatriz(){
    QString a[10]= {"Miguel","Nuriel","Aniel","Rafael","Gabriel","Shamsiel","Raguel","Uriel","Azrael","Sariel"};
    for(int i = 0 ; i < 10 ; i++){
        nombres[0][i]=a[i];
        nombres[1][i]="0";
    }
}
int Cielo::ramdom(){
    std::uniform_int_distribution<int> distrib(0, 10-1);
    return  distrib(*QRandomGenerator::global());
}
