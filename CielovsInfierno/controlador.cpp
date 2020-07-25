#include "controlador.h"

void Controlador::__init__(){
    this->tabla = new TablaHashID();
    this->datos = new Datos();
    this->listaMundo = new listaDoble();
    this->_arbolMundo = new arbolMundo();

    this->cielo = new Cielo();
}


TablaHashID *Controlador::getTabla(){
    return tabla;
}

Datos *Controlador::getDatos(){
    return datos;
}
void Controlador::cargarDatos(){
    getDatos()->cargarNombres();
    getDatos()->cargarApellidos();
    getDatos()->cargarCreencias();
    getDatos()->cargarProfesiones();
    //getDatos()->cargarPaises();
}
void Controlador::crearHumanos(int cantidadHumanos){

    int ID=0;
    QString nombre;
    QString apellido;
    QString creencia;
    QString profesion;

    for(int i=0;i<cantidadHumanos;i++){

        ID = getTabla()->obtenerIDValido();
        nombre = getDatos()->obtenerNombre();
        apellido= getDatos()->obtenerApellido();
        creencia= getDatos()->obtenerCreencias();
        profesion= getDatos()->obtenerProfesiones();
        Persona *persona = new Persona(ID,nombre,apellido,creencia,profesion);
        listaMundo->insertarAlFinal(persona);
    }
    listaMundo->metodoOrdenamiento();
     QVector<NodoParaArbol*> datosArbol= listaMundo->listaParaArbol();
     _arbolMundo->pasarDatoAinsertar(datosArbol);
     _arbolMundo->inOrder(_arbolMundo->raiz);
     //_arbolMundo->mostrarMundo(_arbolMundo->raiz,0);  //no me sirve aqui

}

void Controlador::salvacion(){
    //FALTA HACER QUE LOS ANGELES CONOZCAN EL INFIERNO O NO SE, DESPUES VEO
    cielo->salvacion();
}
