#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "controlador.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
   Controlador * controlador = new Controlador();
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_btnGenerar_clicked();

    void on_btnInicioCieloPrueba_clicked();

    void on_btnCieloSalvacion_clicked();

    void on_btnBuscar_clicked();

    void on_btnSumarPecados_clicked();

    void on_pruebas_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
