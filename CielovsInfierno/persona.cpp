#include "persona.h"

Persona::Persona(int pid, QString pnombre, QString papellido,QString ppais, QString pcreencia, QString pprofesion, QString pcorreo)
{
    id=pid;
    nombre = pnombre;
    apellido = papellido;
    pais=ppais;
    creencia=pcreencia;
    profesion=pprofesion;
    correo=pcorreo;
    //No estoy segura si esto se hace asi jaja
    pecados=QVector<int>(7);
    buenasAcciones = QVector<int>(7);
    padre = NULL;
    //No se si inicializar la vara con 5 personas con un contructor por defecto
    hijos = QVector<Persona *>(5);
    //o con la lista de hijos nula
    //hijos = NULL;
}

void Persona::setId(int pid){
    id=pid;
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
QVector<int> Persona::getPecados(){
    return pecados;
}
QVector<Persona *> Persona::getHijos(){
    return hijos;
}
QVector<int> Persona::getBuenasAcciones(){
    return buenasAcciones;
}

Estado Persona::getEstado(){
    return estado;
}

