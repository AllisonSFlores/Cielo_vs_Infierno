#ifndef ANGEL_H
#define ANGEL_H
#include <QtCore>
#include "estado.h"



struct Angel{
    QString nombre;
    int version;
    int generacion;
    Angel(){
        nombre="";
        version=-1;
        generacion=-1;
    }
    Angel(QString pnombre,int pversion,int pgeneracion);
    Angel(int pgeneracion);
    Angel(QString pnombre);
    void imprimirAngel();
    QString infoAngel();
};

#endif // ANGEL_H
