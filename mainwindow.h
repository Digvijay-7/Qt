#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
using namespace std;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void digit_pressed();



    void on_pushButton_Decimal_released();
    void unary_operation_pressed();
    void on_pushButton_Clear_released();
    void on_pushButton_Equals_released();
    void binary_operation_pressed();
    int prec(char );
    std::string infixToPostfix(std::string );
    double postfixEval(std::string );
    int isOperator(char);
    int isOperand(char);
    double operation(double , double , char);
    std::string scanNum(int &i,std::string str);
};
#endif // MAINWINDOW_H
