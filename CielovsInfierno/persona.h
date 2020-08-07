#ifndef PERSONA_H
#define PERSONA_H
#include "estado.h"

#include <QtCore>
#include "angel.h"

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
    int nivelMaldad;
    Persona * padre;
    Persona * hijos[5]={0,0,0,0,0};
    Estado estado;
    Angel * angel;
    QString nacimiento;

    Persona(){
        id=-1;
        nombre="";
        apellido="Humano por defcto";
        pais={"",""};
        continente ="";
        creencia="";
        profesion="";
        correo="";
        padre= NULL;
        hijos[0]=NULL;
        angel = NULL;
        estado=mundo;
        nivelMaldad=0;
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
    QString getContinente();
    QString getCreencia ();
    Estado getEstado();
    QString getHoraNacimiento();
    int getCantPecados();
    int getCantBuenasAcciones();
    int pureza();
    void imprimir();
    QString imprimirEstadoBA();
    QString imprimirEstadoPecados();
    QString imprimirFamilia();


};

#endif // PERSONA_H
