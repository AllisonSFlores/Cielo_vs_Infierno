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

QVector<int> Controlador::ContinentesPecadores(){

    return listaMundo->ordenarContinentesPecado();

}

QVector<int> Controlador::ContinentesBuenos(){
    return listaMundo->ordenarContinentesBuenasAcciones();
}
