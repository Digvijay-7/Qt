#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>
#include "postfix.h"


using namespace std;
bool gbEquals(false);

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->label->setText(QString::number(0.0));
    ui->label_2->setText(QString::number(0.0));
    QPushButton *numButtons[10];
    for(int i =0;i<10;i++)
    {
        QString button = "pushButton_" + QString::number(i);
        numButtons[i] = MainWindow::findChild<QPushButton *>(button);
        connect(numButtons[i],SIGNAL(released()),this,SLOT(digit_pressed()));
    }

    connect(ui->pushButton_Sign,SIGNAL(released()),this,SLOT(unary_operation_pressed()));
    connect(ui->pushButton_Percent,SIGNAL(released()),this,SLOT(unary_operation_pressed()));

    connect(ui->pushButton_Addition,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_Subtract,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_Multiplication,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_Divsion,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed()
{
    binary_operation_pressed();
}


void MainWindow::on_pushButton_Decimal_released()
{
    ui->label->setText(ui->label->text() + ".");
}

void MainWindow::unary_operation_pressed()
{
    double labelNumber;
    QString newLabel;
    QPushButton * button = (QPushButton*)sender();

    if(button->text()=="+/-")
    {
        labelNumber = ui->label->text().toDouble();
        labelNumber = labelNumber * -1;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
    }

    if(button->text()=="%")
    {
        labelNumber = ui->label->text().toDouble();
        labelNumber = labelNumber * 0.01;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
    }
}

void MainWindow::on_pushButton_Clear_released()
{
    ui->label->setText("0");
    ui->label_2->setText("0");
}


void MainWindow::on_pushButton_Equals_released()
{
    if(gbEquals)
     {
        ui->label_2->setText(ui->label->text());
     }
     string equation = ui->label->text().toStdString();
     int result  = Operation(equation);
     ui->label->setText(QString::number(result,'g',15));
     gbEquals=false;
}

void MainWindow::binary_operation_pressed()
{
     QPushButton * button = (QPushButton*)sender();
     if(ui->label->text()=="0")
     {
         ui->label->setText(button->text());
     }
     else
     {
      ui->label->setText(ui->label->text()+button->text());
      gbEquals = true;
     }
}



