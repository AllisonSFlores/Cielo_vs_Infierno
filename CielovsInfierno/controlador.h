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
#include "archivos.h"

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
       Archivos * archivo;

       Controlador(){}
       void __init__();
       TablaHashID *getTabla();
       Datos *getDatos();
       listaDoble* getListaMundo();
       arbolMundo *getArbolMundo();

       void crearHumanos(int);
       void cargarDatos();

       bool salvacion();
       void condenacion();

       QVector<QString> ContinentesPecadores();
       QVector<QString> ContinentesBuenos();

       bool buscarPersonaPecados(int);
       bool buscarPersonaBA(int);
       bool buscarFamilia(QString,QString);
       bool buscarFamiliaPorcentajes(QString,QString);
       void imprimirArbolHeapFamilia();
       void pruebasAllison();
       QVector<QString> masPecadores(); //Me sirve para los 10 mas y los 5 menos
       QVector<QString> masBuenos();
       QString informacionArbol();
       QString ultimoNivelArbol();
       int cantidadHumanos();
       void consultaCielo();
       void consultaInfierno();
       QString nombreArchivoFecha();
       int cantidadNodosArbol();
       int cantidadNiveles();
       QVector<int> ganador();
       QVector<QString> ganadorInfierno();
       QVector<QString> ganadorCielo();
       //CONSULTAS
       void pecadoresApellido(QString); //HECHA
       void pecadoresContininente(QString);
       void pecadoresPais(QString);
       void pecadoresCreencia(QString);
       void pecadoresProfesion(QString);
       void buenosApellido(QString); //HECHA
       void buenosContininente(QString);
       void buenosPais(QString);
       void buenosCreencia(QString);
       void buenosProfesion(QString);


};

#endif // CONTROLADOR_H
