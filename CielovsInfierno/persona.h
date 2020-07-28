#ifndef PERSONA_H
#define PERSONA_H
#include "estado.h"
#include <QtCore>
struct Persona{
    int id;
    QString nombre;
    QString apellido;
    QVector<QString> pais;
    QString continente;
    QString creencia;
    QString profesion;
    QString correo;
    int pecados[7]={0,0,0,0,0,0,0};
    int buenasAcciones[7]={0,0,0,0,0,0,0};
    Persona * padre;
    //NO SE SI LA LISTA DE HIJOS ESTA BIEN ASI
    QVector<Persona *> hijos;
    Estado estado;
    QString nacimiento;

    Persona(){
        id=-1;
        nombre="";
        apellido="";
        pais={"",""};
        continente ="";
        creencia="";
        profesion="";
        correo="";
        estado=mundo;
    }

    Persona(int pid, QString pnombre, QString papellido, QString pcreencia, QString pprofesion);
    Persona(int pid, QString pnombre, QString papellido, QVector<QString> ppais, QString pcreencia, QString pprofesion);
    void setId(int pid);
    void setNombre(QString);
    void setApellido(QString);
    void setPais(QString);
    void setCreencia(QString);
    void setProfesion(QString);
    int getId();
    QString getNombre();
    QString getCorreo();
    QString getApellido();
    QString getPais();
    QString getCreencia ();
   // int getPecados();
   // int getBuenasAcciones();
    QVector<Persona *> getHijos();
    Estado getEstado();
    QString getHoraNacimiento();

};

#endif // PERSONA_H
