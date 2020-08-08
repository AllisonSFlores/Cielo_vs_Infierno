#include "archivos.h"

Archivos::Archivos(){}

void Archivos::writeFile(QString file, QString datos){

    QFile inputFile;
    QByteArray info = "\n" + datos.toUtf8();
    inputFile.setFileName(file);

    if (inputFile.open(QIODevice::Append | QIODevice::Text)){

        inputFile.write(info);
        inputFile.flush();
        inputFile.close();


    }
   else{
        qDebug()<<"Didn't open for write";

    }

}


void Archivos::openDirectory(int folder,QString nombre,QString datos){


    QDir consultas;
    consultas.setPath("C:/Consultas");
    QDir mundo;
    mundo.setPath("C:/Consultas/Mundo");
    QDir cielo;
    cielo.setPath("C:/Consultas/Cielo");
    QDir infierno;
    infierno.setPath("C:/Consultas/Infierno");
    QString path;

    if (consultas.exists()){

        switch (folder) {
            case 0:
                path = mundo.path()+"/"+nombre+".txt";
                break;
            case 1:
               path = infierno.path()+"/"+nombre+".txt";
               break;
            case 2:
                path = cielo.path()+"/"+nombre+".txt";
                break;
            default:
                path = consultas.path()+"/"+nombre+".txt";
                break;

       }


    }
    else{
        consultas.mkdir("C:/Consultas");
        qWarning("Se creó Consultas");
    }

    writeFile(path,datos);
}
