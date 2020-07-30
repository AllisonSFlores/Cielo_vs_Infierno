#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include "controlador.h"
#include <QMessageBox>
#include "tablafamilia.h"

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


void MainWindow::on_btnReporte_clicked()
{
    qDebug()<<"REPORTE";
}

void MainWindow::on_btnCondenar_clicked()
{
    qDebug()<<"MADITO BOTON";
}

