#include "infierno.h"

Infierno::Infierno(){
    QString nombres[]={"Lucifer","Belcebu","Satan","Abadon","Mammon","Belfegor","Asmodeo"};
    QString pecados[]={"Orgullo","envidia","ira","pereza","codicia","gula","lujuria"};
    for(int i = 0 ; i < 7 ; i++){
        demonios[i]=new ArbolHeapDemonio(nombres[i],i,pecados[i]);
    }
}

/**
  inserta los condenados que recibe en el demonio que se le indica por parametro
 * @brief Infierno::condenar
 * @param condenados
 * @param demonio
 */
QString Infierno::condenar(QVector<Persona *> condenados, int demonio){
    QString datos="";
    for(int i = 0 ; i < condenados.size() ; i++){
        demonios[demonio]->insertar(condenados[i]);
        registrarPecados(condenados[i]);
        datos += condenacionLog(condenados[i],demonio);
    }
    return datos;
}

/**
 * Recorre el arreglo de demonios pidiendoles el menos pecador de su arbol
 * @brief Infierno::menosPecador
 * @return persona menos pecadora del infierno
 */
Persona * Infierno::menosPecador(){
    imprimir();
    Persona * menosPecadorv = NULL;
//gggggggggggggggggggggggggggggggg
    //hhhhhhhhhhhhhhhhhhh
    for(int i = 0 ; i < 7 ; i++){/*
        qDebug()<<"i: "+QString::number(i);
        if((menosPecadorv == NULL && !demonios[i]->arbol.isEmpty()) || (!demonios[i]->arbol.isEmpty()&& demonios[i]->menosPecador()!=NULL)){
                if(menosPecadorv == NULL || demonios[i]->menosPecador()->pureza() > menosPecadorv->pureza()){
                    qDebug()<<"nuevo";
                     Persona * p=demonios[i]->menosPecador();
                     qDebug()<<"aqui";
                     menosPecadorv = p;
                     qDebug()<<"aja";
                }

        }
    }
    if(menosPecadorv!=NULL){
        eliminarHumano(menosPecadorv);
        menosPecadorv->estado = cielo;
    }
    imprimir();

    return menosPecadorv;*/
            if(demonios[i]->menosPecador()!=NULL ){
                if(menosPecadorv != NULL){
                    if(demonios[i]->menosPecador()->pureza() > menosPecadorv->pureza()){
                        menosPecadorv=demonios[i]->menosPecador();
                    }
                }
                else{
                    menosPecadorv=demonios[i]->menosPecador();
                }
            }
        }
    if(menosPecadorv!=NULL){
        eliminarHumano(menosPecadorv);
        menosPecadorv->estado = cielo;
    }
    imprimir();
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
            eliminarPecados(humano);
            qDebug()<<"break";
            break;
        }
    }
    qDebug()<<"listo";
}
QString Infierno::condenacionLog(Persona * condenados,int demonio){
        QString datos= time()+"\t Humano \t"+QString::number(condenados->getId())+" "+condenados->getNombre()+"\t"+condenados->getApellido()+"\t"+
                     condenados->getPais()+".\t Balance: "+QString::number(condenados->getCantPecados())+" pecados vs "+
                     QString::number(condenados->getCantBuenasAcciones())+" buenas acciones."+"\t Condenado por "+demonios[demonio]->demonio;


        return datos;



}
QString Infierno::consultasInfierno(){
    QString datos = "";
    for(int i = 0 ; i < 7 ; i++){
        qDebug()<<"demoniooo"+QString::number(i);
        datos += demonios[i]->consultas();
    }
    return datos;
}
QString Infierno::cantxPecados(){
    QString datos;
    for(int i=0 ; i<7 ; i++ ){
        datos+=demonios[i]->demonio+"\t"+QString::number(demonios[i]->cantPecados)+"\n";
    }
    datos+="\n";
    return datos;
}
QString Infierno::cantxPecadosAB(){
    QString ba[7]={"Humildad :","Solidarida :","Calma :","Diligencia :","Donacion :","Ayuno :","Castidad :"};
    QString datos;
    for(int i=0 ; i<7 ; i++ ){
        datos+=ba[i]+"\t"+QString::number(demonios[i]->cantAB)+"\n";
    }
    return datos;
}
int Infierno::neto(){
    int todo[7]={0,0,0,0,0,0,0};
    int pecados=0;
    int ab=0;
    for(int i = 0 ; i < 7 ; i++){
        pecados+=demonios[i]->cantPecados;
        ab+=demonios[i]->cantAB;
        todo[i]=pecados-ab;
    }
    int neto=0;
    for(int i = 0 ; i < 7 ; i++){
        neto+=todo[i];
    }
    return neto;
}
void Infierno::registrarPecados(Persona * persona){
    for(int i = 0 ; i < 7 ; i++){
        demonios[i]->cantPecados += persona->pecados[i];
        demonios[i]->cantAB += persona->buenasAcciones[i];
    }
}
void Infierno::eliminarPecados(Persona * humano){
    for(int i = 0 ; i < 7 ; i++){
        demonios[i]->cantPecados -= humano->pecados[i];
        demonios[i]->cantAB -= humano->buenasAcciones[i];
    }
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
