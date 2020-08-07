#ifndef INFIERNO_H
#define INFIERNO_H
#include "arbolheapdemonio.h"

struct Infierno {
    ArbolHeapDemonio * demonios[7];

    Infierno();
    QString condenar(QVector<Persona*> condenados,int demonio);
    Persona * menosPecador();
    QString condenacionLog(QVector<Persona *>salvados);
    Persona * menosPecadorDemonio(int demonio);
    void eliminarHumano(Persona *);
    QString time();
    void imprimir();
};

#endif // INFIERNO_H
