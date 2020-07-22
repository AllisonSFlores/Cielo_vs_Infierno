#ifndef PERSONA_H
#define PERSONA_H
#include "estado.h"
#include <QtCore>
struct Persona{
    int id;
    QString nombre;
    QString apellido;
    QString pais;
    QString creencia;
    QString profesion;
    QString correo;
    QVector<int> pecados;
    QVector<int> buenasAcciones;
    Persona * padre;
    //NO SE SI LA LISTA DE HIJOS ESTA BIEN ASI
    QVector<Persona *> hijos;
    Estado estado;
    QString nacimiento;

    Persona(){
        id=-1;
        nombre="";
        apellido="";
        pais="";
        creencia="";
        profesion="";
        correo="";
        estado=mundo;
    }
    Persona(int pid, QString pnombre, QString papellido,QString ppais, QString pcreencia, QString pprofesion, QString pcorreo);

    void setId(int pid);
    int getId();
    QString getApellido();
    QString getPais();
    QString getCreencia ();
    QVector<int> getPecados();
    QVector<Persona *> getHijos();
    QVector<int> getBuenasAcciones();
    Estado getEstado();

};

#endif // PERSONA_H
