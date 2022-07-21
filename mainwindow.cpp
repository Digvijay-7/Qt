#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stack>
#include <QDebug>

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
    ui->pushButton_Addition->setChecked(false);
    ui->pushButton_Subtract->setChecked(false);
    ui->pushButton_Multiplication->setChecked(false);
    ui->pushButton_Divsion->setChecked(false);

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
     string str = infixToPostfix(equation);
     double result  = postfixEval(str);
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
      ui->label->setText(ui->label->text()+' '+button->text());
      gbEquals = true;
     }
}

// A Function to return precedence of operators
int MainWindow:: prec(char ch)
{
    if(ch == '+' || ch == '-')
    {
        return 1;              //Precedence of + or - is 1
    }
    else if(ch == '*' || ch == '/')
    {
        return 2;            //Precedence of * or / is 2
    }else if(ch == '^') {
        return 3;            //Precedence of ^ is 3
    }else {
        return 0;
    }
}

// A Function to convert infix expression to postfix expression
string MainWindow:: infixToPostfix(string s)
{
    stack<char> st;
    string result;

    for(int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if(c==' ')continue;

        // If the character is an operand, add it to output string.
        else if(c >= '0' && c <= '9')
        {
            result +=scanNum(i,s);
            result +=" ";
        }
        //If an operator is scanned
        else
        {
            while(!st.empty() && prec(s[i]) <= prec(st.top()))
            {
                result += st.top();
                result +=" ";
                st.pop();
            }
            st.push(c);
        }
    }
    // Pop all the remaining elements from the stack
    while(!st.empty()) {
        result += st.top();
        result +=" ";
        st.pop();
    }
    return result ;
}

string MainWindow::scanNum(int &i,string str)
{
   string value;
   value = str[i++];
   while(str[i]!=' ' && i<str.length()){
       value+=str[i++];
   }
   return value;
}





