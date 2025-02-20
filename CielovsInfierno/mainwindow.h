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

    void on_btnCieloSalvacion_clicked();

    void on_btnBuscar_clicked();

    void on_btnSumarPecados_clicked();

    void on_btnPecados_clicked();

    void on_btnBuenasAcciones_clicked();

    void on_btnCieloGeneracion_clicked();

    void on_btnCieloReporte_clicked();

    void on_btnCondenar_clicked();

    void on_btnReporte_clicked();

    void on_btnMasBuenos_clicked();

    void on_btnMenosPecadores_clicked();

    void on_btnMenosBuenos_clicked();

    void on_btnMasPecadores_clicked();

    void on_btnBuscarFamilia_clicked();

    void on_btnGanador_clicked();

    void on_btn1_clicked();

    void on_btn2_clicked();

    void on_btn3_clicked();

    void on_btn4_clicked();

    void on_btn5_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
