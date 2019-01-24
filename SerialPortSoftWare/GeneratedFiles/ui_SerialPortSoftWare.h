/********************************************************************************
** Form generated from reading UI file 'SerialPortSoftWare.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALPORTSOFTWARE_H
#define UI_SERIALPORTSOFTWARE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialPortSoftWareClass
{
public:
    QAction *serial_action;
    QAction *setting_action;
    QAction *camera_action;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *downBtn;
    QPushButton *upBtn;
    QPushButton *rightBtn;
    QPushButton *leftBtn;
    QPushButton *stopBtn;
    QPushButton *rsetBtn;
    QLabel *label;
    QLabel *motorLab;
    QGroupBox *groupBox_2;
    QTextEdit *receiveEdit;
    QGroupBox *groupBox_3;
    QTextEdit *sendEdit;
    QGroupBox *groupBox_4;
    QLabel *videoLab;
    QGroupBox *groupBox_5;
    QLabel *serialStatusLab;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *typeLab;
    QLabel *numLab;
    QLabel *statusLab;
    QLabel *tempLab;
    QLabel *tempNumLab;
    QLabel *tempStatusLab;
    QLabel *humLab;
    QLabel *humNumLab;
    QLabel *humStatusLab;
    QLabel *combusLab;
    QLabel *combusNumLab;
    QLabel *combusTatausLab;
    QLabel *chLab;
    QLabel *oxyNumLab;
    QLabel *oxyStatusLab;
    QLabel *pmLab;
    QLabel *pmNumLab;
    QLabel *pmStatusLab;
    QGroupBox *groupBox_6;
    QLabel *portLab;
    QLabel *netStatusLab;
    QLabel *portLab_2;
    QLabel *connectstatusLab;
    QTextEdit *imageStatusEdit;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lblPortName;
    QComboBox *cmbPortName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblBaudRte;
    QComboBox *cmbBaudRate;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblDataBits;
    QComboBox *cmbDataBits;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblParity;
    QComboBox *cmbParity;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lblStopBits;
    QComboBox *cmbStopBits;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lblFlowControl;
    QComboBox *cmbFlowControl;
    QPushButton *OpenBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SerialPortSoftWareClass)
    {
        if (SerialPortSoftWareClass->objectName().isEmpty())
            SerialPortSoftWareClass->setObjectName(QString::fromUtf8("SerialPortSoftWareClass"));
        SerialPortSoftWareClass->resize(1271, 983);
        serial_action = new QAction(SerialPortSoftWareClass);
        serial_action->setObjectName(QString::fromUtf8("serial_action"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/SerialPortSoftWare/Resources/usb.ico"), QSize(), QIcon::Normal, QIcon::Off);
        serial_action->setIcon(icon);
        setting_action = new QAction(SerialPortSoftWareClass);
        setting_action->setObjectName(QString::fromUtf8("setting_action"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/SerialPortSoftWare/Resources/command.ico"), QSize(), QIcon::Normal, QIcon::Off);
        setting_action->setIcon(icon1);
        camera_action = new QAction(SerialPortSoftWareClass);
        camera_action->setObjectName(QString::fromUtf8("camera_action"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/SerialPortSoftWare/Resources/camera.ico"), QSize(), QIcon::Normal, QIcon::Off);
        camera_action->setIcon(icon2);
        centralWidget = new QWidget(SerialPortSoftWareClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(680, 470, 321, 401));
        downBtn = new QPushButton(groupBox);
        downBtn->setObjectName(QString::fromUtf8("downBtn"));
        downBtn->setGeometry(QRect(120, 290, 91, 81));
        downBtn->setStyleSheet(QString::fromUtf8(" QPushButton:enabled {\n"
"        background: rgb(120, 170, 220);\n"
"        color: white;\n"
"    }\n"
"\n"
"    QPushButton:!enabled {\n"
"        background: rgb(180, 180, 180);\n"
"        color: white;\n"
"    }\n"
"\n"
"    QPushButton:enabled:hover {\n"
"        background: rgb(100, 160, 220);\n"
"    }\n"
"\n"
"    QPushButton:enabled:pressed {\n"
"        background: rgb(0, 78, 161);\n"
"    }"));
        upBtn = new QPushButton(groupBox);
        upBtn->setObjectName(QString::fromUtf8("upBtn"));
        upBtn->setGeometry(QRect(120, 120, 93, 81));
        upBtn->setStyleSheet(QString::fromUtf8(" QPushButton:enabled {\n"
"        background: rgb(120, 170, 220);\n"
"        color: white;\n"
"    }\n"
"\n"
"    QPushButton:!enabled {\n"
"        background: rgb(180, 180, 180);\n"
"        color: white;\n"
"    }\n"
"\n"
"    QPushButton:enabled:hover {\n"
"        background: rgb(100, 160, 220);\n"
"    }\n"
"\n"
"    QPushButton:enabled:pressed {\n"
"        background: rgb(0, 78, 161);\n"
"    }\n"
"  "));
        rightBtn = new QPushButton(groupBox);
        rightBtn->setObjectName(QString::fromUtf8("rightBtn"));
        rightBtn->setGeometry(QRect(210, 200, 93, 91));
        rightBtn->setStyleSheet(QString::fromUtf8(" QPushButton:enabled {\n"
"        background: rgb(120, 170, 220);\n"
"        color: white;\n"
"    }\n"
"\n"
"    QPushButton:!enabled {\n"
"        background: rgb(180, 180, 180);\n"
"        color: white;\n"
"    }\n"
"\n"
"    QPushButton:enabled:hover {\n"
"        background: rgb(100, 160, 220);\n"
"    }\n"
"\n"
"    QPushButton:enabled:pressed {\n"
"        background: rgb(0, 78, 161);\n"
"    }"));
        leftBtn = new QPushButton(groupBox);
        leftBtn->setObjectName(QString::fromUtf8("leftBtn"));
        leftBtn->setGeometry(QRect(30, 200, 93, 91));
        leftBtn->setStyleSheet(QString::fromUtf8(" QPushButton:enabled {\n"
"        background: rgb(120, 170, 220);\n"
"        color: white;\n"
"    }\n"
"\n"
"    QPushButton:!enabled {\n"
"        background: rgb(180, 180, 180);\n"
"        color: white;\n"
"    }\n"
"\n"
"    QPushButton:enabled:hover {\n"
"        background: rgb(100, 160, 220);\n"
"    }\n"
"\n"
"    QPushButton:enabled:pressed {\n"
"        background: rgb(0, 78, 161);\n"
"    }"));
        stopBtn = new QPushButton(groupBox);
        stopBtn->setObjectName(QString::fromUtf8("stopBtn"));
        stopBtn->setGeometry(QRect(120, 200, 93, 91));
        stopBtn->setStyleSheet(QString::fromUtf8(" QPushButton:enabled {\n"
"        background: rgb(120, 170, 220);\n"
"        color: white;\n"
"    }\n"
"\n"
"    QPushButton:!enabled {\n"
"        background: rgb(180, 180, 180);\n"
"        color: white;\n"
"    }\n"
"\n"
"    QPushButton:enabled:hover {\n"
"        background: rgb(100, 160, 220);\n"
"    }\n"
"\n"
"    QPushButton:enabled:pressed {\n"
"        background: rgb(0, 78, 161);\n"
"    }"));
        rsetBtn = new QPushButton(groupBox);
        rsetBtn->setObjectName(QString::fromUtf8("rsetBtn"));
        rsetBtn->setGeometry(QRect(220, 320, 81, 51));
        rsetBtn->setStyleSheet(QString::fromUtf8(" QPushButton:enabled {\n"
"        background: rgb(120, 170, 220);\n"
"        color: white;\n"
"    }\n"
"\n"
"    QPushButton:!enabled {\n"
"        background: rgb(180, 180, 180);\n"
"        color: white;\n"
"    }\n"
"\n"
"    QPushButton:enabled:hover {\n"
"        background: rgb(100, 160, 220);\n"
"    }\n"
"\n"
"    QPushButton:enabled:pressed {\n"
"        background: rgb(0, 78, 161);\n"
"    }"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 51, 41));
        motorLab = new QLabel(groupBox);
        motorLab->setObjectName(QString::fromUtf8("motorLab"));
        motorLab->setGeometry(QRect(80, 40, 191, 41));
        motorLab->setFrameShape(QFrame::Box);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 470, 441, 191));
        receiveEdit = new QTextEdit(groupBox_2);
        receiveEdit->setObjectName(QString::fromUtf8("receiveEdit"));
        receiveEdit->setGeometry(QRect(10, 20, 421, 161));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 660, 441, 211));
        sendEdit = new QTextEdit(groupBox_3);
        sendEdit->setObjectName(QString::fromUtf8("sendEdit"));
        sendEdit->setGeometry(QRect(10, 20, 421, 181));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 10, 651, 451));
        videoLab = new QLabel(groupBox_4);
        videoLab->setObjectName(QString::fromUtf8("videoLab"));
        videoLab->setGeometry(QRect(0, 10, 651, 441));
        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(680, 10, 551, 451));
        serialStatusLab = new QLabel(groupBox_5);
        serialStatusLab->setObjectName(QString::fromUtf8("serialStatusLab"));
        serialStatusLab->setGeometry(QRect(190, 40, 121, 41));
        widget = new QWidget(groupBox_5);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 40, 491, 381));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        typeLab = new QLabel(widget);
        typeLab->setObjectName(QString::fromUtf8("typeLab"));
        typeLab->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));
        typeLab->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(typeLab, 0, 0, 1, 1);

        numLab = new QLabel(widget);
        numLab->setObjectName(QString::fromUtf8("numLab"));
        numLab->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));
        numLab->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(numLab, 0, 1, 1, 1);

        statusLab = new QLabel(widget);
        statusLab->setObjectName(QString::fromUtf8("statusLab"));
        statusLab->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));
        statusLab->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(statusLab, 0, 2, 1, 1);

        tempLab = new QLabel(widget);
        tempLab->setObjectName(QString::fromUtf8("tempLab"));
        tempLab->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));
        tempLab->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(tempLab, 1, 0, 1, 1);

        tempNumLab = new QLabel(widget);
        tempNumLab->setObjectName(QString::fromUtf8("tempNumLab"));
        tempNumLab->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));
        tempNumLab->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(tempNumLab, 1, 1, 1, 1);

        tempStatusLab = new QLabel(widget);
        tempStatusLab->setObjectName(QString::fromUtf8("tempStatusLab"));
        tempStatusLab->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));
        tempStatusLab->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(tempStatusLab, 1, 2, 1, 1);

        humLab = new QLabel(widget);
        humLab->setObjectName(QString::fromUtf8("humLab"));
        humLab->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));
        humLab->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(humLab, 2, 0, 1, 1);

        humNumLab = new QLabel(widget);
        humNumLab->setObjectName(QString::fromUtf8("humNumLab"));
        humNumLab->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));
        humNumLab->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(humNumLab, 2, 1, 1, 1);

        humStatusLab = new QLabel(widget);
        humStatusLab->setObjectName(QString::fromUtf8("humStatusLab"));
        humStatusLab->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));
        humStatusLab->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(humStatusLab, 2, 2, 1, 1);

        combusLab = new QLabel(widget);
        combusLab->setObjectName(QString::fromUtf8("combusLab"));
        combusLab->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));
        combusLab->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(combusLab, 3, 0, 1, 1);

        combusNumLab = new QLabel(widget);
        combusNumLab->setObjectName(QString::fromUtf8("combusNumLab"));
        combusNumLab->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));
        combusNumLab->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(combusNumLab, 3, 1, 1, 1);

        combusTatausLab = new QLabel(widget);
        combusTatausLab->setObjectName(QString::fromUtf8("combusTatausLab"));
        combusTatausLab->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));
        combusTatausLab->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(combusTatausLab, 3, 2, 1, 1);

        chLab = new QLabel(widget);
        chLab->setObjectName(QString::fromUtf8("chLab"));
        chLab->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));
        chLab->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(chLab, 4, 0, 1, 1);

        oxyNumLab = new QLabel(widget);
        oxyNumLab->setObjectName(QString::fromUtf8("oxyNumLab"));
        oxyNumLab->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));
        oxyNumLab->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(oxyNumLab, 4, 1, 1, 1);

        oxyStatusLab = new QLabel(widget);
        oxyStatusLab->setObjectName(QString::fromUtf8("oxyStatusLab"));
        oxyStatusLab->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));
        oxyStatusLab->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(oxyStatusLab, 4, 2, 1, 1);

        pmLab = new QLabel(widget);
        pmLab->setObjectName(QString::fromUtf8("pmLab"));
        pmLab->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));
        pmLab->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(pmLab, 5, 0, 1, 1);

        pmNumLab = new QLabel(widget);
        pmNumLab->setObjectName(QString::fromUtf8("pmNumLab"));
        pmNumLab->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));
        pmNumLab->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(pmNumLab, 5, 1, 1, 1);

        pmStatusLab = new QLabel(widget);
        pmStatusLab->setObjectName(QString::fromUtf8("pmStatusLab"));
        pmStatusLab->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));
        pmStatusLab->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(pmStatusLab, 5, 2, 1, 1);

        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(1010, 470, 221, 401));
        portLab = new QLabel(groupBox_6);
        portLab->setObjectName(QString::fromUtf8("portLab"));
        portLab->setGeometry(QRect(120, 40, 72, 41));
        netStatusLab = new QLabel(groupBox_6);
        netStatusLab->setObjectName(QString::fromUtf8("netStatusLab"));
        netStatusLab->setGeometry(QRect(120, 100, 72, 41));
        portLab_2 = new QLabel(groupBox_6);
        portLab_2->setObjectName(QString::fromUtf8("portLab_2"));
        portLab_2->setGeometry(QRect(30, 40, 81, 41));
        connectstatusLab = new QLabel(groupBox_6);
        connectstatusLab->setObjectName(QString::fromUtf8("connectstatusLab"));
        connectstatusLab->setGeometry(QRect(30, 100, 81, 41));
        imageStatusEdit = new QTextEdit(groupBox_6);
        imageStatusEdit->setObjectName(QString::fromUtf8("imageStatusEdit"));
        imageStatusEdit->setGeometry(QRect(10, 140, 201, 251));
        groupBox_7 = new QGroupBox(centralWidget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(460, 470, 211, 401));
        layoutWidget_2 = new QWidget(groupBox_7);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 10, 173, 301));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblPortName = new QLabel(layoutWidget_2);
        lblPortName->setObjectName(QString::fromUtf8("lblPortName"));

        horizontalLayout->addWidget(lblPortName);

        cmbPortName = new QComboBox(layoutWidget_2);
        cmbPortName->setObjectName(QString::fromUtf8("cmbPortName"));

        horizontalLayout->addWidget(cmbPortName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblBaudRte = new QLabel(layoutWidget_2);
        lblBaudRte->setObjectName(QString::fromUtf8("lblBaudRte"));

        horizontalLayout_2->addWidget(lblBaudRte);

        cmbBaudRate = new QComboBox(layoutWidget_2);
        cmbBaudRate->setObjectName(QString::fromUtf8("cmbBaudRate"));

        horizontalLayout_2->addWidget(cmbBaudRate);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lblDataBits = new QLabel(layoutWidget_2);
        lblDataBits->setObjectName(QString::fromUtf8("lblDataBits"));

        horizontalLayout_3->addWidget(lblDataBits);

        cmbDataBits = new QComboBox(layoutWidget_2);
        cmbDataBits->setObjectName(QString::fromUtf8("cmbDataBits"));

        horizontalLayout_3->addWidget(cmbDataBits);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lblParity = new QLabel(layoutWidget_2);
        lblParity->setObjectName(QString::fromUtf8("lblParity"));

        horizontalLayout_4->addWidget(lblParity);

        cmbParity = new QComboBox(layoutWidget_2);
        cmbParity->setObjectName(QString::fromUtf8("cmbParity"));

        horizontalLayout_4->addWidget(cmbParity);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lblStopBits = new QLabel(layoutWidget_2);
        lblStopBits->setObjectName(QString::fromUtf8("lblStopBits"));

        horizontalLayout_5->addWidget(lblStopBits);

        cmbStopBits = new QComboBox(layoutWidget_2);
        cmbStopBits->setObjectName(QString::fromUtf8("cmbStopBits"));

        horizontalLayout_5->addWidget(cmbStopBits);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lblFlowControl = new QLabel(layoutWidget_2);
        lblFlowControl->setObjectName(QString::fromUtf8("lblFlowControl"));

        horizontalLayout_6->addWidget(lblFlowControl);

        cmbFlowControl = new QComboBox(layoutWidget_2);
        cmbFlowControl->setObjectName(QString::fromUtf8("cmbFlowControl"));

        horizontalLayout_6->addWidget(cmbFlowControl);


        verticalLayout->addLayout(horizontalLayout_6);

        OpenBtn = new QPushButton(groupBox_7);
        OpenBtn->setObjectName(QString::fromUtf8("OpenBtn"));
        OpenBtn->setGeometry(QRect(50, 330, 121, 51));
        OpenBtn->setStyleSheet(QString::fromUtf8(" QPushButton:enabled {\n"
"        background: rgb(120, 170, 220);\n"
"        color: white;\n"
"    }\n"
"\n"
"    QPushButton:!enabled {\n"
"        background: rgb(180, 180, 180);\n"
"        color: white;\n"
"    }\n"
"\n"
"    QPushButton:enabled:hover {\n"
"        background: rgb(100, 160, 220);\n"
"    }\n"
"\n"
"    QPushButton:enabled:pressed {\n"
"        background: rgb(0, 78, 161);\n"
"    }"));
        SerialPortSoftWareClass->setCentralWidget(centralWidget);
        groupBox_3->raise();
        groupBox_2->raise();
        groupBox->raise();
        groupBox_4->raise();
        groupBox_5->raise();
        groupBox_6->raise();
        groupBox_7->raise();
        menuBar = new QMenuBar(SerialPortSoftWareClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1271, 26));
        SerialPortSoftWareClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SerialPortSoftWareClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        SerialPortSoftWareClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SerialPortSoftWareClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SerialPortSoftWareClass->setStatusBar(statusBar);

        mainToolBar->addAction(serial_action);
        mainToolBar->addAction(setting_action);
        mainToolBar->addAction(camera_action);

        retranslateUi(SerialPortSoftWareClass);

        QMetaObject::connectSlotsByName(SerialPortSoftWareClass);
    } // setupUi

    void retranslateUi(QMainWindow *SerialPortSoftWareClass)
    {
        SerialPortSoftWareClass->setWindowTitle(QApplication::translate("SerialPortSoftWareClass", "SerialPortSoftWare", nullptr));
        serial_action->setText(QApplication::translate("SerialPortSoftWareClass", "\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
        setting_action->setText(QApplication::translate("SerialPortSoftWareClass", "\346\214\207\344\273\244\350\256\276\347\275\256", nullptr));
#ifndef QT_NO_TOOLTIP
        setting_action->setToolTip(QApplication::translate("SerialPortSoftWareClass", "\346\214\207\344\273\244\350\256\276\347\275\256", nullptr));
#endif // QT_NO_TOOLTIP
        camera_action->setText(QApplication::translate("SerialPortSoftWareClass", "\346\216\245\346\224\266\350\247\206\351\242\221", nullptr));
        groupBox->setTitle(QApplication::translate("SerialPortSoftWareClass", "\347\224\265\346\234\272\346\216\247\345\210\266", nullptr));
        downBtn->setText(QString());
        upBtn->setText(QString());
        rightBtn->setText(QString());
        leftBtn->setText(QString());
        stopBtn->setText(QString());
        rsetBtn->setText(QApplication::translate("SerialPortSoftWareClass", "\345\244\215\344\275\215", nullptr));
        label->setText(QApplication::translate("SerialPortSoftWareClass", "\347\212\266\346\200\201\357\274\232", nullptr));
        motorLab->setText(QString());
        groupBox_2->setTitle(QApplication::translate("SerialPortSoftWareClass", "\346\216\245\346\224\266\345\214\272", nullptr));
        groupBox_3->setTitle(QApplication::translate("SerialPortSoftWareClass", "\345\217\221\351\200\201\345\214\272", nullptr));
        groupBox_4->setTitle(QApplication::translate("SerialPortSoftWareClass", "\350\247\206\351\242\221", nullptr));
        videoLab->setText(QString());
        groupBox_5->setTitle(QApplication::translate("SerialPortSoftWareClass", "\344\274\240\346\204\237\345\231\250\346\225\260\346\215\256", nullptr));
        serialStatusLab->setText(QString());
        typeLab->setText(QApplication::translate("SerialPortSoftWareClass", "\347\261\273\345\236\213", nullptr));
        numLab->setText(QApplication::translate("SerialPortSoftWareClass", "\346\225\260\345\200\274", nullptr));
        statusLab->setText(QApplication::translate("SerialPortSoftWareClass", "\347\255\211\347\272\247", nullptr));
        tempLab->setText(QApplication::translate("SerialPortSoftWareClass", "\346\270\251\345\272\246\357\274\232", nullptr));
        tempNumLab->setText(QString());
        tempStatusLab->setText(QString());
        humLab->setText(QApplication::translate("SerialPortSoftWareClass", "\346\271\277\345\272\246\357\274\232", nullptr));
        humNumLab->setText(QString());
        humStatusLab->setText(QString());
        combusLab->setText(QApplication::translate("SerialPortSoftWareClass", "\345\217\257\347\207\203\346\260\224\344\275\223\357\274\232", nullptr));
        combusNumLab->setText(QString());
        combusTatausLab->setText(QString());
        chLab->setText(QApplication::translate("SerialPortSoftWareClass", "\347\224\262\351\206\233\357\274\232", nullptr));
        oxyNumLab->setText(QString());
        oxyStatusLab->setText(QString());
        pmLab->setText(QApplication::translate("SerialPortSoftWareClass", "PM2.5:", nullptr));
        pmNumLab->setText(QString());
        pmStatusLab->setText(QString());
        groupBox_6->setTitle(QApplication::translate("SerialPortSoftWareClass", "\347\275\221\347\273\234\350\256\276\347\275\256", nullptr));
        portLab->setText(QApplication::translate("SerialPortSoftWareClass", "1200", nullptr));
        netStatusLab->setText(QString());
        portLab_2->setText(QApplication::translate("SerialPortSoftWareClass", "\346\234\254\345\234\260\347\253\257\345\217\243\357\274\232", nullptr));
        connectstatusLab->setText(QApplication::translate("SerialPortSoftWareClass", "\350\277\236\346\216\245\347\212\266\346\200\201\357\274\232", nullptr));
        groupBox_7->setTitle(QString());
        lblPortName->setText(QApplication::translate("SerialPortSoftWareClass", "\344\270\262\345\217\243", nullptr));
        lblBaudRte->setText(QApplication::translate("SerialPortSoftWareClass", "\346\263\242\347\211\271\347\216\207", nullptr));
        lblDataBits->setText(QApplication::translate("SerialPortSoftWareClass", "\346\225\260\346\215\256\344\275\215", nullptr));
        lblParity->setText(QApplication::translate("SerialPortSoftWareClass", "\345\245\207\345\201\266\346\240\241\351\252\214\344\275\215", nullptr));
        lblStopBits->setText(QApplication::translate("SerialPortSoftWareClass", "\345\201\234\346\255\242\344\275\215", nullptr));
        lblFlowControl->setText(QApplication::translate("SerialPortSoftWareClass", "\346\265\201\346\216\247\345\210\266", nullptr));
        OpenBtn->setText(QApplication::translate("SerialPortSoftWareClass", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialPortSoftWareClass: public Ui_SerialPortSoftWareClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALPORTSOFTWARE_H
