#include "controlador.h"
#include <QMessageBox>

void Controlador::__init__(){
    this->tabla = new TablaHashID();
    this->datos = new Datos();
    this->listaMundo = new listaDoble();
    this->cielo = new Cielo();
    this->_arbolMundo = new arbolMundo();
    this->heap = new ArbolHeapFamilia();
    this->tablaFamilia = new TablaFamilia();
    this->infierno = new Infierno();


}


TablaHashID *Controlador::getTabla(){
    return tabla;
}

Datos *Controlador::getDatos(){
    return datos;
}

arbolMundo *Controlador::getArbolMundo(){
    return _arbolMundo;

}


listaDoble* Controlador::getListaMundo(){
    return listaMundo;
}
void Controlador::cargarDatos(){
    getDatos()->cargarNombres();
    getDatos()->cargarApellidos();
    getDatos()->cargarCreencias();
    getDatos()->cargarProfesiones();
    getDatos()->cargarPaises();
}
void Controlador::crearHumanos(int cantidadHumanos){

    _arbolMundo->raiz=NULL;  //feo
    int ID=0;
    QString nombre;
    QString apellido;
    QVector<QString> pais;
    QString continente;
    QString creencia;
    QString profesion;

    for(int i=0;i<cantidadHumanos;i++){

        ID = getTabla()->obtenerIDValido();
        nombre = getDatos()->obtenerNombre();
        apellido= getDatos()->obtenerApellido();
        pais=getDatos()->obtenerpaises();
        creencia= getDatos()->obtenerCreencias();
        profesion= getDatos()->obtenerProfesiones();
        Persona *persona = new Persona(ID,nombre,apellido,pais,creencia,profesion);
        tablaFamilia->insert(persona);
        listaMundo->insertarAlFinal(persona);
    }
    listaMundo->metodoOrdenamiento();
    //listaMundo->imprimir();
     QVector<NodoParaArbol*> datosArbol= listaMundo->listaParaArbol();
     _arbolMundo->pasarDatoAinsertar(datosArbol);
     _arbolMundo->inOrder(_arbolMundo->raiz);


     qDebug()<<"hehehe";
     datos->cargarPaises();
     QString *paises=datos->getPaises();
     qDebug()<<"cuanto "<<paises->length();
     for(int i=0;i<25;i++){
         qDebug()<<paises[i];
     }
}

NodoLd* Controlador::buscarPersona(int id){
    return _arbolMundo->recorrerListaMundo(id);

}

void Controlador::condenacion(){
    for(int i=0 ; i<7 ; i++){
        QVector<Persona*> condenados = listaMundo->condenados(i);
        qDebug()<<"Demonio "+QString::number(i);
        qDebug()<<condenados;
        infierno->condenar(condenados, i);
    }
}

void Controlador::salvacion(){
    //FALTA HACER QUE LOS ANGELES CONOZCAN EL INFIERNO O NO SE, DESPUES VEO
    cielo->salvacion();
}
void Controlador::imprimirArbolHeapFamilia(){
    tablaFamilia->printAll();
}
void Controlador::pruebasAllison(){
  //  arbol->imprimir();
}

QVector<QString> Controlador::ContinentesPecadores(){

    QVector<QString> continentes = {"Asia","Oceania","Africa","America","Europa"};
    QVector<int> lista = listaMundo->ordenarContinentesPecado();

    int temp=0;
    QString temp2="";
      for (int i=1; i<lista.length(); i++){
        for(int j=0 ; j<lista.length() - 1; j++){
            if (lista[j] < lista[j+1]){
                //Lista con cantidad de pecados
                temp = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = temp;
                //Lista con paises
                temp2 = continentes[j];
                continentes[j] = continentes[j+1];
                continentes[j+1] = temp2;
            }
        }
    }

    return continentes;
}

QVector<QString> Controlador::ContinentesBuenos(){

    QVector<QString> continentes = {"Asia","Oceania","Africa","America","Europa"};
    QVector<int> lista = listaMundo->ordenarContinentesBuenasAcciones();
    //-----------------------Ordenar-------------------------------------//
    int temp=0;
    QString temp2="";
      for (int i=1; i<lista.length(); i++){
        for(int j=0 ; j<lista.length() - 1; j++){
            if (lista[j] < lista[j+1]){
                //Lista con cantidad de pecados
                temp = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = temp;
                //Lista con paises
                temp2 = continentes[j];
                continentes[j] = continentes[j+1];
                continentes[j+1] = temp2;
            }
        }
    }
      return continentes;
}
