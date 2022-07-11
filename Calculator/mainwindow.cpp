#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_01,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_02,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_03,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_04,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_05,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_06,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_07,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_08,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_09,SIGNAL(released()),this,SLOT(digit_pressed()));

    connect(ui->pushButton_Sign,SIGNAL(released()),this,SLOT(unary_operation_pressed()));
    connect(ui->pushButton_Percent,SIGNAL(released()),this,SLOT(unary_operation_pressed()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed()
{
    QPushButton * button = (QPushButton*)sender();

    double labelNumber;
    QString newLabel;

    labelNumber = (ui->label->text() + button->text()).toDouble();

    newLabel = QString::number(labelNumber,'g',15);

    ui->label->setText(newLabel);
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

}


void MainWindow::on_pushButton_Equals_released()
{

}

void MainWindow::binary_operation_pressed()
{
    QPushButton * button = (QPushButton*)sender();
}

