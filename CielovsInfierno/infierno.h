#ifndef INFIERNO_H
#define INFIERNO_H
#include "arbolheapdemonio.h"

struct Infierno {
    ArbolHeapDemonio * demonios[7];

    Infierno();
    QString condenar(QVector<Persona*> condenados,int demonio);
    Persona * menosPecador();
    QString condenacionLog(Persona * humano, int demonio);
    Persona * menosPecadorDemonio(int demonio);
    void eliminarHumano(Persona *);
    QString consultasInfierno();
    QString cantxPecados();
    QString cantxPecadosAB();
    int neto();
    QString time();
    QString pecadoresOrdenados();
    void registrarPecados(Persona *);
    void eliminarPecados(Persona *);
    void imprimir();
    QVector<Persona*>ordenarAux(QVector<Persona *> ,int,int);
};

#endif // INFIERNO_H
