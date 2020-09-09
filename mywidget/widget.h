#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include"jzzh_widget.h"                 //进制转换头文件
#include"jzys_widget.h"                 //十进制四则运算头文件
#include"jzys2_widget.h"                //2/8/10/16进制运算及比较头,公倍数公约数文件
#include"hsys_widget.h"                    //十进制简单函数运算头文件
#include"hsys2_widget.h"          //一元函数，反比例函数，指数对数函数函数头文件

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void jzzh(); //进制转换函数声明
void jzys();//十进制四则运算函数声明
void jzys2();//2/8/10/16进制运算及比较函数声明
void hsys();//十进制简单函数运算声明
void hsys2();  //一元函数，反比例函数，指数对数函数函数声明
private:
    Ui::Widget *ui;


};

#endif // WIDGET_H
