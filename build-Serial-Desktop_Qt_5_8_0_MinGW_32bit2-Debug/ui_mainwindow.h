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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *PortLineEdit;
    QPushButton *ConnectPushButton;
    QPushButton *DisconnectPushButton;
    QPushButton *ClearPushButton;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *SendLineEdit;
    QPushButton *SendPushButton;
    QWidget *tab_2;
    QWidget *widSINAL;
    QWidget *widPWM;
    QWidget *widERRO;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QProgressBar *progressBar;
    QLabel *label_10;
    QWidget *widget;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QLineEdit *kp;
    QLineEdit *ki;
    QLineEdit *kd;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QFrame *line_7;
    QWidget *widERRO_3;
    QLabel *label_17;
    QWidget *tab_3;
    QFrame *line_4;
    QWidget *widERRO_2;
    QLabel *label_11;
    QFrame *line_5;
    QProgressBar *progressBar_2;
    QLabel *label_12;
    QWidget *widSINAL_2;
    QFrame *line_6;
    QWidget *widPWM_2;
    QLabel *label_13;
    QPushButton *pushButton_3;
    QSlider *horizontalSlider;
    QLabel *label_18;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QLineEdit *ErroLineEdit;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QLineEdit *SinalLineEdit;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QLineEdit *PWMLineEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QLineEdit *TempLineEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QLineEdit *TempoLineEdit;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1365, 731);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 1341, 601));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 1171, 311));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        PortLineEdit = new QLineEdit(layoutWidget);
        PortLineEdit->setObjectName(QStringLiteral("PortLineEdit"));

        horizontalLayout->addWidget(PortLineEdit);

        ConnectPushButton = new QPushButton(layoutWidget);
        ConnectPushButton->setObjectName(QStringLiteral("ConnectPushButton"));

        horizontalLayout->addWidget(ConnectPushButton);

        DisconnectPushButton = new QPushButton(layoutWidget);
        DisconnectPushButton->setObjectName(QStringLiteral("DisconnectPushButton"));

        horizontalLayout->addWidget(DisconnectPushButton);

        ClearPushButton = new QPushButton(layoutWidget);
        ClearPushButton->setObjectName(QStringLiteral("ClearPushButton"));

        horizontalLayout->addWidget(ClearPushButton);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        SendLineEdit = new QLineEdit(layoutWidget);
        SendLineEdit->setObjectName(QStringLiteral("SendLineEdit"));

        horizontalLayout_2->addWidget(SendLineEdit);

        SendPushButton = new QPushButton(layoutWidget);
        SendPushButton->setObjectName(QStringLiteral("SendPushButton"));

        horizontalLayout_2->addWidget(SendPushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        widSINAL = new QWidget(tab_2);
        widSINAL->setObjectName(QStringLiteral("widSINAL"));
        widSINAL->setGeometry(QRect(10, 40, 531, 221));
        widPWM = new QWidget(tab_2);
        widPWM->setObjectName(QStringLiteral("widPWM"));
        widPWM->setGeometry(QRect(550, 40, 531, 221));
        widERRO = new QWidget(tab_2);
        widERRO->setObjectName(QStringLiteral("widERRO"));
        widERRO->setEnabled(true);
        widERRO->setGeometry(QRect(550, 290, 531, 211));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(840, 20, 31, 16));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(210, 270, 51, 16));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 20, 31, 16));
        progressBar = new QProgressBar(tab_2);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(1090, 40, 241, 461));
        progressBar->setValue(24);
        progressBar->setOrientation(Qt::Vertical);
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(1200, 20, 31, 16));
        widget = new QWidget(tab_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 510, 1361, 71));
        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 30, 1321, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        kp = new QLineEdit(layoutWidget1);
        kp->setObjectName(QStringLiteral("kp"));

        horizontalLayout_3->addWidget(kp);

        ki = new QLineEdit(layoutWidget1);
        ki->setObjectName(QStringLiteral("ki"));

        horizontalLayout_3->addWidget(ki);

        kd = new QLineEdit(layoutWidget1);
        kd->setObjectName(QStringLiteral("kd"));

        horizontalLayout_3->addWidget(kd);

        label_14 = new QLabel(widget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(300, 10, 16, 16));
        label_15 = new QLabel(widget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(720, 10, 16, 16));
        label_16 = new QLabel(widget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(1140, 10, 16, 16));
        line_7 = new QFrame(tab_2);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(0, 500, 1341, 20));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        widERRO_3 = new QWidget(tab_2);
        widERRO_3->setObjectName(QStringLiteral("widERRO_3"));
        widERRO_3->setEnabled(true);
        widERRO_3->setGeometry(QRect(10, 290, 531, 211));
        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(850, 270, 71, 16));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        line_4 = new QFrame(tab_3);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(930, 10, 20, 351));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        widERRO_2 = new QWidget(tab_3);
        widERRO_2->setObjectName(QStringLiteral("widERRO_2"));
        widERRO_2->setEnabled(true);
        widERRO_2->setGeometry(QRect(640, 50, 281, 301));
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(1060, 20, 31, 16));
        line_5 = new QFrame(tab_3);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(290, 10, 20, 351));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        progressBar_2 = new QProgressBar(tab_3);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setGeometry(QRect(960, 70, 231, 261));
        progressBar_2->setValue(24);
        progressBar_2->setOrientation(Qt::Vertical);
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(90, 20, 31, 16));
        widSINAL_2 = new QWidget(tab_3);
        widSINAL_2->setObjectName(QStringLiteral("widSINAL_2"));
        widSINAL_2->setGeometry(QRect(0, 50, 281, 301));
        line_6 = new QFrame(tab_3);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(610, 10, 20, 351));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        widPWM_2 = new QWidget(tab_3);
        widPWM_2->setObjectName(QStringLiteral("widPWM_2"));
        widPWM_2->setGeometry(QRect(320, 50, 281, 301));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(410, 20, 47, 13));
        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 460, 121, 51));
        horizontalSlider = new QSlider(tab_3);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(170, 470, 311, 31));
        horizontalSlider->setMaximum(198);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksAbove);
        horizontalSlider->setTickInterval(0);
        label_18 = new QLabel(tab_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(310, 450, 47, 13));
        tabWidget->addTab(tab_3, QString());
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(130, 610, 1231, 61));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_5);

        ErroLineEdit = new QLineEdit(layoutWidget2);
        ErroLineEdit->setObjectName(QStringLiteral("ErroLineEdit"));

        verticalLayout_6->addWidget(ErroLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_6);

        SinalLineEdit = new QLineEdit(layoutWidget2);
        SinalLineEdit->setObjectName(QStringLiteral("SinalLineEdit"));

        verticalLayout_5->addWidget(SinalLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_7);

        PWMLineEdit = new QLineEdit(layoutWidget2);
        PWMLineEdit->setObjectName(QStringLiteral("PWMLineEdit"));

        verticalLayout_4->addWidget(PWMLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_8);

        TempLineEdit = new QLineEdit(layoutWidget2);
        TempLineEdit->setObjectName(QStringLiteral("TempLineEdit"));

        verticalLayout_3->addWidget(TempLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_9);

        TempoLineEdit = new QLineEdit(layoutWidget2);
        TempoLineEdit->setObjectName(QStringLiteral("TempoLineEdit"));

        verticalLayout_2->addWidget(TempoLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_2);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 610, 101, 61));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1365, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Serial Controller", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Porta", Q_NULLPTR));
        PortLineEdit->setText(QApplication::translate("MainWindow", "COM5", Q_NULLPTR));
        ConnectPushButton->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        DisconnectPushButton->setText(QApplication::translate("MainWindow", "Disconnect", Q_NULLPTR));
        ClearPushButton->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
        SendPushButton->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Serial", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "PWM", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Erro Atual", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Sinal", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Nivel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Enviar", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Kp", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Ki", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Kd", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Erro Passado", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Malha Fechada", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Nivel", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Sinal", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "PWM", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Iniciar", Q_NULLPTR));
        label_18->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Malha Aberta", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Erro", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Sinal", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "PWM", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Nivel (cm)", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Tempo (s)", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Aberta", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
