#ifndef CONSULTAS_H
#define CONSULTAS_H
#include<QString>

class Consultas{
      QString *paises;

public:
      Consultas(QString paises[50]){
          this->paises = paises;
      }
      Consultas(){}
      QString *getPaises();
      void setPaises();
};

#endif // CONSULTAS_H
