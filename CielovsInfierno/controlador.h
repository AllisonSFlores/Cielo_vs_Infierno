#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "tablahashID.h"
#include "datos.h"
#include "persona.h"
#include "mundo.h"
#include "cielo.h"
struct Controlador{
       TablaHashID * tabla;
       Datos *datos;
       listaDoble *listaMundo;
       arbolMundo *_arbolMundo;

       Cielo * cielo;


       Controlador(){}
       void __init__();
       TablaHashID *getTabla();
       Datos *getDatos();
       void crearHumanos(int);
       void cargarDatos();
       void salvacion();
       void buscarPersona(int);
};

#endif // CONTROLADOR_H
