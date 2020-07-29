#include "tablafamilia.h"

NodoTabla::NodoTabla(){
    apellido = "";
    lista= NULL;
    next = NULL;
}
NodoTabla::NodoTabla(QString papellido){
    apellido=papellido;
    lista= new LSFamilia();
    next = NULL;
}

TablaFamilia::TablaFamilia()
{
    firstNode = lastNode= NULL;
}

void TablaFamilia::insert(Persona * ppersona){
    /*
    Function: Insert a new item in the list at the beginning
    Input: LSNode
    Ouput: None
    */
    qDebug()<<"insert tabla";
    qDebug()<<ppersona->getApellido();
;     if (lookFor(ppersona->getApellido()) != NULL){
              qDebug()<<"diferente de nulo";
         NodoTabla * nodo = lookFor(ppersona->getApellido());
         nodo->lista->insert(ppersona);

     }
     else
     {  qDebug()<<"nulo tabla";
         NodoTabla *newNode = new NodoTabla(ppersona->apellido);
         newNode->lista->insert(ppersona);
         insertAux(newNode);

     }
}
void TablaFamilia::insertAux(NodoTabla * nodo){
    /*
    Function: Insert a new item in the list at the beginning
    Input: LSNode
    Ouput: None
    */

     if (firstNode == NULL){
         lastNode = firstNode = nodo;
     }
     else
     {

         lastNode->next =  nodo;
         lastNode = nodo;
     }
}
void TablaFamilia::printAll(){
    /*
    Function: Print all items
    Input: None
    Ouput: None
    */
      NodoTabla *tmp = firstNode;

     while (tmp != NULL){
           qDebug()<<"-------------------------"+tmp->apellido;
           tmp->lista->printAll();
           tmp = tmp->next;
     }


}

int TablaFamilia::len(){
    /*
    Function: len of the list
    Input:None
    Ouput:None
    */

    int i = 0;
     NodoTabla *tmp = firstNode;

    while (tmp!=NULL){
        i++;
        tmp = tmp->next;
    }
    return i;
}

bool TablaFamilia::isEmpty(){
    return firstNode==NULL;
}
NodoTabla * TablaFamilia::lookFor(QString pp){
    if (!isEmpty()){
        qDebug()<<"no vacia tabla";
         NodoTabla * tmp = firstNode;
        while(tmp != NULL){
            if (tmp->apellido == pp){
                return tmp;
            }
            tmp=tmp->next;
        }
        return NULL;
    }
    else{
        qDebug()<<"vacia tabla";
        return NULL;
    }
}
