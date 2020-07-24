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
                    //qDebug()<<"no vacio";
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
   // qDebug()<<listaNombres;
  //  qDebug()<<listaNombres.size();
    for (int i =0 ; i<listaNombres.size();i++){
        //qDebug()<<i;
        nombres[i]=listaNombres[i];
    }
    /*
    for(int i = 0 ; i<1000; i++){
        qDebug()<<nombres[i];
    }*/
}
void Datos::cargarApellidos(){
    QStringList listaApellidos =leerArchivo(2);
   // qDebug()<<listaApellidos;
   // qDebug()<<listaApellidos.size();
    for (int i =0 ; i<listaApellidos.size();i++){
        //qDebug()<<i;
        apellidos[i]=listaApellidos[i];
    }
    /*
    for(int i = 0 ; i<200; i++){
        qDebug()<<apellidos[i];
    }*/
}
void Datos::cargarPaises(){
    QStringList listaPaises =leerArchivo(3);
    //qDebug()<<listaPaises;
    //qDebug()<<listaPaises.size();
    for (int i =0 ; i<listaPaises.size();i++){
       // qDebug()<<i;
        paises[0][i]=listaPaises[i].split("\t")[0];
        paises[1][i]=listaPaises[i].split("\t")[1];
    }
    /*
    for(int i = 0 ; i<25; i++){
        qDebug()<<paises[0][i];
        qDebug()<<paises[1][i];
    }*/
}
void Datos::cargarCreencias(){
    QStringList listaCreencias =leerArchivo(4);
    //qDebug()<<listaCreencias;
    //qDebug()<<listaCreencias.size();
    for (int i =0 ; i<listaCreencias.size();i++){
       // qDebug()<<i;
        creencias[i]=listaCreencias[i];
    }
    /*
    for(int i = 0 ; i<10; i++){
        qDebug()<<creencias[i];
    }*/
}
void Datos::cargarProfesiones(){
    QStringList listaProfesiones=leerArchivo(5);
   // qDebug()<<listaProfesiones;
   // qDebug()<<listaProfesiones.size();
    for (int i =0 ; i<listaProfesiones.size();i++){
       // qDebug()<<i;
        profesiones[i]=listaProfesiones[i];
    }
}
QString Datos::obtenerNombre(){
    return nombres[random(100)];
}
QString Datos::obtenerApellido(){
    return apellidos[random(200)];
}
/*
QString * Datos::obtenerpaises(){

    int i=random(25);
    QString dato[2]={paises[0][i],paises[1][i]};
    return dato;
}*/
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










