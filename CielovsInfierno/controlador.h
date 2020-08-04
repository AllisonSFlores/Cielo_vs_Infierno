#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "tablahashID.h"
#include "datos.h"
#include "persona.h"
#include "mundo.h"
#include "cielo.h"
#include "ArbolHeapFamilia.h"
#include "tablafamilia.h"
#include "arbolheapdemonio.h"

struct Controlador{
       TablaHashID * tabla;
       Datos *datos;
       listaDoble *listaMundo;
       arbolMundo *_arbolMundo; //ver esto
       Cielo * cielo;
       ArbolHeapFamilia *heap;
       TablaFamilia * tablaFamilia;
     //  ArbolHeapDemonio * arbol = new ArbolHeapDemonio();

       Controlador(){}
       void __init__();
       TablaHashID *getTabla();
       Datos *getDatos();
       listaDoble* getListaMundo();
       arbolMundo *getArbolMundo();
       void crearHumanos(int);
       void cargarDatos();
       void salvacion();
       NodoLd* buscarPersona(int);  //tal vez mejor que retorne la persona      efectivamente
       void imprimirArbolHeapFamilia();
       void pruebasAllison();
       QVector<int> ContinentesPecadores();
       QVector<int> ContinentesBuenos();

};

#endif // CONTROLADOR_H
