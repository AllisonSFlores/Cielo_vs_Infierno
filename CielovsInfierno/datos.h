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
    QString paises[50];
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
    QVector<QString> obtenerpaises();
    QString obtenerCreencias();
    QString obtenerProfesiones();
    QString abrirArchivo(QString file);
    QStringList leerArchivo(int pn);
    bool validarId();
    int random(int seed);
    void imprimirArreglo(QString arreglo[]);
    QString *getPaises();
};

#endif // DATOS_H
