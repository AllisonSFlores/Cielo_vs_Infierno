#ifndef INFIERNO_H
#define INFIERNO_H
#include "arbolheapdemonio.h"

struct Infierno {
    ArbolHeapDemonio * demonios[7]; //ArbolHeapDemonio es un demonio?

    Infierno();
    void condenar(QVector<Persona*> condenados,int demonio);
    Persona * menosPecador();
    QStringList logcondenacion();
    Persona * menosPecadorDemonio(int demonio);
    void imprimir();
};

#endif // INFIERNO_H
