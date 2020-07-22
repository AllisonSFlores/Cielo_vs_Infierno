#ifndef DATOS_H
#define DATOS_H
#include <QtCore>
#include <QFile>
#include <QDir>
#include <QIODevice>
#include <QStringList>
#include <QTextStream>
#include "tablahashID.h"

struct Datos{
    QString nombres[1000];
    QString apellidos[200];
    TablaHashID * tabla;
    QString paises[2][25];
    QString creencias[10];
    QString profesiones[50];

    Datos();
    void cargarNombres();
    void cargarApellidos();
    void cargarPaises();
    void cargarCreencias();
    void cargarProfesiones();
    QString obtenerNombre();
    QString obtenerApellido();
    QString * obtenerpaises();
    QString obtenerCreencias();
    QString obtenerProfesiones();
    QString abrirArchivo(QString file);
    QStringList leerArchivo(int pn);
    bool validarId();
    int random(int seed);
    void imprimirArreglo(QString arreglo[]);
};

#endif // DATOS_H
