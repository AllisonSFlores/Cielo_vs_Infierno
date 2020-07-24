#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "datos.h"
#include "tablahashID.h"
#include <QString>
#include "controlador.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->tabWidget);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_btnGenerar_clicked(){

    controlador->__init__();
    controlador->cargarDatos();
    int cantidadHumanos = (ui->txtCant->text()).toUInt();
    controlador->crearHumanos(cantidadHumanos);

}
