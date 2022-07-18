#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

double firstNum,calcVal = 0.0;
 double labelNumber,secondNum = 0;
bool userIsTypingSecondNumber(false);
bool nextNumber(false);
bool gbequals(false);

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->label->setText(QString::number(calcVal));
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

    ui->pushButton_Addition->setCheckable(true);
    ui->pushButton_Subtract->setCheckable(true);
    ui->pushButton_Multiplication->setCheckable(true);
    ui->pushButton_Divsion->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed()
{
    QPushButton * button = (QPushButton*)sender();
    if(ui->label->text()=="0")
    {
            ui->label->setText(button->text());
    }
    else if(nextNumber)
    {
        if((ui->pushButton_Addition->isChecked()||ui->pushButton_Subtract->isChecked() ||
            ui->pushButton_Multiplication->isChecked() || ui->pushButton_Divsion->isChecked())&&(!userIsTypingSecondNumber))
        {
            ui->label->setText(button->text());
            userIsTypingSecondNumber = true;
        }
        else
        {
            if(ui->label->text().contains('.')&&button->text()=="0")
            {
                ui->label->setText(ui->label->text() + button->text());
            }
            else
            {
                ui->label->setText(ui->label->text()+button->text());
            }
        }
    }
    else
    {
        if((ui->pushButton_Addition->isChecked()||ui->pushButton_Subtract->isChecked() ||
            ui->pushButton_Multiplication->isChecked() || ui->pushButton_Divsion->isChecked())&&(!userIsTypingSecondNumber))
        {
            ui->label->setText(ui->label->text()+' '+button->text());
            userIsTypingSecondNumber = true;
        }
        else
        {
            if(ui->label->text().contains('.')&&button->text()=="0")
            {
                ui->label->setText(ui->label->text() + button->text());
            }
            else
            {
                ui->label->setText(ui->label->text()+button->text());
            }
        }

    }
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
    ui->pushButton_Addition->setChecked(false);
    ui->pushButton_Subtract->setChecked(false);
    ui->pushButton_Multiplication->setChecked(false);
    ui->pushButton_Divsion->setChecked(false);

    userIsTypingSecondNumber = false;

    ui->label->setText("0");
    ui->label_2->setText("0");
}


void MainWindow::on_pushButton_Equals_released()
{
    if(gbequals)
     {
        ui->label_2->setText(ui->label_2->text()+' '+ui->label->text());
        gbequals =false;
     }
    QString newLabel;
    secondNum = ui->label->text().toDouble();
    if(ui->pushButton_Addition->isChecked())
    {
        labelNumber = firstNum + secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_Addition->setChecked(false);

    }
    else if(ui->pushButton_Subtract->isChecked())
    {
        labelNumber = firstNum - secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_Subtract->setChecked(false);
        gbequals =false;
    }
    else if(ui->pushButton_Multiplication->isChecked())
    {
        labelNumber = firstNum * secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_Multiplication->setChecked(false);
    }
    else if(ui->pushButton_Divsion->isChecked())
    {
        labelNumber = firstNum / secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_Divsion->setChecked(false);
    }
    userIsTypingSecondNumber = false;
}

void MainWindow::binary_operation_pressed()
{
     QPushButton * button = (QPushButton*)sender();

     firstNum = ui->label->text().toDouble();

     ui->label_2->setText(ui->label->text()+' '+button->text());

     gbequals = true;
     nextNumber = true;

    button->setChecked(true);
}

