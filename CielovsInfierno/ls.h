#ifndef LS_H
#define LS_H
#include <iostream>
#include "persona.h"

using namespace std;

struct LSNode{
    Persona * humano;
    LSNode * next;
    LSNode(Persona * phumano){
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
struct LSNodeInt{
    int key;
    LSNodeInt * next;
    LSNodeInt(int pkey){
        key = pkey;
        next = 0;
    }
    int getKey(){
        return key;
    }
    QString printAll(){
        return QString::number(key);
    }
};

template <typename T>
struct LS{
     T *firstNode, *lastNode;

     LS(){
         firstNode = NULL;
         lastNode = NULL;
     }
     void printAll();
    void insert(int pkey);
    void insert(Persona *  pn);
    int len();
    bool isEmpty();
    bool  lookFor(int pp);
};

#endif // LS_H
