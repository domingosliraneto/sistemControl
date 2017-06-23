/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *HostLabel;
    QComboBox *HostInput;
    QLabel *PortaLabel;
    QLineEdit *PortaInput;
    QPushButton *Desconectar;
    QPushButton *Conectar;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QWidget *tab_4;
    QWidget *sinalControle;
    QWidget *SinalSaida;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLineEdit *Kp;
    QLabel *label_2;
    QLineEdit *Ki;
    QLabel *label_3;
    QLineEdit *Kd;
    QLineEdit *ref;
    QLabel *label_5;
    QPushButton *controle;
    QWidget *tab_5;
    QWidget *sinalControle_2;
    QWidget *SinalSaida_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_4;
    QLabel *label_7;
    QLineEdit *NivelMin;
    QLabel *valorPWM;
    QLabel *label_4;
    QLineEdit *NivelMax;
    QLabel *label_6;
    QScrollBar *horizontalScrollBar;
    QPushButton *identificacao;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1099, 451);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(tab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 120));
        widget->setMaximumSize(QSize(16777215, 150));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        HostLabel = new QLabel(widget);
        HostLabel->setObjectName(QStringLiteral("HostLabel"));
        HostLabel->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(HostLabel);

        HostInput = new QComboBox(widget);
        HostInput->setObjectName(QStringLiteral("HostInput"));
        HostInput->setMinimumSize(QSize(150, 100));
        HostInput->setEditable(true);

        horizontalLayout_2->addWidget(HostInput);

        PortaLabel = new QLabel(widget);
        PortaLabel->setObjectName(QStringLiteral("PortaLabel"));
        PortaLabel->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(PortaLabel);

        PortaInput = new QLineEdit(widget);
        PortaInput->setObjectName(QStringLiteral("PortaInput"));
        PortaInput->setMinimumSize(QSize(130, 100));
        PortaInput->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_2->addWidget(PortaInput);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        Desconectar = new QPushButton(tab);
        Desconectar->setObjectName(QStringLiteral("Desconectar"));
        Desconectar->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(Desconectar, 5, 0, 1, 1);

        Conectar = new QPushButton(tab);
        Conectar->setObjectName(QStringLiteral("Conectar"));

        gridLayout->addWidget(Conectar, 4, 0, 1, 1);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 3, 0, 1, 1);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        sinalControle = new QWidget(tab_4);
        sinalControle->setObjectName(QStringLiteral("sinalControle"));
        sinalControle->setGeometry(QRect(0, -1, 531, 301));
        SinalSaida = new QWidget(tab_4);
        SinalSaida->setObjectName(QStringLiteral("SinalSaida"));
        SinalSaida->setGeometry(QRect(530, 0, 541, 301));
        layoutWidget = new QWidget(tab_4);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 310, 781, 91));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        Kp = new QLineEdit(layoutWidget);
        Kp->setObjectName(QStringLiteral("Kp"));

        gridLayout_3->addWidget(Kp, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 2, 1, 1);

        Ki = new QLineEdit(layoutWidget);
        Ki->setObjectName(QStringLiteral("Ki"));

        gridLayout_3->addWidget(Ki, 0, 3, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 0, 4, 1, 1);

        Kd = new QLineEdit(layoutWidget);
        Kd->setObjectName(QStringLiteral("Kd"));

        gridLayout_3->addWidget(Kd, 0, 5, 1, 1);

        ref = new QLineEdit(layoutWidget);
        ref->setObjectName(QStringLiteral("ref"));

        gridLayout_3->addWidget(ref, 1, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        controle = new QPushButton(layoutWidget);
        controle->setObjectName(QStringLiteral("controle"));

        gridLayout_3->addWidget(controle, 1, 3, 1, 3);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        sinalControle_2 = new QWidget(tab_5);
        sinalControle_2->setObjectName(QStringLiteral("sinalControle_2"));
        sinalControle_2->setGeometry(QRect(0, 0, 551, 301));
        SinalSaida_2 = new QWidget(tab_5);
        SinalSaida_2->setObjectName(QStringLiteral("SinalSaida_2"));
        SinalSaida_2->setGeometry(QRect(550, 0, 521, 301));
        layoutWidget1 = new QWidget(tab_5);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 320, 771, 81));
        gridLayout_4 = new QGridLayout(layoutWidget1);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_4->addWidget(label_7, 1, 0, 1, 1);

        NivelMin = new QLineEdit(layoutWidget1);
        NivelMin->setObjectName(QStringLiteral("NivelMin"));

        gridLayout_4->addWidget(NivelMin, 1, 1, 1, 3);

        valorPWM = new QLabel(layoutWidget1);
        valorPWM->setObjectName(QStringLiteral("valorPWM"));

        gridLayout_4->addWidget(valorPWM, 3, 1, 1, 1);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_4->addWidget(label_4, 3, 0, 1, 1);

        NivelMax = new QLineEdit(layoutWidget1);
        NivelMax->setObjectName(QStringLiteral("NivelMax"));

        gridLayout_4->addWidget(NivelMax, 0, 1, 1, 3);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        horizontalScrollBar = new QScrollBar(layoutWidget1);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setMinimum(1);
        horizontalScrollBar->setMaximum(255);
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalScrollBar, 3, 2, 1, 4);

        identificacao = new QPushButton(layoutWidget1);
        identificacao->setObjectName(QStringLiteral("identificacao"));

        gridLayout_4->addWidget(identificacao, 0, 4, 2, 2);

        tabWidget->addTab(tab_5, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Controle De N\303\255vel", Q_NULLPTR));
        HostLabel->setText(QApplication::translate("MainWindow", "Host", Q_NULLPTR));
        HostInput->clear();
        HostInput->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "192.168.43.44", Q_NULLPTR)
         << QApplication::translate("MainWindow", "10.0.0.101", Q_NULLPTR)
        );
        PortaLabel->setText(QApplication::translate("MainWindow", "Porta", Q_NULLPTR));
        PortaInput->setText(QApplication::translate("MainWindow", "4000", Q_NULLPTR));
        Desconectar->setText(QApplication::translate("MainWindow", "Desconectar", Q_NULLPTR));
        Conectar->setText(QApplication::translate("MainWindow", "Conectar", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "WRITE", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Conex\303\243o", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "KP", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "KI", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "KD", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Referencia", Q_NULLPTR));
        controle->setText(QApplication::translate("MainWindow", "Iniciar Controle", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Controle", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "N\303\255vel Minimo", Q_NULLPTR));
        NivelMin->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        valorPWM->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Ajuste do Sinal de PWM =", Q_NULLPTR));
        NivelMax->setText(QApplication::translate("MainWindow", "20", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Nivel M\303\241ximo", Q_NULLPTR));
        identificacao->setText(QApplication::translate("MainWindow", "Iniciar A Aquisi\303\247\303\243o de Informa\303\247\303\265es", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Identifica\303\247\303\243o", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
