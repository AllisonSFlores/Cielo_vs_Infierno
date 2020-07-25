#ifndef LSCIELO_H
#define LSCIELO_H
#include"persona.h"
using namespace std;

struct LSNodeAngel{

    Persona * humano;
    LSNodeAngel * next;
    LSNodeAngel(Persona * phumano){
        humano=phumano;
        next = 0;
    }
    int getKey(){
        return humano->getId();
    }
    QString printAll(){
        return humano->nombre;
    }
};
struct LSCielo
{
    LSNodeAngel *firstNode, *lastNode;
    LSCielo();
    void printAll();
    void insert(int pkey);
    void insert(Persona *  pn);
    int len();
    bool isEmpty();
    bool  lookFor(int pp);
};

#endif // LSCIELO_H
