#include "infierno.h"

Infierno::Infierno(){
    QString nombres[]={"Lucifer","Belcebu","Satan","Abadon","Mammon","Belfegor","Asmodeo"};
    for(int i = 0 ; i < 7 ; i++){
        demonios[i]=new ArbolHeapDemonio(nombres[i],i);
    }
}
void Infierno::condenar(QVector<Persona *> condenados, int demonio){
    for(int i = 0 ; i < condenados.size() ; i++){
        qDebug()<<condenados[i];
        demonios[demonio]->insertar(condenados[i]);
    }
}
Persona * Infierno::menosPecador(){
    Persona * menosPecadorv = demonios[0]->menosPecador();

    for(int i = 1 ; i < 7 ; i++){
        if(demonios[i]->menosPecador()->pureza() > menosPecadorv->pureza()){
            menosPecadorv = demonios[i]->menosPecador();
        }
    }
    eliminarHumano(menosPecadorv);
    menosPecadorv->estado = cielo;
    return menosPecadorv;
}
void Infierno::eliminarHumano(Persona * humano){
    for(int i = 0 ; i < 7 ; i++){
        qDebug()<<"demonio "+QString::number(i);
        if(demonios[i]->eliminarHumano(humano)){
            qDebug()<<"break";
            break;
        }
    }
    qDebug()<<"listo";
}
void Infierno::imprimir(){
    for(int i = 0 ; i < 7 ; i++){
        demonios[i]->imprimir();
    }
}
