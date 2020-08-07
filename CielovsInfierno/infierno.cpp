#include "infierno.h"

Infierno::Infierno(){
    QString nombres[]={"Lucifer","Belcebu","Satan","Abadon","Mammon","Belfegor","Asmodeo"};
    for(int i = 0 ; i < 7 ; i++){
        demonios[i]=new ArbolHeapDemonio(nombres[i],i);
    }
}
/**
  inserta los condenados que recibe en el demonio que se le indica por parametro
 * @brief Infierno::condenar
 * @param condenados
 * @param demonio
 */
void Infierno::condenar(QVector<Persona *> condenados, int demonio){
    for(int i = 0 ; i < condenados.size() ; i++){
        qDebug()<<condenados[i];
        demonios[demonio]->insertar(condenados[i]);
    }
}
/**
 * Recorre el arreglo de demonios pidiendoles el menos pecador de su arbol
 * @brief Infierno::menosPecador
 * @return persona menos pecadora del infierno
 */
Persona * Infierno::menosPecador(){
    Persona * menosPecadorv = demonios[0]->arbol[0]->menosPecador();
    qDebug()<<"menos pecador del demonio 0";

    for(int i = 1 ; i < 3 ; i++){
        qDebug()<<"i: "+QString::number(i);
        if(demonios[i]->arbol[i]->menosPecador()->pureza() > menosPecadorv->pureza()){
            qDebug()<<"el nuevo es menos pecador";
            Persona * p=demonios[i]->arbol[i]->menosPecador();
            p->imprimir();
            menosPecadorv = p;
        }
        qDebug()<<"siguiente";
    }
    qDebug()<<"llama a eliminar";
    eliminarHumano(menosPecadorv);
    qDebug()<<"antes de estado";
    menosPecadorv->estado = cielo;
    qDebug()<<"despues de estado";
    return menosPecadorv;
}
/**
 * Recorre el arreglo de demonios diciendoles que borren el humano, si retornan true es porque si estaba ahi
 * si false, se lo pide al siguiente demonio
 * @brief Infierno::eliminarHumano
 * @param humano
 */
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
