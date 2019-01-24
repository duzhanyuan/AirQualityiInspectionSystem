/********************************************************************************
** Form generated from reading UI file 'commandDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDDIALOG_H
#define UI_COMMANDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_commandDialog
{
public:
    QGroupBox *groupBox;
    QLineEdit *rsetEdit;
    QLineEdit *rightEdit;
    QLabel *label_4;
    QLineEdit *leftEdit;
    QLabel *label_2;
    QLineEdit *upEdit;
    QLineEdit *downEdit;
    QLineEdit *stopEdit;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *saveBtn;

    void setupUi(QWidget *commandDialog)
    {
        if (commandDialog->objectName().isEmpty())
            commandDialog->setObjectName(QString::fromUtf8("commandDialog"));
        commandDialog->resize(534, 221);
        groupBox = new QGroupBox(commandDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 511, 201));
        rsetEdit = new QLineEdit(groupBox);
        rsetEdit->setObjectName(QString::fromUtf8("rsetEdit"));
        rsetEdit->setGeometry(QRect(340, 100, 113, 31));
        rightEdit = new QLineEdit(groupBox);
        rightEdit->setObjectName(QString::fromUtf8("rightEdit"));
        rightEdit->setGeometry(QRect(340, 60, 113, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(260, 20, 72, 31));
        leftEdit = new QLineEdit(groupBox);
        leftEdit->setObjectName(QString::fromUtf8("leftEdit"));
        leftEdit->setGeometry(QRect(340, 20, 113, 31));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 60, 72, 31));
        upEdit = new QLineEdit(groupBox);
        upEdit->setObjectName(QString::fromUtf8("upEdit"));
        upEdit->setGeometry(QRect(120, 20, 113, 31));
        downEdit = new QLineEdit(groupBox);
        downEdit->setObjectName(QString::fromUtf8("downEdit"));
        downEdit->setGeometry(QRect(120, 60, 113, 31));
        stopEdit = new QLineEdit(groupBox);
        stopEdit->setObjectName(QString::fromUtf8("stopEdit"));
        stopEdit->setGeometry(QRect(120, 100, 113, 31));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 72, 31));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 100, 72, 31));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(260, 60, 72, 31));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(260, 100, 72, 31));
        saveBtn = new QPushButton(groupBox);
        saveBtn->setObjectName(QString::fromUtf8("saveBtn"));
        saveBtn->setGeometry(QRect(200, 150, 93, 28));

        retranslateUi(commandDialog);

        QMetaObject::connectSlotsByName(commandDialog);
    } // setupUi

    void retranslateUi(QWidget *commandDialog)
    {
        commandDialog->setWindowTitle(QApplication::translate("commandDialog", "commandDialog", nullptr));
        groupBox->setTitle(QString());
        label_4->setText(QApplication::translate("commandDialog", "\345\220\221\345\267\246\346\214\207\344\273\244\357\274\232", nullptr));
        label_2->setText(QApplication::translate("commandDialog", "\345\220\221\344\270\213\346\214\207\344\273\244\357\274\232", nullptr));
        label->setText(QApplication::translate("commandDialog", "\345\220\221\344\270\212\346\214\207\344\273\244\357\274\232", nullptr));
        label_3->setText(QApplication::translate("commandDialog", "\345\201\234\346\255\242\346\214\207\344\273\244\357\274\232", nullptr));
        label_5->setText(QApplication::translate("commandDialog", "\345\220\221\345\217\263\346\214\207\344\273\244\357\274\232", nullptr));
        label_6->setText(QApplication::translate("commandDialog", "\345\244\215\344\275\215\346\214\207\344\273\244\357\274\232", nullptr));
        saveBtn->setText(QApplication::translate("commandDialog", "\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class commandDialog: public Ui_commandDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDDIALOG_H
