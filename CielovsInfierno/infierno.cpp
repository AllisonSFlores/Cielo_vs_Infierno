#include "infierno.h"

Infierno::Infierno(){
    QString nombres[]={"Lucifer","Belcebu","Satan","Abadon","Mammon","Belfegor","Asmodeo"};
    for(int i = 0 ; i < 7 ; i++){
        demonios[i]=new ArbolHeapDemonio(nombres[i],i);
    }
}
void Infierno::condenar(QVector<Persona *> condenados, int demonio){
    for(int i = 0 ; i < condenados.size() ; i++){
        demonios[demonio]->insertar(condenados[i]);
    }
}
Persona * Infierno::menosPecador(){
    Persona * menosPecadorv = new Persona();
    int cant;

    for(int i = 0 ; i < 7 ; i++){
        cant = demonios[i]->menosPecador()->pureza() ;

        if(cant > menosPecadorv->pureza()){
            menosPecadorv = demonios[i]->menosPecador();
        }
    }
    return menosPecadorv;
}
void Infierno::imprimir(){
    for(int i = 0 ; i < 7 ; i++){
        demonios[i]->imprimir();
    }
}
