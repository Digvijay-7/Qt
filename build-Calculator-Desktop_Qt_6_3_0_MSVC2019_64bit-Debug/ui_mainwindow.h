/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_rightShift;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_rightBracket;
    QPushButton *pushButton_Percent;
    QPushButton *pushButton_Divsion;
    QPushButton *pushButton_leftBracket;
    QPushButton *pushButton_08;
    QPushButton *pushButton_09;
    QPushButton *pushButton_Multiplication;
    QPushButton *pushButton_07;
    QPushButton *pushButton_05;
    QPushButton *pushButton_06;
    QPushButton *pushButton_Subtract;
    QPushButton *pushButton_04;
    QPushButton *pushButton_03;
    QPushButton *pushButton_Addition;
    QPushButton *pushButton_01;
    QPushButton *pushButton_Decimal;
    QPushButton *pushButton_Equals;
    QPushButton *pushButton_Sign;
    QPushButton *pushButton_0;
    QPushButton *pushButton_02;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(241, 420);
        MainWindow->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 241, 61));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 60, 61, 61));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_rightShift = new QPushButton(centralwidget);
        pushButton_rightShift->setObjectName(QString::fromUtf8("pushButton_rightShift"));
        pushButton_rightShift->setGeometry(QRect(60, 60, 61, 61));
        pushButton_rightShift->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_Clear = new QPushButton(centralwidget);
        pushButton_Clear->setObjectName(QString::fromUtf8("pushButton_Clear"));
        pushButton_Clear->setGeometry(QRect(120, 60, 121, 61));
        pushButton_Clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_rightBracket = new QPushButton(centralwidget);
        pushButton_rightBracket->setObjectName(QString::fromUtf8("pushButton_rightBracket"));
        pushButton_rightBracket->setGeometry(QRect(60, 120, 61, 61));
        pushButton_rightBracket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_Percent = new QPushButton(centralwidget);
        pushButton_Percent->setObjectName(QString::fromUtf8("pushButton_Percent"));
        pushButton_Percent->setGeometry(QRect(120, 120, 61, 61));
        pushButton_Percent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_Divsion = new QPushButton(centralwidget);
        pushButton_Divsion->setObjectName(QString::fromUtf8("pushButton_Divsion"));
        pushButton_Divsion->setGeometry(QRect(180, 120, 61, 61));
        pushButton_Divsion->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_leftBracket = new QPushButton(centralwidget);
        pushButton_leftBracket->setObjectName(QString::fromUtf8("pushButton_leftBracket"));
        pushButton_leftBracket->setGeometry(QRect(0, 120, 61, 61));
        pushButton_leftBracket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_08 = new QPushButton(centralwidget);
        pushButton_08->setObjectName(QString::fromUtf8("pushButton_08"));
        pushButton_08->setGeometry(QRect(60, 180, 61, 61));
        pushButton_08->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #fffdfa);\n"
"}\n"
""));
        pushButton_09 = new QPushButton(centralwidget);
        pushButton_09->setObjectName(QString::fromUtf8("pushButton_09"));
        pushButton_09->setGeometry(QRect(120, 180, 61, 61));
        pushButton_09->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #fffdfa);\n"
"}\n"
""));
        pushButton_Multiplication = new QPushButton(centralwidget);
        pushButton_Multiplication->setObjectName(QString::fromUtf8("pushButton_Multiplication"));
        pushButton_Multiplication->setGeometry(QRect(180, 180, 61, 61));
        pushButton_Multiplication->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_07 = new QPushButton(centralwidget);
        pushButton_07->setObjectName(QString::fromUtf8("pushButton_07"));
        pushButton_07->setGeometry(QRect(0, 180, 61, 61));
        pushButton_07->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #fffdfa);\n"
"}\n"
""));
        pushButton_05 = new QPushButton(centralwidget);
        pushButton_05->setObjectName(QString::fromUtf8("pushButton_05"));
        pushButton_05->setGeometry(QRect(60, 240, 61, 61));
        pushButton_05->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #fffdfa);\n"
"}\n"
""));
        pushButton_06 = new QPushButton(centralwidget);
        pushButton_06->setObjectName(QString::fromUtf8("pushButton_06"));
        pushButton_06->setGeometry(QRect(120, 240, 61, 61));
        pushButton_06->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #fffdfa);\n"
"}\n"
""));
        pushButton_Subtract = new QPushButton(centralwidget);
        pushButton_Subtract->setObjectName(QString::fromUtf8("pushButton_Subtract"));
        pushButton_Subtract->setGeometry(QRect(180, 240, 61, 61));
        pushButton_Subtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_04 = new QPushButton(centralwidget);
        pushButton_04->setObjectName(QString::fromUtf8("pushButton_04"));
        pushButton_04->setGeometry(QRect(0, 240, 61, 61));
        pushButton_04->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #fffdfa);\n"
"}\n"
""));
        pushButton_03 = new QPushButton(centralwidget);
        pushButton_03->setObjectName(QString::fromUtf8("pushButton_03"));
        pushButton_03->setGeometry(QRect(120, 300, 61, 61));
        pushButton_03->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #fffdfa);\n"
"}\n"
""));
        pushButton_Addition = new QPushButton(centralwidget);
        pushButton_Addition->setObjectName(QString::fromUtf8("pushButton_Addition"));
        pushButton_Addition->setGeometry(QRect(180, 300, 61, 61));
        pushButton_Addition->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_01 = new QPushButton(centralwidget);
        pushButton_01->setObjectName(QString::fromUtf8("pushButton_01"));
        pushButton_01->setGeometry(QRect(0, 300, 61, 61));
        pushButton_01->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #fffdfa);\n"
"}\n"
""));
        pushButton_Decimal = new QPushButton(centralwidget);
        pushButton_Decimal->setObjectName(QString::fromUtf8("pushButton_Decimal"));
        pushButton_Decimal->setGeometry(QRect(120, 360, 61, 61));
        pushButton_Decimal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_Equals = new QPushButton(centralwidget);
        pushButton_Equals->setObjectName(QString::fromUtf8("pushButton_Equals"));
        pushButton_Equals->setGeometry(QRect(180, 360, 61, 61));
        pushButton_Equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(254, 216, 177);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}"));
        pushButton_Sign = new QPushButton(centralwidget);
        pushButton_Sign->setObjectName(QString::fromUtf8("pushButton_Sign"));
        pushButton_Sign->setGeometry(QRect(0, 360, 61, 61));
        pushButton_Sign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(60, 360, 61, 61));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #fffdfa);\n"
"}\n"
""));
        pushButton_02 = new QPushButton(centralwidget);
        pushButton_02->setObjectName(QString::fromUtf8("pushButton_02"));
        pushButton_02->setGeometry(QRect(60, 300, 61, 61));
        pushButton_02->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #fffdfa);\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "<<", nullptr));
        pushButton_rightShift->setText(QCoreApplication::translate("MainWindow", ">>", nullptr));
        pushButton_Clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_rightBracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_Percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_Divsion->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_leftBracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_08->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_09->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_Multiplication->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton_07->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_05->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_06->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_Subtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_04->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_03->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_Addition->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_01->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_Decimal->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_Equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_Sign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_02->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
