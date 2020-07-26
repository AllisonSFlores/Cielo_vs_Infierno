#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include "controlador.h"
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

}

void MainWindow::on_btnInicioCieloPrueba_clicked()
{
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
}

void MainWindow::on_btnCieloSalvacion_clicked()
{
    controlador->salvacion();
    qDebug()<<QString::number(controlador->cielo->getAlturaArbol());
}

void MainWindow::on_btnBuscar_clicked(){

    int id = (ui->txtBuscar->text()).toUInt();
    controlador->buscarPersona(id);
}
