#include "datos.h"
Datos::Datos()
{
    tabla = new TablaHashID();

}
QString Datos::abrirArchivo(QString file){
    /*
     Function: Read a file
     Inputs: Qstring file
     Ouputs: None
    */

    QFile inputFile(file);
    if (inputFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in(&inputFile);

        QString allLines = in.readAll();
        inputFile.close();
        return allLines;

    }
   else{
        qDebug()<<"Didn't open read";
        return NULL;
    }

}
QStringList Datos::leerArchivo(int pn){
        QDir all;
        all.setPath("C:/datos");
        QDir dirNewOrders;
        dirNewOrders.setPath("C:/datos/orders");
        QStringList datos;
        QString path;

        if (all.exists()){
                if(! all.isEmpty()){
                    switch (pn) {
                        case 1:
                            path = all.path()+"/Nombres.txt";
                            break;
                        case 2:
                            path = all.path()+"/Apellidos.txt";
                            break;
                        case 3:
                            path = all.path()+"/Paises.txt";

                            break;
                        case 4:
                            path = all.path()+"/Creencias.txt";
                            break;
                        case 5:
                            path = all.path()+"/Profesiones.txt";
                            break;

                    }

                }

        }
        QString allLines = abrirArchivo(path);
        QStringList renglones = allLines.split("\n"); //dividir por salto de linea
        for(int i=0;i<renglones.size();i++){
            datos.append(renglones[i].split(","));
        }
        return datos;

}
void Datos::cargarNombres(){
    QStringList listaNombres =leerArchivo(1);
    for (int i =0 ; i<listaNombres.size();i++){
        nombres[i]=listaNombres[i];
    }
}
void Datos::cargarApellidos(){
    QStringList listaApellidos =leerArchivo(2);
    for (int i =0 ; i<listaApellidos.size();i++){

        apellidos[i]=listaApellidos[i];
    }
}
void Datos::cargarPaises(){
    QStringList listaPaises =leerArchivo(3);
    for (int i =0 ; i<listaPaises.size();i++){
        paises[i]=listaPaises[i].split("\t")[0];
        paises[i+25]=listaPaises[i].split("\t")[1];
    }
}
void Datos::cargarCreencias(){
    QStringList listaCreencias =leerArchivo(4);
    for (int i =0 ; i<listaCreencias.size();i++){

        creencias[i]=listaCreencias[i];
    }
}
void Datos::cargarProfesiones(){
    QStringList listaProfesiones=leerArchivo(5);
    for (int i =0 ; i<listaProfesiones.size();i++){

        profesiones[i]=listaProfesiones[i];
    }
}
QString Datos::obtenerNombre(){
    return nombres[random(100)];
}
QString Datos::obtenerApellido(){
    return apellidos[random(200)];
}

QVector<QString>  Datos::obtenerpaises(){

    int i=random(25);
    return {paises[i],paises[i+25]};
}
QString Datos::obtenerCreencias(){
    return creencias[random(10)];
}
QString Datos::obtenerProfesiones(){
    return profesiones[random(50)];
}

int Datos::random(int seed){
    std::uniform_int_distribution<int> distrib(0, seed-1);
    return distrib(*QRandomGenerator::global());

}

void imprimirArreglo(QString arreglo[]){
    for(int i = 0 ; i<arreglo->size(); i++){
        qDebug()<<arreglo[i];
    }
}



QString *Datos::getPaises(){
    return paises;
}






