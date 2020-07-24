#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "tablahashID.h"
#include "datos.h"
#include "persona.h"
#include "mundo.h"

class Controlador{
       TablaHashID * tabla;
       Datos *datos;
       listaDoble *listaMundo;
       arbolMundo *_arbolMundo;
public:

       Controlador(){}
       void __init__();
       TablaHashID *getTabla();
       Datos *getDatos();
       void crearHumanos(int);
       void cargarDatos();
};

#endif // CONTROLADOR_H
