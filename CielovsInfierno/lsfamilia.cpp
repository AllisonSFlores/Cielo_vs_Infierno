#include "lsfamilia.h"

NodoFamilia::NodoFamilia(){
    pais="";
    arbol=NULL;
    next = NULL;
    cantPecados=0;
}
NodoFamilia::NodoFamilia(QString ppais,ArbolHeapFamilia * parbol){
    pais=ppais;
    arbol=parbol;
    next = NULL;
    cantPecados=0;
}
NodoFamilia::NodoFamilia(QString ppais){
    pais=ppais;
    arbol=new ArbolHeapFamilia();
    next = NULL;
    cantPecados=0;
}


LSFamilia::LSFamilia(){
    firstNode = lastNode =NULL;
}

void LSFamilia::insert(Persona * ppersona){
    /*
    Function: Insert a new item in the list at the beginning
    Input: LSNode
    Ouput: None
    */
    qDebug()<<"insert";
    qDebug()<<ppersona->pais[0];
     if (lookFor(ppersona->pais[0]) != NULL){
              qDebug()<<"diferente de nulo";
         // they both point to the new one in memory
         NodoFamilia * nodo = lookFor(ppersona->getPais());
         nodo->arbol->insertar(ppersona);

     }
     else
     {  qDebug()<<"nulo";
         NodoFamilia *newNode = new NodoFamilia(ppersona->pais[0]);
         newNode->arbol->insertar(ppersona);
         newNode->arbol->apellidoFamilia=ppersona->getApellido();
         insertAux(newNode);

     }
}
void LSFamilia::insertAux(NodoFamilia * nodo){
    /*
    Function: Insert a new item in the list at the beginning
    Input: LSNode
    Ouput: None
    */

     if (firstNode == NULL){
         // they both point to the new one in memory
         lastNode = firstNode = nodo;
     }
     else
     {

         lastNode->next =  nodo;
         lastNode = nodo;
     }
}
void LSFamilia::printAll(){
    /*
    Function: Print all items
    Input: None
    Ouput: None
    */
      NodoFamilia *tmp = firstNode;

     while (tmp != NULL){
            qDebug()<<".";
           qDebug()<<tmp->pais;
           tmp->arbol->imprimir();
           tmp = tmp->next;
     }


}

int LSFamilia::len(){
    /*
    Function: len of the list
    Input:None
    Ouput:None
    */

    int i = 0;
     NodoFamilia *tmp = firstNode;

    while (tmp!=NULL){
        i++;
        tmp = tmp->next;
    }
    return i;
}

bool LSFamilia::isEmpty(){
    return firstNode==NULL;
}
NodoFamilia * LSFamilia::lookFor(QString pp){
    if (!isEmpty()){
         NodoFamilia * tmp = firstNode;
        while(tmp != NULL){
            if (tmp->pais == pp){
                return tmp;
            }
            tmp=tmp->next;
        }
        return NULL;
    }
    else{
        qDebug()<<"vacia";
        return NULL;
    }
}

void LSFamilia::sumarPecados(){
    if (!isEmpty()){
        NodoFamilia *tmp = firstNode;

        while (tmp!=NULL){
            tmp->cantPecados = tmp->arbol->sumarPecado();
        }
    }
}

