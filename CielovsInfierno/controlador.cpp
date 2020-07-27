#include "controlador.h"
#include <QMessageBox>

void Controlador::__init__(){
    this->tabla = new TablaHashID();
    this->datos = new Datos();
    this->listaMundo = new listaDoble();
    this->cielo = new Cielo();
    this->_arbolMundo = new arbolMundo();
    this->heap = new ArbolHeap();


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
    //getDatos()->cargarPaises();
}
void Controlador::crearHumanos(int cantidadHumanos){
    //Not sure about it

//    arbolMundo *_arbolMundo;
//    _arbolMundo = new arbolMundo();
    _arbolMundo->raiz=NULL;  //feo
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
    listaMundo->imprimir();
     QVector<NodoParaArbol*> datosArbol= listaMundo->listaParaArbol();
     _arbolMundo->pasarDatoAinsertar(datosArbol);
     _arbolMundo->inOrder(_arbolMundo->raiz);
     //COMPRUEBO QUE INSERTA Y ORDENA HUMANOS
     for (int i=datosArbol.length()-1; i>=0;i--){
         heap->insertar(datosArbol[i]->persona);
     }
     heap->ordenar();
     heap->imprimir();


}

NodoLd* Controlador::buscarPersona(int id){
    return _arbolMundo->recorrerListaMundo(id);
}

void Controlador::salvacion(){
    //FALTA HACER QUE LOS ANGELES CONOZCAN EL INFIERNO O NO SE, DESPUES VEO
    cielo->salvacion();
}
