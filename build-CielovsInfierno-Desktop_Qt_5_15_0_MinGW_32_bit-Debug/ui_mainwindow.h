/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLineEdit *txtCant;
    QPushButton *btnGenerar;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *VL2;
    QLabel *label_28;
    QLineEdit *txtBuscar;
    QPushButton *btnBuscar;
    QPushButton *btnSumarPecados;
    QLabel *label_26;
    QPushButton *btnPecados;
    QPushButton *btnBuenasAcciones;
    QLabel *label_27;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *lblOceania;
    QLabel *lblEuropa;
    QLabel *lblAfrica;
    QLabel *lblAsia;
    QLabel *lblAmerica;
    QTextEdit *txtEdit;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *VL2_3;
    QLabel *label_29;
    QLineEdit *txtApellido;
    QLabel *label_30;
    QLineEdit *txtPais;
    QPushButton *btnBuscarFamilia;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btnMasPecadores;
    QPushButton *btnMasBuenos;
    QPushButton *btnMenosPecadores;
    QPushButton *btnMenosBuenos;
    QLabel *label_31;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *rbInformacion;
    QRadioButton *rbPorcentajes;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *rbPecados;
    QRadioButton *rbBuenasA;
    QLabel *label_25;
    QTextEdit *textEdit;
    QLabel *label_33;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_40;
    QRadioButton *rbP1;
    QRadioButton *rbB1;
    QLineEdit *txt1;
    QPushButton *btn1;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_41;
    QRadioButton *rbP1_2;
    QRadioButton *rbB1_2;
    QLineEdit *txt2;
    QPushButton *btn2;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_42;
    QRadioButton *rbP1_3;
    QRadioButton *rbB1_3;
    QLineEdit *txt3;
    QPushButton *btn3;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_43;
    QRadioButton *rbP1_4;
    QRadioButton *rbB1_4;
    QLineEdit *txt4;
    QPushButton *btn4;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_44;
    QRadioButton *rbP1_5;
    QRadioButton *rbB1_5;
    QLineEdit *txt5;
    QPushButton *btn5;
    QWidget *tab_2;
    QLabel *label_16;
    QLabel *label_17;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_24;
    QLabel *label_23;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_18;
    QLabel *label_22;
    QPushButton *btnReporte;
    QLabel *label_15;
    QPushButton *btnCondenar;
    QLabel *label_32;
    QWidget *Cielo;
    QLabel *label;
    QLabel *label_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnCieloSalvacion;
    QPushButton *btnCieloReporte;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_13;
    QLabel *label_14;
    QFrame *line;
    QPushButton *btnCieloGeneracion;
    QWidget *tab_3;
    QTextEdit *textEdit_Infierno;
    QPushButton *btnGanador;
    QTextEdit *textEdit_Cielo;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_netoInfierno;
    QLabel *label_netoCielo;
    QLabel *label_38;
    QLabel *label_39;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1430, 941);
        MainWindow->setMinimumSize(QSize(1400, 900));
        MainWindow->setMaximumSize(QSize(1900, 1000));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagenes/devil.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMaximumSize(QSize(1900, 900));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1500, 931));
        tabWidget->setMinimumSize(QSize(1400, 900));
        tabWidget->setMaximumSize(QSize(1900, 1000));
        tabWidget->setCursor(QCursor(Qt::ArrowCursor));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setMinimumSize(QSize(1500, 990));
        tab->setMaximumSize(QSize(1900, 990));
        verticalLayoutWidget_3 = new QWidget(tab);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(250, 120, 231, 84));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(9);
        label_2->setFont(font);

        verticalLayout_3->addWidget(label_2);

        txtCant = new QLineEdit(verticalLayoutWidget_3);
        txtCant->setObjectName(QString::fromUtf8("txtCant"));

        verticalLayout_3->addWidget(txtCant);

        btnGenerar = new QPushButton(verticalLayoutWidget_3);
        btnGenerar->setObjectName(QString::fromUtf8("btnGenerar"));
        btnGenerar->setFont(font);
        btnGenerar->setCursor(QCursor(Qt::PointingHandCursor));
        btnGenerar->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 41, 81);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(btnGenerar);

        verticalLayoutWidget_4 = new QWidget(tab);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(370, 540, 271, 111));
        VL2 = new QVBoxLayout(verticalLayoutWidget_4);
        VL2->setObjectName(QString::fromUtf8("VL2"));
        VL2->setContentsMargins(0, 0, 0, 0);
        label_28 = new QLabel(verticalLayoutWidget_4);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        VL2->addWidget(label_28);

        txtBuscar = new QLineEdit(verticalLayoutWidget_4);
        txtBuscar->setObjectName(QString::fromUtf8("txtBuscar"));

        VL2->addWidget(txtBuscar);

        btnBuscar = new QPushButton(verticalLayoutWidget_4);
        btnBuscar->setObjectName(QString::fromUtf8("btnBuscar"));
        btnBuscar->setFont(font);
        btnBuscar->setCursor(QCursor(Qt::PointingHandCursor));
        btnBuscar->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 41, 81);\n"
"color: rgb(255, 255, 255);"));

        VL2->addWidget(btnBuscar);

        btnSumarPecados = new QPushButton(tab);
        btnSumarPecados->setObjectName(QString::fromUtf8("btnSumarPecados"));
        btnSumarPecados->setGeometry(QRect(250, 210, 231, 31));
        btnSumarPecados->setFont(font);
        btnSumarPecados->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 41, 81);\n"
"color: rgb(255, 255, 255);"));
        label_26 = new QLabel(tab);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(220, 0, 381, 121));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Constantia"));
        font1.setPointSize(72);
        font1.setItalic(true);
        label_26->setFont(font1);
        label_26->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btnPecados = new QPushButton(tab);
        btnPecados->setObjectName(QString::fromUtf8("btnPecados"));
        btnPecados->setGeometry(QRect(990, 290, 151, 41));
        btnPecados->setFont(font);
        btnPecados->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 41, 81);\n"
"color: rgb(255, 255, 255);"));
        btnBuenasAcciones = new QPushButton(tab);
        btnBuenasAcciones->setObjectName(QString::fromUtf8("btnBuenasAcciones"));
        btnBuenasAcciones->setGeometry(QRect(1200, 290, 151, 41));
        btnBuenasAcciones->setFont(font);
        btnBuenasAcciones->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 41, 81);\n"
"color: rgb(255, 255, 255);"));
        label_27 = new QLabel(tab);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(1050, 240, 271, 51));
        label_27->setFont(font1);
        label_27->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(890, 350, 528, 389));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lblOceania = new QLabel(gridLayoutWidget);
        lblOceania->setObjectName(QString::fromUtf8("lblOceania"));

        gridLayout->addWidget(lblOceania, 1, 2, 1, 1);

        lblEuropa = new QLabel(gridLayoutWidget);
        lblEuropa->setObjectName(QString::fromUtf8("lblEuropa"));

        gridLayout->addWidget(lblEuropa, 0, 1, 1, 1);

        lblAfrica = new QLabel(gridLayoutWidget);
        lblAfrica->setObjectName(QString::fromUtf8("lblAfrica"));

        gridLayout->addWidget(lblAfrica, 1, 1, 1, 1);

        lblAsia = new QLabel(gridLayoutWidget);
        lblAsia->setObjectName(QString::fromUtf8("lblAsia"));

        gridLayout->addWidget(lblAsia, 0, 2, 1, 1);

        lblAmerica = new QLabel(gridLayoutWidget);
        lblAmerica->setObjectName(QString::fromUtf8("lblAmerica"));

        gridLayout->addWidget(lblAmerica, 0, 0, 2, 1);

        txtEdit = new QTextEdit(tab);
        txtEdit->setObjectName(QString::fromUtf8("txtEdit"));
        txtEdit->setGeometry(QRect(1180, 50, 181, 191));
        verticalLayoutWidget_6 = new QWidget(tab);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(70, 540, 271, 111));
        VL2_3 = new QVBoxLayout(verticalLayoutWidget_6);
        VL2_3->setObjectName(QString::fromUtf8("VL2_3"));
        VL2_3->setContentsMargins(0, 0, 0, 0);
        label_29 = new QLabel(verticalLayoutWidget_6);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        VL2_3->addWidget(label_29);

        txtApellido = new QLineEdit(verticalLayoutWidget_6);
        txtApellido->setObjectName(QString::fromUtf8("txtApellido"));

        VL2_3->addWidget(txtApellido);

        label_30 = new QLabel(verticalLayoutWidget_6);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        VL2_3->addWidget(label_30);

        txtPais = new QLineEdit(verticalLayoutWidget_6);
        txtPais->setObjectName(QString::fromUtf8("txtPais"));

        VL2_3->addWidget(txtPais);

        btnBuscarFamilia = new QPushButton(verticalLayoutWidget_6);
        btnBuscarFamilia->setObjectName(QString::fromUtf8("btnBuscarFamilia"));
        btnBuscarFamilia->setCursor(QCursor(Qt::PointingHandCursor));
        btnBuscarFamilia->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 41, 81);\n"
"color: rgb(255, 255, 255);"));

        VL2_3->addWidget(btnBuscarFamilia);

        verticalLayoutWidget_7 = new QWidget(tab);
        verticalLayoutWidget_7->setObjectName(QString::fromUtf8("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(990, 40, 185, 201));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        btnMasPecadores = new QPushButton(verticalLayoutWidget_7);
        btnMasPecadores->setObjectName(QString::fromUtf8("btnMasPecadores"));
        btnMasPecadores->setFont(font);
        btnMasPecadores->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 41, 81);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(btnMasPecadores);

        btnMasBuenos = new QPushButton(verticalLayoutWidget_7);
        btnMasBuenos->setObjectName(QString::fromUtf8("btnMasBuenos"));
        btnMasBuenos->setFont(font);
        btnMasBuenos->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 41, 81);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(btnMasBuenos);

        btnMenosPecadores = new QPushButton(verticalLayoutWidget_7);
        btnMenosPecadores->setObjectName(QString::fromUtf8("btnMenosPecadores"));
        btnMenosPecadores->setFont(font);
        btnMenosPecadores->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 41, 81);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(btnMenosPecadores);

        btnMenosBuenos = new QPushButton(verticalLayoutWidget_7);
        btnMenosBuenos->setObjectName(QString::fromUtf8("btnMenosBuenos"));
        btnMenosBuenos->setFont(font);
        btnMenosBuenos->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 41, 81);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(btnMenosBuenos);

        label_31 = new QLabel(tab);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(1190, 10, 161, 41));
        verticalLayoutWidget_9 = new QWidget(tab);
        verticalLayoutWidget_9->setObjectName(QString::fromUtf8("verticalLayoutWidget_9"));
        verticalLayoutWidget_9->setGeometry(QRect(70, 490, 328, 53));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_9);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        rbInformacion = new QRadioButton(verticalLayoutWidget_9);
        rbInformacion->setObjectName(QString::fromUtf8("rbInformacion"));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        rbInformacion->setFont(font2);

        verticalLayout_5->addWidget(rbInformacion);

        rbPorcentajes = new QRadioButton(verticalLayoutWidget_9);
        rbPorcentajes->setObjectName(QString::fromUtf8("rbPorcentajes"));
        rbPorcentajes->setFont(font2);

        verticalLayout_5->addWidget(rbPorcentajes);

        verticalLayoutWidget_8 = new QWidget(tab);
        verticalLayoutWidget_8->setObjectName(QString::fromUtf8("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(370, 490, 323, 53));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        rbPecados = new QRadioButton(verticalLayoutWidget_8);
        rbPecados->setObjectName(QString::fromUtf8("rbPecados"));
        rbPecados->setFont(font2);

        verticalLayout_6->addWidget(rbPecados);

        rbBuenasA = new QRadioButton(verticalLayoutWidget_8);
        rbBuenasA->setObjectName(QString::fromUtf8("rbBuenasA"));
        rbBuenasA->setFont(font2);

        verticalLayout_6->addWidget(rbBuenasA);

        label_25 = new QLabel(tab);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(-40, -50, 1471, 941));
        label_25->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 255, 235);"));
        label_25->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(130, 300, 461, 171));
        label_33 = new QLabel(tab);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(220, 250, 301, 31));
        verticalLayoutWidget_5 = new QWidget(tab);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(660, 20, 221, 641));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_40 = new QLabel(verticalLayoutWidget_5);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        verticalLayout_8->addWidget(label_40);

        rbP1 = new QRadioButton(verticalLayoutWidget_5);
        rbP1->setObjectName(QString::fromUtf8("rbP1"));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        rbP1->setFont(font3);
        rbP1->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_8->addWidget(rbP1);

        rbB1 = new QRadioButton(verticalLayoutWidget_5);
        rbB1->setObjectName(QString::fromUtf8("rbB1"));
        rbB1->setFont(font3);
        rbB1->setStyleSheet(QString::fromUtf8("background-image: url(:/imagenes/mpaa3.jpg);"));

        verticalLayout_8->addWidget(rbB1);


        verticalLayout_7->addLayout(verticalLayout_8);

        txt1 = new QLineEdit(verticalLayoutWidget_5);
        txt1->setObjectName(QString::fromUtf8("txt1"));

        verticalLayout_7->addWidget(txt1);

        btn1 = new QPushButton(verticalLayoutWidget_5);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 41, 81);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_7->addWidget(btn1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_41 = new QLabel(verticalLayoutWidget_5);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_9->addWidget(label_41);

        rbP1_2 = new QRadioButton(verticalLayoutWidget_5);
        rbP1_2->setObjectName(QString::fromUtf8("rbP1_2"));
        rbP1_2->setFont(font3);
        rbP1_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_9->addWidget(rbP1_2);

        rbB1_2 = new QRadioButton(verticalLayoutWidget_5);
        rbB1_2->setObjectName(QString::fromUtf8("rbB1_2"));

        verticalLayout_9->addWidget(rbB1_2);


        verticalLayout_7->addLayout(verticalLayout_9);

        txt2 = new QLineEdit(verticalLayoutWidget_5);
        txt2->setObjectName(QString::fromUtf8("txt2"));

        verticalLayout_7->addWidget(txt2);

        btn2 = new QPushButton(verticalLayoutWidget_5);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 41, 81);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_7->addWidget(btn2);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_42 = new QLabel(verticalLayoutWidget_5);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        verticalLayout_10->addWidget(label_42);

        rbP1_3 = new QRadioButton(verticalLayoutWidget_5);
        rbP1_3->setObjectName(QString::fromUtf8("rbP1_3"));

        verticalLayout_10->addWidget(rbP1_3);

        rbB1_3 = new QRadioButton(verticalLayoutWidget_5);
        rbB1_3->setObjectName(QString::fromUtf8("rbB1_3"));

        verticalLayout_10->addWidget(rbB1_3);


        verticalLayout_7->addLayout(verticalLayout_10);

        txt3 = new QLineEdit(verticalLayoutWidget_5);
        txt3->setObjectName(QString::fromUtf8("txt3"));

        verticalLayout_7->addWidget(txt3);

        btn3 = new QPushButton(verticalLayoutWidget_5);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        btn3->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 41, 81);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_7->addWidget(btn3);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_43 = new QLabel(verticalLayoutWidget_5);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        verticalLayout_11->addWidget(label_43);

        rbP1_4 = new QRadioButton(verticalLayoutWidget_5);
        rbP1_4->setObjectName(QString::fromUtf8("rbP1_4"));

        verticalLayout_11->addWidget(rbP1_4);

        rbB1_4 = new QRadioButton(verticalLayoutWidget_5);
        rbB1_4->setObjectName(QString::fromUtf8("rbB1_4"));

        verticalLayout_11->addWidget(rbB1_4);


        verticalLayout_7->addLayout(verticalLayout_11);

        txt4 = new QLineEdit(verticalLayoutWidget_5);
        txt4->setObjectName(QString::fromUtf8("txt4"));

        verticalLayout_7->addWidget(txt4);

        btn4 = new QPushButton(verticalLayoutWidget_5);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        btn4->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 41, 81);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_7->addWidget(btn4);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_44 = new QLabel(verticalLayoutWidget_5);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        verticalLayout_12->addWidget(label_44);

        rbP1_5 = new QRadioButton(verticalLayoutWidget_5);
        rbP1_5->setObjectName(QString::fromUtf8("rbP1_5"));

        verticalLayout_12->addWidget(rbP1_5);

        rbB1_5 = new QRadioButton(verticalLayoutWidget_5);
        rbB1_5->setObjectName(QString::fromUtf8("rbB1_5"));

        verticalLayout_12->addWidget(rbB1_5);


        verticalLayout_7->addLayout(verticalLayout_12);

        txt5 = new QLineEdit(verticalLayoutWidget_5);
        txt5->setObjectName(QString::fromUtf8("txt5"));

        verticalLayout_7->addWidget(txt5);

        btn5 = new QPushButton(verticalLayoutWidget_5);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        btn5->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 41, 81);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_7->addWidget(btn5);

        tabWidget->addTab(tab, QString());
        label_25->raise();
        verticalLayoutWidget_3->raise();
        verticalLayoutWidget_4->raise();
        btnSumarPecados->raise();
        label_26->raise();
        btnPecados->raise();
        btnBuenasAcciones->raise();
        label_27->raise();
        gridLayoutWidget->raise();
        txtEdit->raise();
        verticalLayoutWidget_6->raise();
        verticalLayoutWidget_7->raise();
        label_31->raise();
        verticalLayoutWidget_9->raise();
        verticalLayoutWidget_8->raise();
        textEdit->raise();
        label_33->raise();
        verticalLayoutWidget_5->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(390, 160, 621, 501));
        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(110, 60, 391, 151));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Microsoft Himalaya"));
        font4.setPointSize(72);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        font4.setStrikeOut(true);
        label_17->setFont(font4);
        horizontalLayoutWidget = new QWidget(tab_2);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(70, 730, 1301, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(horizontalLayoutWidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Microsoft Himalaya"));
        font5.setPointSize(36);
        label_24->setFont(font5);
        label_24->setStyleSheet(QString::fromUtf8("color:rgb(158, 94, 72)"));

        horizontalLayout->addWidget(label_24);

        label_23 = new QLabel(horizontalLayoutWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font5);
        label_23->setStyleSheet(QString::fromUtf8("color:rgb(158, 94, 72)"));

        horizontalLayout->addWidget(label_23);

        label_19 = new QLabel(horizontalLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Microsoft Himalaya"));
        font6.setPointSize(36);
        font6.setStrikeOut(false);
        label_19->setFont(font6);
        label_19->setStyleSheet(QString::fromUtf8("color:rgb(158, 94, 72)"));

        horizontalLayout->addWidget(label_19);

        label_20 = new QLabel(horizontalLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font5);
        label_20->setStyleSheet(QString::fromUtf8("color:rgb(158, 94, 72)"));

        horizontalLayout->addWidget(label_20);

        label_21 = new QLabel(horizontalLayoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font5);
        label_21->setStyleSheet(QString::fromUtf8("color:rgb(158, 94, 72)"));

        horizontalLayout->addWidget(label_21);

        label_18 = new QLabel(horizontalLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font5);
        label_18->setStyleSheet(QString::fromUtf8("color:rgb(158, 94, 72)"));

        horizontalLayout->addWidget(label_18);

        label_22 = new QLabel(horizontalLayoutWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font5);
        label_22->setStyleSheet(QString::fromUtf8("color:rgb(158, 94, 72)"));

        horizontalLayout->addWidget(label_22);

        btnReporte = new QPushButton(tab_2);
        btnReporte->setObjectName(QString::fromUtf8("btnReporte"));
        btnReporte->setGeometry(QRect(630, 420, 171, 41));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Microsoft Himalaya"));
        font7.setPointSize(22);
        font7.setStrikeOut(false);
        btnReporte->setFont(font7);
        btnReporte->setCursor(QCursor(Qt::ForbiddenCursor));
        btnReporte->setStyleSheet(QString::fromUtf8("background-color: rgb(181, 0, 0);"));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(0, 0, 1431, 891));
        btnCondenar = new QPushButton(tab_2);
        btnCondenar->setObjectName(QString::fromUtf8("btnCondenar"));
        btnCondenar->setGeometry(QRect(630, 370, 171, 41));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Microsoft Himalaya"));
        font8.setPointSize(22);
        btnCondenar->setFont(font8);
        btnCondenar->setCursor(QCursor(Qt::ForbiddenCursor));
        btnCondenar->setStyleSheet(QString::fromUtf8("background-color: rgb(181, 0, 0);"));
        label_32 = new QLabel(tab_2);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(260, 250, 55, 16));
        tabWidget->addTab(tab_2, QString());
        label_15->raise();
        label_16->raise();
        label_17->raise();
        horizontalLayoutWidget->raise();
        btnReporte->raise();
        btnCondenar->raise();
        label_32->raise();
        Cielo = new QWidget();
        Cielo->setObjectName(QString::fromUtf8("Cielo"));
        label = new QLabel(Cielo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1900, 1000));
        label->setMinimumSize(QSize(1400, 1000));
        label->setMaximumSize(QSize(1900, 1000));
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(true);
        label->setMargin(-2);
        label->setOpenExternalLinks(false);
        label_3 = new QLabel(Cielo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 120, 301, 141));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        verticalLayoutWidget = new QWidget(Cielo);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(510, 390, 207, 148));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnCieloSalvacion = new QPushButton(verticalLayoutWidget);
        btnCieloSalvacion->setObjectName(QString::fromUtf8("btnCieloSalvacion"));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Constantia"));
        font9.setPointSize(14);
        font9.setItalic(true);
        btnCieloSalvacion->setFont(font9);
        btnCieloSalvacion->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(btnCieloSalvacion);

        btnCieloReporte = new QPushButton(verticalLayoutWidget);
        btnCieloReporte->setObjectName(QString::fromUtf8("btnCieloReporte"));
        btnCieloReporte->setFont(font9);
        btnCieloReporte->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(btnCieloReporte);

        label_4 = new QLabel(Cielo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(220, 280, 291, 401));
        label_8 = new QLabel(Cielo);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(860, 270, 504, 96));
        QFont font10;
        font10.setFamily(QString::fromUtf8("Constantia"));
        font10.setPointSize(12);
        font10.setItalic(true);
        label_8->setFont(font10);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7 = new QLabel(Cielo);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(830, 210, 148, 64));
        QFont font11;
        font11.setFamily(QString::fromUtf8("Constantia"));
        font11.setPointSize(18);
        font11.setItalic(true);
        label_7->setFont(font11);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_6 = new QLabel(Cielo);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(870, 120, 537, 72));
        label_6->setFont(font10);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5 = new QLabel(Cielo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(840, 50, 115, 64));
        label_5->setFont(font11);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_9 = new QLabel(Cielo);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(830, 390, 161, 51));
        label_9->setFont(font11);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_10 = new QLabel(Cielo);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(860, 450, 501, 81));
        label_10->setFont(font10);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_11 = new QLabel(Cielo);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(830, 580, 171, 41));
        label_11->setFont(font11);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_12 = new QLabel(Cielo);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(830, 640, 491, 111));
        label_12->setFont(font10);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        verticalLayoutWidget_2 = new QWidget(Cielo);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(60, 270, 170, 262));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(verticalLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font11);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_13);

        label_14 = new QLabel(verticalLayoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font10);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_14);

        line = new QFrame(Cielo);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(790, 90, 16, 681));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        btnCieloGeneracion = new QPushButton(Cielo);
        btnCieloGeneracion->setObjectName(QString::fromUtf8("btnCieloGeneracion"));
        btnCieloGeneracion->setGeometry(QRect(1410, 850, 16, 16));
        btnCieloGeneracion->setFont(font9);
        btnCieloGeneracion->setCursor(QCursor(Qt::PointingHandCursor));
        tabWidget->addTab(Cielo, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        textEdit_Infierno = new QTextEdit(tab_3);
        textEdit_Infierno->setObjectName(QString::fromUtf8("textEdit_Infierno"));
        textEdit_Infierno->setGeometry(QRect(70, 270, 391, 311));
        btnGanador = new QPushButton(tab_3);
        btnGanador->setObjectName(QString::fromUtf8("btnGanador"));
        btnGanador->setGeometry(QRect(630, 170, 101, 41));
        QFont font12;
        font12.setPointSize(12);
        btnGanador->setFont(font12);
        textEdit_Cielo = new QTextEdit(tab_3);
        textEdit_Cielo->setObjectName(QString::fromUtf8("textEdit_Cielo"));
        textEdit_Cielo->setGeometry(QRect(900, 270, 391, 311));
        label_34 = new QLabel(tab_3);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(130, 100, 331, 131));
        QFont font13;
        font13.setFamily(QString::fromUtf8("Microsoft Himalaya"));
        font13.setPointSize(72);
        font13.setStrikeOut(true);
        label_34->setFont(font13);
        label_34->setStyleSheet(QString::fromUtf8(""));
        label_35 = new QLabel(tab_3);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(1000, 110, 261, 91));
        QFont font14;
        font14.setFamily(QString::fromUtf8("Constantia"));
        font14.setPointSize(48);
        label_35->setFont(font14);
        label_35->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_36 = new QLabel(tab_3);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(590, 390, 181, 81));
        QFont font15;
        font15.setPointSize(18);
        label_36->setFont(font15);
        label_37 = new QLabel(tab_3);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(640, 320, 101, 41));
        label_37->setFont(font15);
        label_netoInfierno = new QLabel(tab_3);
        label_netoInfierno->setObjectName(QString::fromUtf8("label_netoInfierno"));
        label_netoInfierno->setGeometry(QRect(230, 230, 55, 16));
        QFont font16;
        font16.setPointSize(10);
        label_netoInfierno->setFont(font16);
        label_netoInfierno->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_netoCielo = new QLabel(tab_3);
        label_netoCielo->setObjectName(QString::fromUtf8("label_netoCielo"));
        label_netoCielo->setGeometry(QRect(1050, 220, 71, 20));
        label_netoCielo->setFont(font16);
        label_38 = new QLabel(tab_3);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(0, 0, 681, 881));
        label_39 = new QLabel(tab_3);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(680, 0, 741, 881));
        tabWidget->addTab(tab_3, QString());
        label_39->raise();
        label_38->raise();
        textEdit_Infierno->raise();
        btnGanador->raise();
        textEdit_Cielo->raise();
        label_34->raise();
        label_35->raise();
        label_36->raise();
        label_37->raise();
        label_netoInfierno->raise();
        label_netoCielo->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1430, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "   Cantidad de humanos a generar", nullptr));
        txtCant->setText(QCoreApplication::translate("MainWindow", "70", nullptr));
        btnGenerar->setText(QCoreApplication::translate("MainWindow", "Generar humanos", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "ID de la persona:", nullptr));
        txtBuscar->setText(QCoreApplication::translate("MainWindow", "124", nullptr));
        btnBuscar->setText(QCoreApplication::translate("MainWindow", "Generar archivo de informaci\303\263n", nullptr));
        btnSumarPecados->setText(QCoreApplication::translate("MainWindow", "Pecar y hacer buenas acciones", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#001b47;\">Mundo</span></p></body></html>", nullptr));
        btnPecados->setText(QCoreApplication::translate("MainWindow", "Pecados", nullptr));
        btnBuenasAcciones->setText(QCoreApplication::translate("MainWindow", "Buenas acciones", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt; color:#000000;\">Mapa de degraci\303\263n </span></p></body></html>", nullptr));
        lblOceania->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/oceania.png\"/></p><p align=\"center\"><span style=\" font-size:14pt;\">Ocean\303\255a</span></p></body></html>", nullptr));
        lblEuropa->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/europa.png\"/></p><p align=\"center\"><span style=\" font-size:14pt;\">Europa</span></p><p><br/></p></body></html>", nullptr));
        lblAfrica->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/africa.png\"/></p><p align=\"center\"><span style=\" font-size:14pt;\">\303\201frica</span></p></body></html>", nullptr));
        lblAsia->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/asia.png\"/></p><p align=\"center\"><span style=\" font-size:14pt;\">Asia</span></p></body></html>", nullptr));
        lblAmerica->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/america (1).png\"/></p><p align=\"center\"><span style=\" font-size:14pt;\">Am\303\251rica</span></p></body></html>", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Apellido:", nullptr));
        txtApellido->setText(QString());
        label_30->setText(QCoreApplication::translate("MainWindow", "Pa\303\255s:", nullptr));
        btnBuscarFamilia->setText(QCoreApplication::translate("MainWindow", "Generar archivo de informaci\303\263n", nullptr));
        btnMasPecadores->setText(QCoreApplication::translate("MainWindow", "10 pa\303\255ses m\303\241s pecadores", nullptr));
        btnMasBuenos->setText(QCoreApplication::translate("MainWindow", "10 pa\303\255ses m\303\241s buenos", nullptr));
        btnMenosPecadores->setText(QCoreApplication::translate("MainWindow", "5 pa\303\255ses menos pecadores", nullptr));
        btnMenosBuenos->setText(QCoreApplication::translate("MainWindow", "5 pa\303\255ses menos buenos", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">CONSULTAS</span></p><p><br/></p></body></html>", nullptr));
        rbInformacion->setText(QCoreApplication::translate("MainWindow", "Buscar familia y mostrar  informaci\303\263n", nullptr));
        rbPorcentajes->setText(QCoreApplication::translate("MainWindow", "Buscar familia y determinar porcentajes", nullptr));
        rbPecados->setText(QCoreApplication::translate("MainWindow", "Estado de pecados de la familia", nullptr));
        rbBuenasA->setText(QCoreApplication::translate("MainWindow", "Estado de buenas acciones de la familia", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">INFORMACI\303\223N DEL \303\201RBOL</span></p></body></html>", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "Buscar por Apellido", nullptr));
        rbP1->setText(QCoreApplication::translate("MainWindow", "Pecados", nullptr));
        rbB1->setText(QCoreApplication::translate("MainWindow", "Buenas acciones", nullptr));
        btn1->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "Buscar por continente", nullptr));
        rbP1_2->setText(QCoreApplication::translate("MainWindow", "Pecados", nullptr));
        rbB1_2->setText(QCoreApplication::translate("MainWindow", "Buenas acciones", nullptr));
        btn2->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "Buscar por pa\303\255s", nullptr));
        rbP1_3->setText(QCoreApplication::translate("MainWindow", "Pecados", nullptr));
        rbB1_3->setText(QCoreApplication::translate("MainWindow", "Buenas acciones", nullptr));
        btn3->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "Buscar por creencia", nullptr));
        rbP1_4->setText(QCoreApplication::translate("MainWindow", "Pecados", nullptr));
        rbB1_4->setText(QCoreApplication::translate("MainWindow", "Buenas acciones", nullptr));
        btn4->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "Buscar por profesi\303\263n", nullptr));
        rbP1_5->setText(QCoreApplication::translate("MainWindow", "Pecados", nullptr));
        rbB1_5->setText(QCoreApplication::translate("MainWindow", "Buenas acciones", nullptr));
        btn5->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Mundo", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/alaaa.png\"/></p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "INFIERNO", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", " Asmodeo", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "   Belfegor", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "    Belceb\303\272", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "     Sat\303\241n", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", " Abad\303\263n", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", " Lucifer", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Mamm\303\263n", nullptr));
        btnReporte->setText(QCoreApplication::translate("MainWindow", "Reporte", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/infierno.jpg\"/></p></body></html>", nullptr));
        btnCondenar->setText(QCoreApplication::translate("MainWindow", "Condenaci\303\263n", nullptr));
        label_32->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Infierno", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/cieloo.jpg\"/></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Cielo", nullptr));
        btnCieloSalvacion->setText(QCoreApplication::translate("MainWindow", "Salvaci\303\263n", nullptr));
        btnCieloReporte->setText(QCoreApplication::translate("MainWindow", "Reporte", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/angelviolin.png\"/></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Su funci\303\263n es despertar la inteligencia de los seres humanos,\n"
"tocando sus vidas a trav\303\251s de la luz de Dios.", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Querubines", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Son los que est\303\241n al lado del trono de Dios,\n"
"trabajan con la energ\303\255a divina y estar\303\255an encargados de\n"
"despertar el amor en todos los seres humanos", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Serafines", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Los tronos", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Proclaman la verdad y son los llamados\n"
"constructores. Se relacionan directamente con las acciones\n"
"de los hombres llevando un registro de los Karmas.", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Los \303\201ngeles", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Instructores de los seres humanos, son los\n"
"mensajeros de Dios.", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Participantes", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\342\200\242Miguel\n"
"\342\200\242 Nuriel\n"
"\342\200\242 Aniel\n"
"\342\200\242 Rafael\n"
"\342\200\242 Gabriel\n"
"\342\200\242 Shamsiel\n"
"\342\200\242 Raguel\n"
"\342\200\242 UrielAzrael\n"
"\342\200\242 Sariel", nullptr));
        btnCieloGeneracion->setText(QCoreApplication::translate("MainWindow", "Generaci\303\263n", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Cielo), QCoreApplication::translate("MainWindow", "Cielo", nullptr));
        btnGanador->setText(QCoreApplication::translate("MainWindow", "Ganador", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "Infierno", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "Cielo", nullptr));
        label_36->setText(QString());
        label_37->setText(QCoreApplication::translate("MainWindow", "Ganador:", nullptr));
        label_netoInfierno->setText(QCoreApplication::translate("MainWindow", "NETO", nullptr));
        label_netoCielo->setText(QCoreApplication::translate("MainWindow", "NETO", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/87b1f6ab429fb46c70d4588f3f792cd4.jpg\"/></p></body></html>", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/cieloo.jpg\"/></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Ganador", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
