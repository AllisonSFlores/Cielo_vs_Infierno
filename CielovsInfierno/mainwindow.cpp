#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include "controlador.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->tabWidget);
    controlador->__init__();
    controlador->cargarDatos();
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_btnGenerar_clicked(){

    int cantidadHumanos = (ui->txtCant->text()).toUInt();
    controlador->crearHumanos(cantidadHumanos);
    controlador->imprimirArbolHeapFamilia();

}

void MainWindow::on_btnCieloSalvacion_clicked(){
    /*TablaHashCielo *tabla=new TablaHashCielo();
    Persona * uno = new Persona(475891,"Allison","Solano","Atea","Ingeniera");
    Persona * dos = new Persona(1,"Melvin","Solano","adca","estudiante");
    Persona * tres = new Persona(475892,"Sebas","Campos","Catolismo","Mecatronico");
    tabla->insertar(uno);
    tabla->insertar(dos);
    tabla->insertar(tres);
    tabla->imprimirTabla();
    qDebug()<<tabla->tabla[47].len();
    Cielo * cielo =new Cielo();
    qDebug()<<QString::number(cielo->getAlturaArbol());*/

    controlador->salvacion();
    qDebug()<<QString::number(controlador->cielo->getAlturaArbol());
}

void MainWindow::on_btnBuscar_clicked(){

    int id = (ui->txtBuscar->text()).toUInt();
    if (controlador->getArbolMundo()->raiz != NULL){
        if (controlador->buscarPersona(id)== NULL){
             QMessageBox::information(this,"Error","Persona no existe",QMessageBox::Ok);
        }
    }
    else{
        QMessageBox::information(this,"Error","El mundo no tiene personas",QMessageBox::Ok);
    }


}

void MainWindow::on_btnSumarPecados_clicked(){

    listaDoble * mundo = controlador->getListaMundo();
    if (mundo->largoLista() > 0 ){
         mundo->sumarPecadosYbuenasAcciones();
         mundo->imprimirPecadosYbuenasAcciones();
    }
    else{
        QMessageBox::information(this,"Error","El mundo aún no tienen personas",QMessageBox::Ok);
    }
}



void MainWindow::on_btnPecados_clicked(){
    QString coloresPecadores[5] = {"#6A0888","#A901DB","#CC2EFA","#DA81F5","#ECCEF5"};
    QString continentes[5] = {"Asia","Oceania","Africa","America","Europa"};
    QVector<int> lista = controlador->ContinentesPecadores();
    qDebug()<<lista[0];
    qDebug()<<lista[1];
    qDebug()<<lista[2];
    qDebug()<<lista[3];
    qDebug()<<lista[4];
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
      qDebug()<<"ordenaditos";
      qDebug()<<lista[0];
      qDebug()<<lista[1];
      qDebug()<<lista[2];
      qDebug()<<lista[3];
      qDebug()<<lista[4];
   //--------------------------------------------------------------------//
    for (int i=0; i<5;i++){
        if(continentes[i]=="Asia"){
            ui->lblAsia->setStyleSheet("QLabel { background-color :"+coloresPecadores[i]+";}");
        }
        else if(continentes[i]=="Oceania"){
            ui->lblOceania->setStyleSheet("QLabel { background-color :"+coloresPecadores[i]+";}");
        }
        else if(continentes[i]=="Africa"){
            ui->lblAfrica->setStyleSheet("QLabel { background-color :"+coloresPecadores[i]+";}");
        }
        else if(continentes[i]=="America"){
            ui->lblAmerica->setStyleSheet("QLabel { background-color :" + coloresPecadores[i]+";}");
        }
        else if(continentes[i]=="Europa"){
            ui->lblEuropa->setStyleSheet("QLabel { background-color :"+coloresPecadores[i]+";}");
        }
    }
}


void MainWindow::on_btnBuenasAcciones_clicked(){

    QString coloresPecadores[5] = {"#0B173B","#08298A","#013ADF","#2E64FE","#819FF7"};
    QString continentes[5] = {"Asia","Oceania","Africa","America","Europa"};
    QVector<int> lista = controlador->ContinentesBuenos();
    qDebug()<<lista[0];
    qDebug()<<lista[1];
    qDebug()<<lista[2];
    qDebug()<<lista[3];
    qDebug()<<lista[4];
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
      qDebug()<<"ordenaditos";
      qDebug()<<lista[0];
      qDebug()<<lista[1];
      qDebug()<<lista[2];
      qDebug()<<lista[3];
      qDebug()<<lista[4];
   //--------------------------------------------------------------------//
    for (int i=0; i<5;i++){
        if(continentes[i]=="Asia"){
            ui->lblAsia->setStyleSheet("QLabel { background-color :"+coloresPecadores[i]+";}");
        }
        else if(continentes[i]=="Oceania"){
            ui->lblOceania->setStyleSheet("QLabel { background-color :"+coloresPecadores[i]+";}");
        }
        else if(continentes[i]=="Africa"){
            ui->lblAfrica->setStyleSheet("QLabel { background-color :"+coloresPecadores[i]+";}");
        }
        else if(continentes[i]=="America"){
            ui->lblAmerica->setStyleSheet("QLabel { background-color :" + coloresPecadores[i]+";}");
        }
        else if(continentes[i]=="Europa"){
            ui->lblEuropa->setStyleSheet("QLabel { background-color :"+coloresPecadores[i]+";}");
        }
    }

}

void MainWindow::on_btnCieloGeneracion_clicked()
{

}

void MainWindow::on_btnCieloReporte_clicked()
{

}

void MainWindow::on_btnCondenar_clicked(){

    controlador->getListaMundo()->imprimir();
    qDebug()<<"Lucifer:Orgullo";
    QVector<Persona*> orgullo = controlador->getListaMundo()->condenados(0);
    qDebug()<<orgullo;
    qDebug()<<"Belcebú:Envidia";
    QVector<Persona*> envidia = controlador->getListaMundo()->condenados(1);
    qDebug()<<envidia;
    qDebug()<<"Satán:ira";
    QVector<Persona*> ira = controlador->getListaMundo()->condenados(2);
    qDebug()<<ira;
    qDebug()<<"Abadón:Pereza";
    QVector<Persona*> pereza = controlador->getListaMundo()->condenados(3);
    qDebug()<<pereza;
    qDebug()<<"Mammón:Codicia";
    QVector<Persona*> codicia = controlador->getListaMundo()->condenados(4);
    qDebug()<<codicia;
    qDebug()<<"Belfegor:Glotonería";
    QVector<Persona*> glotoneria = controlador->getListaMundo()->condenados(5);
    qDebug()<<glotoneria;
    qDebug()<<"Asmodeo:Lujuria";
    QVector<Persona*> lujuria = controlador->getListaMundo()->condenados(6);
    qDebug()<<lujuria;

}
