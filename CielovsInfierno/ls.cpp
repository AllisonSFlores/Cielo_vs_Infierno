#include "ls.h"

template <>
void LS<LSNodeInt>::insert(int pn){
    /*
    Function: Insert a new item in the list at the beginning
    Input: LSNode
    Ouput: None
    */

     if (firstNode == NULL){
         // they both point to the new one in memory
         lastNode = firstNode = new LSNodeInt(pn);
     }
     else
     {
         LSNodeInt *newNode = new LSNodeInt(pn);
         lastNode->next = newNode;
         lastNode = newNode;
     }
}
template <>
void LS<LSNode>::insert(Persona *  pn){
    /*
    Function: Insert a new item in the list at the beginning
    Input: LSNode
    Ouput: None
    */

     if (firstNode == NULL){
         // they both point to the new one in memory
         lastNode = firstNode = new LSNode(pn);
     }
     else
     {
         LSNode *newNode = new LSNode(pn);
         lastNode->next = newNode;
         lastNode = newNode;
     }
}
template <typename T>
void LS<T>::printAll(){
    /*
    Function: Print all items
    Input: None
    Ouput: None
    */
     T *tmp = firstNode;

     while (tmp != NULL){
           qDebug()<<tmp->printAll();
           tmp = tmp->next;
     }


}
template <typename T>
int LS<T>::len(){
    /*
    Function: len of the list
    Input:None
    Ouput:None
    */

    int i = 0;
    T *tmp = firstNode;

    while (tmp!=NULL){
        i++;
        tmp = tmp->next;
    }
    return i;
}
template <typename T>
bool LS<T>::isEmpty(){
    return firstNode==NULL;
}
template <typename T>
bool LS<T>::lookFor(int pp){
    if (!isEmpty()){
        T * tmp = firstNode;
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

