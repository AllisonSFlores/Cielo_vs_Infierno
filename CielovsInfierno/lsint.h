#ifndef LSINT_H
#define LSINT_H
#include <QIODevice>
#include <QtCore>
struct LSNode{

    int key;
    LSNode *next;
    LSNode(int pkey){
        key = pkey;
        next = 0;
    }

    //Default
    LSNode(){

    }
};

struct LSInt{
    LSNode *firstNode, *lastNode;

    LSInt(){
        firstNode = NULL;
        lastNode = NULL;
    }
    void printAll();
    void insert(int pkey);
    int len();
    bool isEmpty();
    bool  lookFor(int pp);
};

#endif // LSINT_H
