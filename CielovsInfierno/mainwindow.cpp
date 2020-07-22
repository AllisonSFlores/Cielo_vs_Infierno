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
    tabla->imprimirTabla();


}
