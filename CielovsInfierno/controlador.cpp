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
    this->consultas = new Consultas();
    this->archivo = new Archivos();

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

///  Crear humanos y añadirlos al mundo,llama a formar el arbol
/// \brief Controlador::crearHumanos
/// \param cantidadHumanos
///
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
     _arbolMundo->mostrarMundo(_arbolMundo->raiz,0);
}

QString Controlador::ultimoNivelArbol(){
     QString informacion= "Información de las personas del último nivel del árbol\n";
     QString ultimoNivel = _arbolMundo->ultimoNivelAux();

     informacion+=ultimoNivel+"\n";

    return informacion;
}

int Controlador::cantidadHumanos(){
    return listaMundo->largoLista();
}

int Controlador::cantidadNodosArbol(){
    return _arbolMundo->cantidadNodosAux();
}

int Controlador::cantidadNiveles(){
    return _arbolMundo->nivelesAux();
}

QString Controlador::informacionArbol(){
    QString informacion= "---------------------------------Información del mundo---------------------------------\n";
    informacion+= "Hay "+ QString::number(cantidadNodosArbol())+" nodos en el arbol\n";
    informacion+= "El árbol tiene "+QString::number(cantidadNiveles())+" niveles\n";
    informacion+= "El mundo tiene "+QString::number(cantidadHumanos())+" personas\n";
    informacion+= ultimoNivelArbol();
    archivo->openDirectory(0,"Informacion_Arbol_"+nombreArchivoFecha(),informacion);
    return informacion;
}

///  Buscar persona por ID y mostrar su familia (Pecados de todos)
/// \brief Controlador::buscarPersona
/// \param id
/// \return bool
///
bool Controlador::buscarPersonaPecados(int id){


    NodoLd* nodoPersona = _arbolMundo->recorrerListaMundo(id);
    if(nodoPersona!=NULL){
        ArbolHeapFamilia * familia = tablaFamilia->buscarFamiliaPersona(nodoPersona->persona->getApellido(),nodoPersona->persona->getPais());
        if (familia != NULL){
            QString informacion = familia->imprimirEstadoPecados();
            archivo->openDirectory(0,"Pecados_"+nombreArchivoFecha(),informacion);
            return true;
        }
    }


    return false;

}

/// Buscar persona por ID y mostrar su familia (Buenas acciones de todos)
/// \brief Controlador::buscarPersonaBA
/// \param id
/// \return bool
///
bool Controlador::buscarPersonaBA(int id){

    NodoLd* nodoPersona = _arbolMundo->recorrerListaMundo(id);
    if(nodoPersona!=NULL){
        ArbolHeapFamilia * familia = tablaFamilia->buscarFamiliaPersona(nodoPersona->persona->getApellido(),nodoPersona->persona->getPais());
        if (familia != NULL){
            QString informacion = familia->imprimirEstadoBA();
            archivo->openDirectory(0,"BuenasA_"+nombreArchivoFecha(),informacion);
            return true;
        }
    }
    return false;

}

/// Buscar una familia dado el apellido y país, y mostrar información
/// \brief Controlador::buscarFamilia
/// \param apellido
/// \param pais
/// \return bool
///
bool Controlador::buscarFamilia(QString apellido,QString pais){

     ArbolHeapFamilia * familia = tablaFamilia->buscarFamiliaPersona(apellido,pais);
     if (familia != NULL){
        QString informacion = familia->imprimirFamilia();
        archivo->openDirectory(0,"Buscar_Familia_"+nombreArchivoFecha(),informacion);
        return true;
    }

    return false;
}

/// Buscar una familia dado el apellido y país, y mostrar porcentajes con respecto a ella
/// \brief Controlador::buscarFamiliaPorcentajes
/// \param apellido
/// \param pais
/// \return bool
///
bool  Controlador::buscarFamiliaPorcentajes(QString apellido,QString pais){
     ArbolHeapFamilia * familia = tablaFamilia->buscarFamiliaPersona(apellido,pais);
     if (familia != NULL){
        QString informacion =familia->imprimirPorcentajes();
        archivo->openDirectory(0,"Porcentajes_"+nombreArchivoFecha(),informacion);
        return true;
    }

    return false;

}

/// Retorna una lista ordenada de los paise más a menos pecador
/// \brief Controlador::masPecadores
/// \return paises
///
QVector<QString> Controlador::masPecadores(){


    QVector<QString> losPaises;
    QString *countries = datos->getPaises();
    //Esto porque consulta maneja qvector
    for (int i=0;i<25;i++){
        losPaises.append(countries[i]);
    }

    consultas->setPaises(losPaises);
    consultas->setListaDoble(listaMundo->generarCopia());
    QVector<QString> paises = consultas->masPecadores();

    return paises;
}

/// Retorna una lista ordenada de los paises con más a menos buenas acciones
/// \brief Controlador::masBuenos
/// \return paises
///
QVector<QString> Controlador::masBuenos(){

    QVector<QString> losPaises;
    QString *countries = datos->getPaises();
    //Esto porque consulta maneja qvector
    for (int i=0;i<25;i++){
        losPaises.append(countries[i]);
    }

    consultas->setPaises(losPaises);
    consultas->setListaDoble(listaMundo->generarCopia());
    QVector<QString> paises = consultas->masBuenos();

    return paises;

}


void Controlador::condenacion(){
    for(int i=0 ; i<7 ; i++){
        QVector<Persona*> condenados = listaMundo->condenados(i);
        qDebug()<<"Demonio "+QString::number(i);
        qDebug()<<condenados;
        QString datos=infierno->condenar(condenados, i);
        archivo->openDirectory(1,"Condenación_"+nombreArchivoFecha(),datos);
        qDebug()<<datos;
    }

}

bool Controlador::salvacion(){
    QVector<Persona*> salvados;
    int generacion = cielo->generacion();
    for (int i =0 ; i < generacion ; i++){
        Persona * p =infierno->menosPecador();
        if(p==NULL){
            qDebug()<<"nulo";
        }
        salvados.append(p);
    }
    if(salvados[0]!=NULL){
        QString datos=cielo->salvacion(salvados);
        qDebug()<<datos;
        archivo->openDirectory(2,"Salvacion_"+nombreArchivoFecha(),datos);
        return true;
    }
    else{
        return false;
    }

}


void Controlador::imprimirArbolHeapFamilia(){
    tablaFamilia->printAll();
}

/// Ordena continentes de más pecador a menos pecador y los retorna
/// \brief Controlador::ContinentesPecadores
/// \return continentes
///
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

/// Ordena los contienentes de más bueno a menos bueno y los retorna
/// \brief Controlador::ContinentesBuenos
/// \return continentes
///
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




QString Controlador::nombreArchivoFecha(){

    QDateTime UTC(QDateTime::currentDateTimeUtc());
    QDateTime local(UTC.toLocalTime());
    QString nom = local.toString(Qt::SystemLocaleShortDate);

    QStringList datetime = nom.split(" ");
    QStringList time = datetime[1].split(":");
    QStringList date = datetime[0].split("/");

    return date[0]+date[1]+date[2]+"_"+time[0]+time[1];
}
/**
 * @brief Controlador::ganador
 * @return true si gana el infierno y false si gana el cielo
 */
QVector<int> Controlador::ganador(){
    QVector<int> netos;
    netos.append(infierno->neto());
    netos.append(cielo->tabla->neto());
    return netos;

}
QVector<QString> Controlador::ganadorInfierno(){
    QVector<QString> vector;
    vector.append(infierno->cantxPecados());
    vector.append(infierno->cantxPecadosAB());
    return vector;
}
QVector<QString> Controlador::ganadorCielo(){
    QVector<QString> vector;
    vector.append(cielo->tabla->cantxPecados());
    vector.append(cielo->tabla->cantxAB());
    return vector;
}
void Controlador::consultaInfierno(){
    QString datos = infierno->consultasInfierno();
    archivo->openDirectory(1,"ConsultaInfierno_"+nombreArchivoFecha(),datos);

}
void Controlador::consultaCielo(){
    QString datos = cielo->tabla->informacion();
    archivo->openDirectory(2,"ConsultaCielo_"+nombreArchivoFecha(),datos);
}
