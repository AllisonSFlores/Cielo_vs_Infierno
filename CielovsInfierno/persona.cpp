#include "persona.h"

Persona::Persona(int pid, QString pnombre, QString papellido,QString pcreencia, QString pprofesion)
{
    this->id=pid;
    this->nombre = pnombre;
    this->apellido = papellido;

    this->creencia=pcreencia;
    this->profesion=pprofesion;
    this->correo= nombre+QString::number(id)+"@gmail.com";   //FUNCION??
    this->padre = NULL;


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
     this->correo= nombre+QString::number(id)+"@gmail.com";   //FUNCION??

     //No estoy segura si esto se hace asi jaja
     this->padre = NULL;

     //o con la lista de hijos nula
     //hijos = NULL;
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
void Persona::imprimir(){
    qDebug()<<"id: "+QString::number(id)+" apellido y pais "+apellido+ "  "+pais[0];
    if(padre != NULL){
        qDebug()<<"Mi padre es: "+QString::number(padre->id);
    }
    int i = 0;
    if(hijos[i]==NULL){
        qDebug()<<"No tiene familia";

    }
    else{
        qDebug()<<"Los ids de sus hijos son: ";
         while(i<5 && hijos[i]!=NULL){

            qDebug()<<"                       "+QString::number(hijos[i]->id);
            i++;
        }
    }
}
