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
QString Infierno::condenar(QVector<Persona *> condenados, int demonio){
    for(int i = 0 ; i < condenados.size() ; i++){
        qDebug()<<condenados[i];
        demonios[demonio]->insertar(condenados[i]);
    }
    return condenacionLog(condenados);
}
/**
 * Recorre el arreglo de demonios pidiendoles el menos pecador de su arbol
 * @brief Infierno::menosPecador
 * @return persona menos pecadora del infierno
 */
Persona * Infierno::menosPecador(){
    Persona * menosPecadorv = NULL;
    qDebug()<<"menos pecador del demonio 0";

    for(int i = 0 ; i < 7 ; i++){
        qDebug()<<"i: "+QString::number(i);
        if(!demonios[i]->arbol.isEmpty() && demonios[i]->menosPecador()->pureza() > menosPecadorv->pureza()){
            qDebug()<<"el nuevo es menos pecador";
            Persona * p=demonios[i]->menosPecador();
            p->imprimir();
            menosPecadorv = p;
        }
        qDebug()<<"siguiente";
    }
    qDebug()<<"llama a eliminar";
    eliminarHumano(menosPecadorv);
    imprimir();
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
QString Infierno::condenacionLog(QVector<Persona *>condenados){
        QString datos="";
        for (int i = 0; i < condenados.size() ; i++){
             datos += time()+"\t Humano \t"+QString::number(condenados[1]->getId())+" "+condenados[i]->getNombre()+"\t"+condenados[i]->getApellido()+"\t"+
                     condenados[i]->getPais()+".\t Balance: "+QString::number(condenados[i]->getCantPecados())+" pecados vs "+
                     QString::number(condenados[i]->getCantBuenasAcciones())+" buenas acciones."+"\t Condenado por *ISERTAR AQUI DEMONIOS";

        }
        return datos;



}
QString Infierno::time(){
    QDateTime UTC(QDateTime::currentDateTimeUtc());
    QDateTime local(UTC.toLocalTime());
    QString x=local.toString(Qt::SystemLocaleShortDate);
    return x;
}
void Infierno::imprimir(){
    for(int i = 0 ; i < 7 ; i++){
        demonios[i]->imprimir();
    }
}
