#ifndef JZYS2_WIDGET_H
#define JZYS2_WIDGET_H
#include<QPushButton>
#include <QWidget>
#include<QTextEdit>


namespace Ui {
class jzys2_widget;
}

class jzys2_widget : public QWidget
{
    Q_OBJECT

public:
    explicit jzys2_widget(QWidget *parent = 0);
    ~jzys2_widget();
    int num1=0;                       //变量
    int num2=0;
    int operat_flag1=0;
    int operat_flag2=0;
    int result=0;
    int operat=0;
private:
    Ui::jzys2_widget *ui;
    void calculate(int n1,int n2);            //函数声明
    void compare(int n1,int n2);


};

#endif // JZYS2_WIDGET_H
