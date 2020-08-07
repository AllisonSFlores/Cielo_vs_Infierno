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
    QLineEdit *txtCant;
    QPushButton *btnGenerar;
    QLabel *label_2;
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
    QLabel *lblAsia;
    QLabel *lblAfrica;
    QLabel *lblEuropa;
    QLabel *lblOceania;
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
    QWidget *Cielo;
    QLabel *label;
    QLabel *label_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnCieloGeneracion;
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
        tabWidget->setGeometry(QRect(20, -20, 1500, 941));
        tabWidget->setMinimumSize(QSize(1400, 900));
        tabWidget->setMaximumSize(QSize(1900, 1000));
        tabWidget->setCursor(QCursor(Qt::ArrowCursor));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setMinimumSize(QSize(1500, 990));
        tab->setMaximumSize(QSize(1900, 990));
        verticalLayoutWidget_3 = new QWidget(tab);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(50, 130, 211, 111));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        txtCant = new QLineEdit(verticalLayoutWidget_3);
        txtCant->setObjectName(QString::fromUtf8("txtCant"));

        verticalLayout_3->addWidget(txtCant);

        btnGenerar = new QPushButton(verticalLayoutWidget_3);
        btnGenerar->setObjectName(QString::fromUtf8("btnGenerar"));
        btnGenerar->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_3->addWidget(btnGenerar);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 110, 211, 21));
        verticalLayoutWidget_4 = new QWidget(tab);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(50, 310, 211, 91));
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
        btnBuscar->setCursor(QCursor(Qt::PointingHandCursor));

        VL2->addWidget(btnBuscar);

        btnSumarPecados = new QPushButton(tab);
        btnSumarPecados->setObjectName(QString::fromUtf8("btnSumarPecados"));
        btnSumarPecados->setGeometry(QRect(280, 140, 211, 31));
        label_26 = new QLabel(tab);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(50, 0, 381, 101));
        QFont font;
        font.setFamily(QString::fromUtf8("Constantia"));
        font.setPointSize(72);
        font.setItalic(true);
        label_26->setFont(font);
        label_26->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btnPecados = new QPushButton(tab);
        btnPecados->setObjectName(QString::fromUtf8("btnPecados"));
        btnPecados->setGeometry(QRect(950, 130, 151, 41));
        btnBuenasAcciones = new QPushButton(tab);
        btnBuenasAcciones->setObjectName(QString::fromUtf8("btnBuenasAcciones"));
        btnBuenasAcciones->setGeometry(QRect(1140, 130, 151, 41));
        label_27 = new QLabel(tab);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(960, 20, 341, 51));
        label_27->setFont(font);
        label_27->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(860, 240, 528, 462));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lblAsia = new QLabel(gridLayoutWidget);
        lblAsia->setObjectName(QString::fromUtf8("lblAsia"));

        gridLayout->addWidget(lblAsia, 0, 2, 1, 1);

        lblAfrica = new QLabel(gridLayoutWidget);
        lblAfrica->setObjectName(QString::fromUtf8("lblAfrica"));

        gridLayout->addWidget(lblAfrica, 1, 1, 1, 1);

        lblEuropa = new QLabel(gridLayoutWidget);
        lblEuropa->setObjectName(QString::fromUtf8("lblEuropa"));

        gridLayout->addWidget(lblEuropa, 0, 1, 1, 1);

        lblOceania = new QLabel(gridLayoutWidget);
        lblOceania->setObjectName(QString::fromUtf8("lblOceania"));

        gridLayout->addWidget(lblOceania, 1, 2, 1, 1);

        lblAmerica = new QLabel(gridLayoutWidget);
        lblAmerica->setObjectName(QString::fromUtf8("lblAmerica"));

        gridLayout->addWidget(lblAmerica, 0, 0, 2, 1);

        txtEdit = new QTextEdit(tab);
        txtEdit->setObjectName(QString::fromUtf8("txtEdit"));
        txtEdit->setGeometry(QRect(660, 370, 171, 331));
        verticalLayoutWidget_6 = new QWidget(tab);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(50, 470, 211, 134));
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

        VL2_3->addWidget(btnBuscarFamilia);

        verticalLayoutWidget_7 = new QWidget(tab);
        verticalLayoutWidget_7->setObjectName(QString::fromUtf8("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(660, 131, 171, 221));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        btnMasPecadores = new QPushButton(verticalLayoutWidget_7);
        btnMasPecadores->setObjectName(QString::fromUtf8("btnMasPecadores"));

        verticalLayout_4->addWidget(btnMasPecadores);

        btnMasBuenos = new QPushButton(verticalLayoutWidget_7);
        btnMasBuenos->setObjectName(QString::fromUtf8("btnMasBuenos"));

        verticalLayout_4->addWidget(btnMasBuenos);

        btnMenosPecadores = new QPushButton(verticalLayoutWidget_7);
        btnMenosPecadores->setObjectName(QString::fromUtf8("btnMenosPecadores"));

        verticalLayout_4->addWidget(btnMenosPecadores);

        btnMenosBuenos = new QPushButton(verticalLayoutWidget_7);
        btnMenosBuenos->setObjectName(QString::fromUtf8("btnMenosBuenos"));

        verticalLayout_4->addWidget(btnMenosBuenos);

        label_31 = new QLabel(tab);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(710, 90, 81, 21));
        verticalLayoutWidget_9 = new QWidget(tab);
        verticalLayoutWidget_9->setObjectName(QString::fromUtf8("verticalLayoutWidget_9"));
        verticalLayoutWidget_9->setGeometry(QRect(50, 420, 214, 51));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_9);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        rbInformacion = new QRadioButton(verticalLayoutWidget_9);
        rbInformacion->setObjectName(QString::fromUtf8("rbInformacion"));

        verticalLayout_5->addWidget(rbInformacion);

        rbPorcentajes = new QRadioButton(verticalLayoutWidget_9);
        rbPorcentajes->setObjectName(QString::fromUtf8("rbPorcentajes"));

        verticalLayout_5->addWidget(rbPorcentajes);

        verticalLayoutWidget_8 = new QWidget(tab);
        verticalLayoutWidget_8->setObjectName(QString::fromUtf8("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(50, 260, 214, 51));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        rbPecados = new QRadioButton(verticalLayoutWidget_8);
        rbPecados->setObjectName(QString::fromUtf8("rbPecados"));

        verticalLayout_6->addWidget(rbPecados);

        rbBuenasA = new QRadioButton(verticalLayoutWidget_8);
        rbBuenasA->setObjectName(QString::fromUtf8("rbBuenasA"));

        verticalLayout_6->addWidget(rbBuenasA);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(390, 160, 621, 501));
        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(110, 60, 391, 151));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft Himalaya"));
        font1.setPointSize(72);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        font1.setStrikeOut(true);
        label_17->setFont(font1);
        horizontalLayoutWidget = new QWidget(tab_2);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 730, 1301, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(horizontalLayoutWidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft Himalaya"));
        font2.setPointSize(36);
        label_24->setFont(font2);
        label_24->setStyleSheet(QString::fromUtf8("color:rgb(158, 94, 72)"));

        horizontalLayout->addWidget(label_24);

        label_23 = new QLabel(horizontalLayoutWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font2);
        label_23->setStyleSheet(QString::fromUtf8("color:rgb(158, 94, 72)"));

        horizontalLayout->addWidget(label_23);

        label_19 = new QLabel(horizontalLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft Himalaya"));
        font3.setPointSize(36);
        font3.setStrikeOut(false);
        label_19->setFont(font3);
        label_19->setStyleSheet(QString::fromUtf8("color:rgb(158, 94, 72)"));

        horizontalLayout->addWidget(label_19);

        label_20 = new QLabel(horizontalLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font2);
        label_20->setStyleSheet(QString::fromUtf8("color:rgb(158, 94, 72)"));

        horizontalLayout->addWidget(label_20);

        label_21 = new QLabel(horizontalLayoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font2);
        label_21->setStyleSheet(QString::fromUtf8("color:rgb(158, 94, 72)"));

        horizontalLayout->addWidget(label_21);

        label_18 = new QLabel(horizontalLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font2);
        label_18->setStyleSheet(QString::fromUtf8("color:rgb(158, 94, 72)"));

        horizontalLayout->addWidget(label_18);

        label_22 = new QLabel(horizontalLayoutWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font2);
        label_22->setStyleSheet(QString::fromUtf8("color:rgb(158, 94, 72)"));

        horizontalLayout->addWidget(label_22);

        btnReporte = new QPushButton(tab_2);
        btnReporte->setObjectName(QString::fromUtf8("btnReporte"));
        btnReporte->setGeometry(QRect(630, 420, 171, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Microsoft Himalaya"));
        font4.setPointSize(22);
        font4.setStrikeOut(false);
        btnReporte->setFont(font4);
        btnReporte->setCursor(QCursor(Qt::ForbiddenCursor));
        btnReporte->setStyleSheet(QString::fromUtf8("background-color: rgb(181, 0, 0);"));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(0, 0, 1391, 881));
        btnCondenar = new QPushButton(tab_2);
        btnCondenar->setObjectName(QString::fromUtf8("btnCondenar"));
        btnCondenar->setGeometry(QRect(630, 370, 171, 41));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Microsoft Himalaya"));
        font5.setPointSize(22);
        btnCondenar->setFont(font5);
        btnCondenar->setCursor(QCursor(Qt::ForbiddenCursor));
        btnCondenar->setStyleSheet(QString::fromUtf8("background-color: rgb(181, 0, 0);"));
        tabWidget->addTab(tab_2, QString());
        label_15->raise();
        label_16->raise();
        label_17->raise();
        horizontalLayoutWidget->raise();
        btnReporte->raise();
        btnCondenar->raise();
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
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        verticalLayoutWidget = new QWidget(Cielo);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(510, 390, 207, 148));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnCieloGeneracion = new QPushButton(verticalLayoutWidget);
        btnCieloGeneracion->setObjectName(QString::fromUtf8("btnCieloGeneracion"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Constantia"));
        font6.setPointSize(14);
        font6.setItalic(true);
        btnCieloGeneracion->setFont(font6);
        btnCieloGeneracion->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(btnCieloGeneracion);

        btnCieloSalvacion = new QPushButton(verticalLayoutWidget);
        btnCieloSalvacion->setObjectName(QString::fromUtf8("btnCieloSalvacion"));
        btnCieloSalvacion->setFont(font6);
        btnCieloSalvacion->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(btnCieloSalvacion);

        btnCieloReporte = new QPushButton(verticalLayoutWidget);
        btnCieloReporte->setObjectName(QString::fromUtf8("btnCieloReporte"));
        btnCieloReporte->setFont(font6);
        btnCieloReporte->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(btnCieloReporte);

        label_4 = new QLabel(Cielo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(220, 280, 291, 401));
        label_8 = new QLabel(Cielo);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(860, 270, 504, 96));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Constantia"));
        font7.setPointSize(12);
        font7.setItalic(true);
        label_8->setFont(font7);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7 = new QLabel(Cielo);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(830, 210, 148, 64));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Constantia"));
        font8.setPointSize(18);
        font8.setItalic(true);
        label_7->setFont(font8);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_6 = new QLabel(Cielo);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(870, 120, 537, 72));
        label_6->setFont(font7);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5 = new QLabel(Cielo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(840, 50, 115, 64));
        label_5->setFont(font8);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_9 = new QLabel(Cielo);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(830, 390, 161, 51));
        label_9->setFont(font8);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_10 = new QLabel(Cielo);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(860, 450, 501, 81));
        label_10->setFont(font7);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_11 = new QLabel(Cielo);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(830, 580, 171, 41));
        label_11->setFont(font8);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_12 = new QLabel(Cielo);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(830, 640, 491, 111));
        label_12->setFont(font7);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        verticalLayoutWidget_2 = new QWidget(Cielo);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(60, 270, 170, 262));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(verticalLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font8);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_13);

        label_14 = new QLabel(verticalLayoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font7);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_14);

        line = new QFrame(Cielo);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(790, 90, 16, 681));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        tabWidget->addTab(Cielo, QString());
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
        txtCant->setText(QCoreApplication::translate("MainWindow", "70", nullptr));
        btnGenerar->setText(QCoreApplication::translate("MainWindow", "Generar humanos", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "   Cantidad de humanos a generar", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "ID de la persona:", nullptr));
        txtBuscar->setText(QCoreApplication::translate("MainWindow", "124", nullptr));
        btnBuscar->setText(QCoreApplication::translate("MainWindow", "Generar archivo de informaci\303\263n", nullptr));
        btnSumarPecados->setText(QCoreApplication::translate("MainWindow", "Pecar y hacer buenas acciones", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#001b47;\">Mundo</span></p></body></html>", nullptr));
        btnPecados->setText(QCoreApplication::translate("MainWindow", "Pecados", nullptr));
        btnBuenasAcciones->setText(QCoreApplication::translate("MainWindow", "Buenas acciones", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt; color:#001b47;\">Mapa de degraci\303\263n </span></p></body></html>", nullptr));
        lblAsia->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/asia.png\"/></p><p align=\"center\"><span style=\" font-size:14pt;\">Asia</span></p></body></html>", nullptr));
        lblAfrica->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/africa.png\"/></p><p align=\"center\"><span style=\" font-size:14pt;\">\303\201frica</span></p></body></html>", nullptr));
        lblEuropa->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/europa.png\"/></p><p align=\"center\"><span style=\" font-size:14pt;\">Europa</span></p><p><br/></p></body></html>", nullptr));
        lblOceania->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/oceania.png\"/></p><p align=\"center\"><span style=\" font-size:14pt;\">Ocean\303\255a</span></p></body></html>", nullptr));
        lblAmerica->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/america (1).png\"/></p><p align=\"center\"><span style=\" font-size:14pt;\">Am\303\251rica</span></p></body></html>", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Apellido:", nullptr));
        txtApellido->setText(QString());
        label_30->setText(QCoreApplication::translate("MainWindow", "Pa\303\255s:", nullptr));
        btnBuscarFamilia->setText(QCoreApplication::translate("MainWindow", "Generar archivo de informaci\303\263n", nullptr));
        btnMasPecadores->setText(QCoreApplication::translate("MainWindow", "10 pa\303\255ses m\303\241s pecadores", nullptr));
        btnMasBuenos->setText(QCoreApplication::translate("MainWindow", "10 pa\303\255ses m\303\241s buenos", nullptr));
        btnMenosPecadores->setText(QCoreApplication::translate("MainWindow", "5 pa\303\255ses menos pecadores", nullptr));
        btnMenosBuenos->setText(QCoreApplication::translate("MainWindow", "5 pa\303\255ses menos buenos", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "CONSULTAS", nullptr));
        rbInformacion->setText(QCoreApplication::translate("MainWindow", "Buscar familia y mostrar  informaci\303\263n", nullptr));
        rbPorcentajes->setText(QCoreApplication::translate("MainWindow", "Buscar familia y determinar porcentajes", nullptr));
        rbPecados->setText(QCoreApplication::translate("MainWindow", "Estado de pecados de la familia", nullptr));
        rbBuenasA->setText(QCoreApplication::translate("MainWindow", "Estado de buenas acciones de la familia", nullptr));
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
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Infierno", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/cieloo.jpg\"/></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Cielo", nullptr));
        btnCieloGeneracion->setText(QCoreApplication::translate("MainWindow", "Generaci\303\263n", nullptr));
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
        tabWidget->setTabText(tabWidget->indexOf(Cielo), QCoreApplication::translate("MainWindow", "Cielo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
