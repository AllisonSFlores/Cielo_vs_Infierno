#include "lsint.h"

void LSInt::insert(int pn){
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
void LSInt::printAll(){
    /*
    Function: Print all items
    Input: None
    Ouput: None
    */
     LSNode *tmp = firstNode;

     while (tmp != NULL){
           qDebug()<<tmp->key;
           tmp = tmp->next;
     }


}

int LSInt::len(){
    /*
    Function: len of the list
    Input:None
    Ouput:None
    */

    int i = 0;
    LSNode *tmp = firstNode;

    while (tmp!=NULL){
        i++;
        tmp = tmp->next;
    }
    return i;
}

bool LSInt::isEmpty(){
    return firstNode==NULL;
}
bool LSInt::lookFor(int pp){
    if (!isEmpty()){
        LSNode * tmp = firstNode;
        while(tmp != NULL){
            if (tmp->key == pp){
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
