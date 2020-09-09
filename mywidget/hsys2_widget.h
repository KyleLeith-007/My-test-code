#ifndef HSYS2_WIDGET_H
#define HSYS2_WIDGET_H

#include <QWidget>

namespace Ui {
class hsys2_widget;
}

class hsys2_widget : public QWidget
{
    Q_OBJECT

public:
    explicit hsys2_widget(QWidget *parent = 0);
    ~hsys2_widget();
    int flag=0;    //选择函数标志
    double x=0;            //计算变量
    double x1=0;
    double x2=0;
    double n;
    void calculate();
private:
    Ui::hsys2_widget *ui;

};

#endif // HSYS2_WIDGET_H
