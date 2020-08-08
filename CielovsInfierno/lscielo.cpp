#include "lscielo.h"

LSCielo::LSCielo()
{
         firstNode = NULL;
         lastNode = NULL;
}


void LSCielo::insert(Persona *  pn){
    /*
    Function: Insert a new item in the list at the beginning
    Input: LSNode
    Ouput: None
    */

     if (firstNode == NULL){
         // they both point to the new one in memory
         lastNode = firstNode = new LSNodeAngel(pn);
     }
     else
     {
         LSNodeAngel *newNode = new LSNodeAngel(pn);
         lastNode->next = newNode;
         lastNode = newNode;
     }
}

void LSCielo::printAll(){
    /*
    Function: Print all items
    Input: None
    Ouput: None
    */
     LSNodeAngel *tmp = firstNode;

     while (tmp != NULL){
           qDebug()<<tmp->printAll();
           tmp = tmp->next;
     }


}
QString LSCielo::consultas(){
    QString datos="";
    if(!isEmpty()){
        LSNodeAngel * tmp = firstNode;
        while(tmp!=NULL){
            datos+= tmp->humano->imprimirFamilia();
            tmp = tmp->next;
        }
    }
    return datos;
}

int LSCielo::len(){
    /*
    Function: len of the list
    Input:None
    Ouput:None
    */

    int i = 0;
   LSNodeAngel *tmp = firstNode;

    while (tmp!=NULL){
        i++;
        tmp = tmp->next;
    }
    return i;
}
bool LSCielo::isEmpty(){
    return firstNode==NULL;
}

bool LSCielo::lookFor(int pp){
    if (!isEmpty()){
        LSNodeAngel * tmp = firstNode;
        while(tmp != NULL){
            if (tmp->getKey() == pp){
                return true;
            }
            tmp=tmp->next;
        }
        return false;
    }
    else{
        return false;
    }
}
