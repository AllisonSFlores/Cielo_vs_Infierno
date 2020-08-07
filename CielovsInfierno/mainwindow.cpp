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
    ui->textEdit->setText(controlador->informacionArbol());

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
    QVector<QString> continentes = controlador->ContinentesPecadores();

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

    QString coloresBuenos[5] = {"#0B173B","#08298A","#013ADF","#2E64FE","#819FF7"};
    QVector<QString> continentes= controlador->ContinentesBuenos();

    for (int i=0; i<5;i++){
        if(continentes[i]=="Asia"){
            ui->lblAsia->setStyleSheet("QLabel { background-color :"+coloresBuenos[i]+";}");
        }
        else if(continentes[i]=="Oceania"){
            ui->lblOceania->setStyleSheet("QLabel { background-color :"+coloresBuenos[i]+";}");
        }
        else if(continentes[i]=="Africa"){
            ui->lblAfrica->setStyleSheet("QLabel { background-color :"+coloresBuenos[i]+";}");
        }
        else if(continentes[i]=="America"){
            ui->lblAmerica->setStyleSheet("QLabel { background-color :" + coloresBuenos[i]+";}");
        }
        else if(continentes[i]=="Europa"){
            ui->lblEuropa->setStyleSheet("QLabel { background-color :"+coloresBuenos[i]+";}");
        }
    }

}

void MainWindow::on_btnCieloGeneracion_clicked(){

}

void MainWindow::on_btnCieloReporte_clicked(){

}

void MainWindow::on_btnCondenar_clicked(){
    controlador->condenacion();

}

void MainWindow::on_btnReporte_clicked(){
    controlador->infierno->imprimir();
}

//consultas
void MainWindow::on_btnMasBuenos_clicked(){
    QString cadena = "Más buenos \n\n";
    QVector<QString> losPaises = controlador->masBuenos();
    for (int t=0;t<10;t++){
        cadena = cadena + losPaises[t]+"\n\n";
    }
    ui->txtEdit->setText(cadena);
}

void MainWindow::on_btnMenosPecadores_clicked(){

    QString cadena = "Menos pecadores \n\n";
    QVector<QString> losPaises = controlador->masPecadores();
    for (int t=losPaises.length()-1;t>losPaises.length()-6;t--){
        cadena = cadena + losPaises[t]+"\n\n";
    }
    ui->txtEdit->setText(cadena);

}

void MainWindow::on_btnMenosBuenos_clicked(){

    QString cadena = "Menos buenos \n\n";
    QVector<QString> losPaises = controlador->masBuenos();
    for (int t=losPaises.length()-1;t>losPaises.length()-6;t--){
        cadena = cadena + losPaises[t]+"\n\n";
    }
    ui->txtEdit->setText(cadena);
}

void MainWindow::on_btnMasPecadores_clicked(){

    QString cadena = "Más pecadores \n\n";
    QVector<QString> losPaises = controlador->masPecadores();
    for (int t=0;t<10;t++){
        cadena = cadena + losPaises[t]+"\n\n";
    }
    ui->txtEdit->setText(cadena);
}


void MainWindow::on_btnBuscar_clicked(){

    int id = (ui->txtBuscar->text()).toUInt();
    if (controlador->getArbolMundo()->raiz != NULL){
        if(ui->rbPecados->isChecked()){
            if (!controlador->buscarPersonaPecados(id)){
                 QMessageBox::information(this,"Error","Persona no existe",QMessageBox::Ok);
            }
            else{
                QMessageBox::information(this,"Información","Persona encontrada",QMessageBox::Ok);
            }
        }
        else if(ui->rbBuenasA->isChecked()){
            if (controlador->getArbolMundo()->raiz != NULL){
                if (!controlador->buscarPersonaBA(id)){
                     QMessageBox::information(this,"Error","Persona no existe",QMessageBox::Ok);
                }
                else{
                    QMessageBox::information(this,"Información","Persona encontrada",QMessageBox::Ok);
                }
            }
        }

    }
    else{
        QMessageBox::information(this,"Error","El mundo no tiene personas",QMessageBox::Ok);
    }


}



void MainWindow::on_btnBuscarFamilia_clicked(){

    QString apellido = (ui->txtApellido->text());
    QString pais = (ui->txtPais->text());

    if (controlador->getArbolMundo()->raiz != NULL){
        if (ui->rbInformacion->isChecked()){
            if (!controlador->buscarFamilia(apellido,pais)){
                 QMessageBox::information(this,"Error","Familia no existe",QMessageBox::Ok);
            }
            else{
                QMessageBox::information(this,"Información","Familia encontrada",QMessageBox::Ok);
            }
        }
        else if(ui->rbPorcentajes->isChecked()){
            if (!controlador->buscarFamilia(apellido,pais)){
                 QMessageBox::information(this,"Error","Familia no existe",QMessageBox::Ok);
            }
            else{
                QMessageBox::information(this,"Información","Familia encontrada",QMessageBox::Ok);
            }
        }
    }
    else{
        QMessageBox::information(this,"Error","El mundo no tiene personas",QMessageBox::Ok);
    }

}
