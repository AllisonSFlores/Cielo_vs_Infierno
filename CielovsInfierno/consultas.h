#ifndef CONSULTAS_H
#define CONSULTAS_H
#include<QString>
#include "mundo.h"

class Consultas{

    QVector<QString> paises;
    listaDoble *personas;


public:

    Consultas(QVector<QString> paises){
        this->paises = paises;
    }
    Consultas(){
        this->personas = NULL;
    }
    QVector<QString> getPaises();
    void setPaises(QVector<QString>);
    void setListaDoble(listaDoble *);
    void imprimirPaises();
    QVector<QString> masPecadores();
    QVector<QString> masBuenos();
    QVector<QString> ordenarPaises(int[25]);

};

#endif // CONSULTAS_H
