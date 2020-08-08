#ifndef ARCHIVOS_H
#define ARCHIVOS_H
#include<QDebug>
#include<QFile>
#include<QDir>

class Archivos{
public:
    void writeFile(QString,QString);
    void openDirectory(int,QString,QString);

    Archivos();

};

#endif // ARCHIVOS_H
