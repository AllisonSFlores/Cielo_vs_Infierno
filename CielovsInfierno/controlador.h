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
#include "infierno.h"
#include "consultas.h"

struct Controlador{
       TablaHashID * tabla;
       Datos *datos;
       listaDoble *listaMundo;
       arbolMundo *_arbolMundo; //ver esto
       Cielo * cielo;
       ArbolHeapFamilia *heap;
       TablaFamilia * tablaFamilia;
       Infierno * infierno;
       Consultas *consultas;

       Controlador(){}
       void __init__();
       TablaHashID *getTabla();
       Datos *getDatos();
       listaDoble* getListaMundo();
       arbolMundo *getArbolMundo();

       void crearHumanos(int);
       void cargarDatos();

       void salvacion();
       void condenacion();

       QVector<QString> ContinentesPecadores();
       QVector<QString> ContinentesBuenos();

       NodoLd* buscarPersona(int);  //tal vez mejor que retorne la persona      efectivamente
       void imprimirArbolHeapFamilia();
       void pruebasAllison();
       QVector<QString> masPecadores(); //Me sirve para los 10 mas y los 5 menos
       QVector<QString> masBuenos();

};

#endif // CONTROLADOR_H
