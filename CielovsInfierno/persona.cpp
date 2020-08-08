#include "persona.h"

Persona::Persona(int pid, QString pnombre, QString papellido,QString pcreencia, QString pprofesion)
{
    this->id=pid;
    this->nombre = pnombre;
    this->apellido = papellido;

    this->creencia=pcreencia;
    this->profesion=pprofesion;
    this->correo= nombre+QString::number(id)+"@gmail.com";
    this->padre = NULL;
    this->angel =NULL;


    this->nacimiento = getHoraNacimiento();
    this->nivelMaldad = 0;
    this->estado=mundo;
}
 Persona::Persona(int pid, QString pnombre, QString papellido, QVector<QString> ppais, QString pcreencia, QString pprofesion)
 {
     this->id=pid;
     this->nombre = pnombre;
     this->apellido = papellido;
     this->pais=ppais;
     this->creencia=pcreencia;
     this->profesion=pprofesion;
     this->correo= nombre+QString::number(id)+"@gmail.com";

     //No estoy segura si esto se hace asi jaja
     this->padre = NULL;
     this->angel = NULL;

     //o con la lista de hijos nula
     this->nacimiento = getHoraNacimiento();
     this->nivelMaldad = 0;
     this->estado=mundo;
 }

void Persona::setId(int pid){
    id=pid;
}

void Persona::setNombre(QString pnombre){
    nombre=pnombre;
}
void Persona::setApellido(QString papellido){
    apellido=papellido;
}
void Persona::setPais(QString ppais){
    pais[0]=ppais;
}
void Persona::setCreencia(QString pcredo){
    creencia=pcredo;
}
void Persona::setProfesion(QString pprofesion){
    profesion=pprofesion;
}

int Persona::getId(){
    return id;
}
QString Persona::getApellido(){
    return apellido;
}
QString Persona::getPais(){
    return pais[0];
}
QString Persona::getContinente(){
    return pais[1];
}
QString Persona::getCreencia (){
    return creencia;
}
Estado Persona::getEstado(){
    return estado;
}
QString Persona::getNombre(){
    return nombre;
}
QString Persona::getCorreo(){
    return correo;
}

///
/// \brief Persona::getHoraNacimiento
/// \return nac
///
QString Persona::getHoraNacimiento(){

    QDateTime UTC(QDateTime::currentDateTimeUtc());
    QDateTime local(UTC.toLocalTime());
    QString nac ="\t"+local.toString(Qt::SystemLocaleLongDate);
    return nac;
}


int Persona::getCantPecados(){
    int c=0;
    for(int i=0 ; i<7 ; i++){
        c+=pecados[i];
    }
    return c;
}


int Persona::getCantBuenasAcciones(){
    int c=0;
    for(int i=0 ; i<7 ; i++){
        c+=buenasAcciones[i];
    }
    return c;
}
int Persona::pureza(){
    return getCantBuenasAcciones() - getCantPecados();
}


void Persona::imprimir(){
    qDebug()<<"ID: "+QString::number(id)+"  "+nombre+"  "+apellido+ "   de  "+pais[0];
    if(padre != NULL){
        qDebug()<<"Mi padre es: "+QString::number(padre->id);
    }
    int i = 0;
    if(hijos[i]==NULL){
        qDebug()<<"No tengo familia";
    }

    else{
        qDebug()<<"Los ids de mis hijos son: ";
         while(i<5 && hijos[i]!=NULL){

            qDebug()<<"                       "+QString::number(hijos[i]->id);
            i++;
        }
    }

    qDebug()<<"Mi pureza:"+QString::number(pureza());
}

/// Es la información de la persona y su familia si la tiene
/// \brief Persona::imprimirFamilia
/// \return QString
///
QString  Persona::imprimirFamilia(){

    QString informacion="";
    informacion += "ID:\t"+QString::number(id)+"\t"+nombre+"\t"+apellido+ "\tde\t"+pais[0]+"\t";
    informacion += "\tCreencia:\t" +creencia+ "\tProfesión:\t"+profesion+ "\tCorreo:\t"+correo+"\t";
    if (estado==0){
        informacion += "Estado: Mundo\n";
    }
    else if (estado==1){
        informacion += "Estado: Infierno\n";
    }
    else{
        informacion += "Estado: Cielo\n";
    }
    informacion += estado;
    if(padre != NULL){
        informacion +="ID del padre: "+ QString::number(padre->getId())+"\n";
    }
    int i = 0;
    if(hijos[i]==NULL){
        qDebug()<<"Sin hijos\n";
    }

    else{
         informacion += "ID de los hijos: ";
         while(i<5 && hijos[i]!=NULL){

            informacion += QString::number(hijos[i]->getId())+"\n";
            i++;
        }
    }
    return informacion;
}


QString Persona::imprimirEstadoPecados(){
    QString informacion="";
    QString pecado="";
    informacion +="ID:\t"+QString::number(id)+"\n"+nombre+"\t"+apellido+ "\tde\t"+pais[0]+"\n";
    informacion += "Pecados:\n";
    for(int i =0 ; i<7 ;i++){
        switch (i) {
            case 0: pecado="orgullo";break;
            case 1: pecado="envidia";break;
            case 2: pecado="ira";break;
            case 3: pecado="pereza";break;
            case 4: pecado="codicia";break;
            case 5: pecado="glotonería";break;
            case 6: pecado="lujuria";break;
        }
        informacion+="Pecado\tde\t"+pecado+":\t"+pecados[i]+"\n";
    }
    return informacion;
}

QString Persona::imprimirEstadoBA(){
    QString informacion="";
    QString buenaA="";
    informacion +="ID:\t"+QString::number(id)+"\n"+nombre+"\t"+apellido+ "\tde\t"+pais[0]+"\n";
    informacion += "Buenas acciones:\n";
    for(int i =0 ; i<7 ;i++){
        switch (i) {
            case 0: buenaA="castidad";break;
            case 1: buenaA="ayuno";break;
            case 2: buenaA="donación";break;
            case 3: buenaA="diligencia";break;
            case 4: buenaA="calma";break;
            case 5: buenaA="solidaridad";break;
            case 6: buenaA="humildad";break;
        }
        informacion+="Buena\tacción\tde\t"+buenaA+":\t"+buenasAcciones[i]+"\n";
    }
    return informacion;
}









