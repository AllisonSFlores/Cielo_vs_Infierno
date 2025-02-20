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
    qDebug()<<ppersona->getApellido();
;     if (lookFor(ppersona->getApellido()) != NULL){

         NodoTabla * nodo = lookFor(ppersona->getApellido());
         nodo->lista->insert(ppersona);

     }
     else{
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
        return NULL;
    }
}


ArbolHeapFamilia* TablaFamilia::buscarFamiliaPersona(QString apellido, QString pais){

    NodoTabla * nodotable = lookFor(apellido);
    if (nodotable != NULL){
        NodoFamilia *nodoFamily = nodotable->lista->lookFor(pais);
        if (nodoFamily != NULL){
            return nodoFamily->arbol;
        }
    }
    return NULL;
}

