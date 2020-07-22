#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "datos.h"
#include "tablahashID.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->tabWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_3_clicked()
{
    TablaHashID * tabla =new TablaHashID();
    //estas eran pruebas cuando puse que la tabla fuera solo de 10 buckets
    for(int i=0;i<1000000;i++){
        i = i+1000;
        tabla->insertar(i);
    }
    tabla->insertar(9999);//estar en key 1
    tabla->insertar(4999);//estar en key 0
    Datos * datos =new Datos();
    datos->cargarNombres();
    datos->cargarApellidos();
    datos->cargarProfesiones();
    //datos->cargarPaises();
    datos->cargarCreencias();
    for (int i =0;i<10;i++) {
        qDebug()<<datos->obtenerNombre();
        qDebug()<<datos->obtenerApellido();
        //qDebug()<<datos->obtenerpaises()->size();
        qDebug()<<datos->obtenerProfesiones();
        qDebug()<<datos->obtenerCreencias();
    }


}
