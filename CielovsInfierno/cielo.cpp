#include "cielo.h"

Cielo::Cielo()
{

    arbol= new ArbolAngeles();
    tabla =new TablaHashCielo();
    nombresmatriz();
    reino();
}
void Cielo::reino(){
    Angel * dios =new Angel("Dios",0,1);
    Angel * Serafines =new Angel("Serafines",0,2);
    Angel * Querubines =new Angel("Querubines",0,2);
    Angel * Tronos =new Angel("Tronos",0,2);
    arbol->insertar(dios,NULL);arbol->insertar(Serafines,NULL);arbol->insertar(Querubines,NULL);arbol->insertar(Tronos,NULL);

}
int Cielo::getAlturaArbol(){
    return arbol->getAltura(arbol->raiz);
}
int Cielo::generacion(){
    return pow(3, getAlturaArbol());
}
QString Cielo::salvacion(QVector<Persona * > salvados){
    int n = generacion();
    qDebug()<<salvados.size();
    qDebug()<<"Angeles nuevos: "+QString::number(n);
    for(int i = 0 ; i < n ; i++){
        int j = ramdom();
        Angel * angel = new Angel(nombres[0][j],version(j),0);

        if(salvados[i] != NULL){
            salvados[i]->angel = angel;
            tabla->insertar(salvados[i]);
        }
        arbol->insertar(angel,salvados[i]);
    }
    return salvacionLog(salvados);
}
QString Cielo::salvacionLog(QVector<Persona *>salvados){
    QString datos="";
    for (int i = 0; i < salvados.size() ; i++){
        if(salvados[i] != NULL){
             datos += time()+"\t Humano \t"+salvados[i]->getNombre()+"\t"+salvados[i]->getApellido()+"\t"+
                     salvados[i]->getPais()+".\t Balance: "+QString::number(salvados[i]->getCantPecados())+" pecados vs "+
                     QString::number(salvados[i]->getCantBuenasAcciones())+" buenas acciones."+"\t Salvacion por"+
                     salvados[i]->angel->nombre+" "+QString::number(salvados[i]->angel->version)+"\t generacion: "+
                     QString::number(salvados[i]->angel->generacion)+"\n";
        }
    }
    return datos;


}
QString Cielo::time(){
    QDateTime UTC(QDateTime::currentDateTimeUtc());
    QDateTime local(UTC.toLocalTime());
    return local.toString(Qt::SystemLocaleShortDate);
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
