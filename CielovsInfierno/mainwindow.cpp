#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "datos.h"
#include "tablahashenteros.h"

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
    TablaHashEnteros * tabla =new TablaHashEnteros();
    //estas eran pruebas cuando puse que la tabla fuera solo de 10 buckets
    for(int i=0;i<10;i++){
        tabla->insertar(i);
    }
    tabla->insertar(22);
    tabla->insertar(35);
    tabla->imprimirTabla();
}
