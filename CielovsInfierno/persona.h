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
    //QString ppais,
    Persona(int pid, QString pnombre, QString papellido, QString pcreencia, QString pprofesion);

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
    QVector<int> getPecados();
    QVector<Persona *> getHijos();
    QVector<int> getBuenasAcciones();
    Estado getEstado();
    QString getHoraNacimiento();

};

#endif // PERSONA_H
