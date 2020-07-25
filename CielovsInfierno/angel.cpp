#include "angel.h"

Angel::Angel(QString pnombre,int pversion,int pgeneracion)
{
    nombre =pnombre;
    version = pversion;
    generacion=pgeneracion;
}

Angel::Angel(int pgeneracion)
{
    generacion=pgeneracion;
}
Angel::Angel(QString pnombre)
{
    nombre=pnombre;
}
void Angel::imprimirAngel(){

    qDebug()<<"Angel "+nombre+", version"+QString::number(version)+" y generacion "+QString::number(generacion);

}
QString Angel::infoAngel(){
    return "Angel "+nombre+", version"+QString::number(version)+" y generacion "+QString::number(generacion);
}
