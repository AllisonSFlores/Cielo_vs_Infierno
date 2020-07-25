#include "arbolangeles.h"

ArbolAngeles::ArbolAngeles()
{

    raiz = NULL;
}

NodoArbolAngeles * ArbolAngeles::buscarCampo(NodoArbolAngeles * raiz, int nivelarbol){
    if (raiz->nivel == nivelarbol - 1 || raiz->nivel == nivelarbol){
        if (raiz->izq == NULL || raiz->cen == NULL || raiz->der == NULL){
            return raiz;
        }
        else{
            return NULL;
        }
    }
    else if(buscarCampo(raiz->izq,nivelarbol)!= NULL){
        return buscarCampo(raiz->izq,nivelarbol);
    }
    else if(buscarCampo(raiz->cen,nivelarbol) != NULL){
        return buscarCampo(raiz->cen,nivelarbol);
    }
    else if(buscarCampo(raiz->der,nivelarbol) != NULL){
        return buscarCampo(raiz->der,nivelarbol);
    }
    return NULL;

}
void ArbolAngeles::insertar(Angel * pangel){
    if(raiz != NULL){
        NodoArbolAngeles * campo= buscarCampo(raiz,getAltura(raiz));
        if(campo==NULL){
            campo= hojaIzq(raiz);
        }

        if(campo->izq == NULL){
            campo->izq = new NodoArbolAngeles(pangel,campo->nivel+1);
        }
        else if(campo->cen == NULL){
            campo->cen = new NodoArbolAngeles(pangel,campo->nivel+1);
        }
        else if(campo->der == NULL){
            campo->der = new NodoArbolAngeles(pangel,campo->nivel+1);
        }
    }
    else{
        raiz=new NodoArbolAngeles(pangel,getAltura(raiz)+1);
    }


}
int ArbolAngeles::getAltura(NodoArbolAngeles * raiz){
    if(raiz == NULL){
        return 0;
    }
    else{
        return 1+getAltura(raiz->izq);
    }
}
NodoArbolAngeles * ArbolAngeles::hojaIzq(NodoArbolAngeles * praiz){
    if(praiz->izq == NULL){
        return praiz;
    }
    else{
        return hojaIzq(praiz->izq);
    }
}
NodoArbolAngeles::NodoArbolAngeles()
{
    angel =NULL;
    izq =NULL;
    cen=NULL;
    der=NULL;
}
NodoArbolAngeles::NodoArbolAngeles(int a, int pcont)
{   nivel =a;
    cont=pcont;
    angel =NULL;
    izq =NULL;
    cen=NULL;
    der=NULL;
}
NodoArbolAngeles::NodoArbolAngeles(Angel * pangel,int a){
    nivel =a;
    angel = pangel;
    angel->generacion=a;
    izq =NULL;
    cen=NULL;
    der=NULL;
}
void NodoArbolAngeles::imprimirNodo(){
    angel->imprimirAngel();
}
