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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
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
    QLineEdit *txtBuscar;
    QPushButton *btnBuscar;
    QLabel *label_25;
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
    QWidget *tab_2;
    QLabel *label_15;
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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1400, 950);
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
        tabWidget->setGeometry(QRect(0, 0, 1500, 900));
        tabWidget->setMinimumSize(QSize(1400, 900));
        tabWidget->setMaximumSize(QSize(1900, 1000));
        tabWidget->setCursor(QCursor(Qt::ArrowCursor));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setMinimumSize(QSize(1500, 990));
        tab->setMaximumSize(QSize(1900, 990));
        verticalLayoutWidget_3 = new QWidget(tab);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(30, 70, 181, 111));
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
        label_2->setGeometry(QRect(40, 43, 179, 21));
        verticalLayoutWidget_4 = new QWidget(tab);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(240, 70, 181, 111));
        VL2 = new QVBoxLayout(verticalLayoutWidget_4);
        VL2->setObjectName(QString::fromUtf8("VL2"));
        VL2->setContentsMargins(0, 0, 0, 0);
        txtBuscar = new QLineEdit(verticalLayoutWidget_4);
        txtBuscar->setObjectName(QString::fromUtf8("txtBuscar"));

        VL2->addWidget(txtBuscar);

        btnBuscar = new QPushButton(verticalLayoutWidget_4);
        btnBuscar->setObjectName(QString::fromUtf8("btnBuscar"));
        btnBuscar->setCursor(QCursor(Qt::PointingHandCursor));

        VL2->addWidget(btnBuscar);

        label_25 = new QLabel(tab);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(240, 40, 179, 21));
        tabWidget->addTab(tab, QString());
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
        label_3->setGeometry(QRect(20, 110, 311, 181));
        QFont font;
        font.setFamily(QString::fromUtf8("Constantia"));
        font.setPointSize(72);
        font.setItalic(true);
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
        QFont font1;
        font1.setFamily(QString::fromUtf8("Constantia"));
        font1.setPointSize(14);
        font1.setItalic(true);
        btnCieloGeneracion->setFont(font1);
        btnCieloGeneracion->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(btnCieloGeneracion);

        btnCieloSalvacion = new QPushButton(verticalLayoutWidget);
        btnCieloSalvacion->setObjectName(QString::fromUtf8("btnCieloSalvacion"));
        btnCieloSalvacion->setFont(font1);
        btnCieloSalvacion->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(btnCieloSalvacion);

        btnCieloReporte = new QPushButton(verticalLayoutWidget);
        btnCieloReporte->setObjectName(QString::fromUtf8("btnCieloReporte"));
        btnCieloReporte->setFont(font1);
        btnCieloReporte->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(btnCieloReporte);

        label_4 = new QLabel(Cielo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(220, 280, 291, 401));
        label_8 = new QLabel(Cielo);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(860, 270, 504, 96));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Constantia"));
        font2.setPointSize(12);
        font2.setItalic(true);
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7 = new QLabel(Cielo);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(830, 210, 148, 64));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Constantia"));
        font3.setPointSize(18);
        font3.setItalic(true);
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_6 = new QLabel(Cielo);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(870, 120, 537, 72));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5 = new QLabel(Cielo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(840, 50, 115, 64));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_9 = new QLabel(Cielo);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(830, 390, 161, 51));
        label_9->setFont(font3);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_10 = new QLabel(Cielo);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(860, 450, 501, 81));
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_11 = new QLabel(Cielo);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(830, 580, 171, 41));
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_12 = new QLabel(Cielo);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(830, 640, 491, 111));
        label_12->setFont(font2);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        verticalLayoutWidget_2 = new QWidget(Cielo);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(60, 270, 170, 262));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(verticalLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font3);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_13);

        label_14 = new QLabel(verticalLayoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font2);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_14);

        line = new QFrame(Cielo);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(790, 90, 16, 681));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        tabWidget->addTab(Cielo, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(0, -10, 1361, 881));
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(199, 132, 105);\n"
"background-color: rgb(99, 175, 255);"));
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
        horizontalLayoutWidget->setGeometry(QRect(50, 730, 1301, 80));
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

        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(630, 320, 171, 41));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Microsoft Himalaya"));
        font7.setPointSize(22);
        font7.setStrikeOut(false);
        pushButton->setFont(font7);
        pushButton->setCursor(QCursor(Qt::ForbiddenCursor));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(181, 0, 0);"));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(630, 420, 171, 41));
        pushButton_2->setFont(font7);
        pushButton_2->setCursor(QCursor(Qt::ForbiddenCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(181, 0, 0);"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1400, 21));
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
        txtCant->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        btnGenerar->setText(QCoreApplication::translate("MainWindow", "Generar humanos", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "   Cantidad de humanos a generar", nullptr));
        txtBuscar->setText(QCoreApplication::translate("MainWindow", "365214", nullptr));
        btnBuscar->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Buscar persona por id", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Mundo", nullptr));
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
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/87b1f6ab429fb46c70d4588f3f792cd4.jpg\"/></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/alaaa.png\"/></p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "INFIERNO", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", " Asmodeo", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "   Belfegor", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "    Belceb\303\272", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "     Sat\303\241n", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", " Abad\303\263n", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", " Lucifer", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Mamm\303\263n", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Condenaci\303\263n", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Reporte", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Infierno", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
