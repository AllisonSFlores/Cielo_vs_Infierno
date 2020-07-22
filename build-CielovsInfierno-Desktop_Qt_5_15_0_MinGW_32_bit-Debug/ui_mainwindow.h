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
#include <QtWidgets/QLabel>
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
    QPushButton *pushButton_3;
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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1900, 951);
        MainWindow->setMinimumSize(QSize(1900, 900));
        MainWindow->setMaximumSize(QSize(1900, 1000));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagenes/devil.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMaximumSize(QSize(1900, 900));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1900, 921));
        tabWidget->setMinimumSize(QSize(1900, 900));
        tabWidget->setMaximumSize(QSize(1900, 1000));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setMinimumSize(QSize(1900, 990));
        tab->setMaximumSize(QSize(1900, 990));
        verticalLayoutWidget_3 = new QWidget(tab);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(400, 240, 160, 218));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(verticalLayoutWidget_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_3->addWidget(pushButton_3);

        tabWidget->addTab(tab, QString());
        Cielo = new QWidget();
        Cielo->setObjectName(QString::fromUtf8("Cielo"));
        label = new QLabel(Cielo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1900, 1000));
        label->setMinimumSize(QSize(1900, 1000));
        label->setMaximumSize(QSize(1900, 1000));
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(true);
        label->setMargin(-2);
        label->setOpenExternalLinks(false);
        label_3 = new QLabel(Cielo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 160, 421, 311));
        QFont font;
        font.setFamily(QString::fromUtf8("Constantia"));
        font.setPointSize(72);
        font.setItalic(true);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        verticalLayoutWidget = new QWidget(Cielo);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(820, 370, 207, 148));
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
        label_4->setGeometry(QRect(440, 250, 321, 461));
        label_8 = new QLabel(Cielo);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(1270, 270, 504, 96));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Constantia"));
        font2.setPointSize(12);
        font2.setItalic(true);
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7 = new QLabel(Cielo);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(1190, 210, 148, 64));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Constantia"));
        font3.setPointSize(18);
        font3.setItalic(true);
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_6 = new QLabel(Cielo);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(1270, 130, 537, 72));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5 = new QLabel(Cielo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1200, 60, 115, 64));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_9 = new QLabel(Cielo);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(1190, 390, 161, 51));
        label_9->setFont(font3);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_10 = new QLabel(Cielo);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(1270, 460, 501, 81));
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_11 = new QLabel(Cielo);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(1190, 590, 171, 41));
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_12 = new QLabel(Cielo);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(1270, 630, 491, 111));
        label_12->setFont(font2);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        verticalLayoutWidget_2 = new QWidget(Cielo);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(90, 390, 170, 262));
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
        line->setGeometry(QRect(1160, 70, 16, 681));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        tabWidget->addTab(Cielo, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1900, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Generaci\303\263n", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Inicio", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/cieloo.jpg\"/></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Cielo", nullptr));
        btnCieloGeneracion->setText(QCoreApplication::translate("MainWindow", "Generaci\303\263n", nullptr));
        btnCieloSalvacion->setText(QCoreApplication::translate("MainWindow", "Salvaci\303\263n", nullptr));
        btnCieloReporte->setText(QCoreApplication::translate("MainWindow", "Reporte", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/angelviolin.png\"/></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Guardianes de la luz y las estrellas, pero\n"
"tambi\303\251n custodian todo aquello que se les encargue. Su\n"
"funci\303\263n es despertar la inteligencia de los seres humanos,\n"
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
"mensajeros de Dios y los m\303\241s conocidos por su directa\n"
"relaci\303\263n con los seres humanos, ya que estar\303\255an siempre\n"
"entre nosotros.", nullptr));
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
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Infierno", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
