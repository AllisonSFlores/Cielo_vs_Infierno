#include "persona.h"

Persona::Persona(int pid, QString pnombre, QString papellido,QString pcreencia, QString pprofesion)
{
    this->id=pid;
    this->nombre = pnombre;
    this->apellido = papellido;
    //pais=ppais;
    this->creencia=pcreencia;
    this->profesion=pprofesion;
    this->correo= nombre+QString::number(id)+"@gmail.com";   //FUNCION??

    //No estoy segura si esto se hace asi jaja
   // this->pecados=QVector<int>(7);
    //this->buenasAcciones = QVector<int>(7);
    this->padre = NULL;

    //No se si inicializar la vara con 5 personas con un contructor por defecto
    //this->hijos = QVector<Persona *>(5);

    //o con la lista de hijos nula
    //hijos = NULL;
    this->nacimiento = getHoraNacimiento();
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
    pais=ppais;
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
    return pais;
}
QString Persona::getCreencia (){
    return creencia;
}
/*
int[7] Persona::getPecados(){
   // return pecados;
}
QVector<Persona *> Persona::getHijos(){
    return hijos;
}
int Persona::getBuenasAcciones(){
   // return buenasAcciones;
}
*/
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
