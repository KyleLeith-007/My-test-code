#include "widget.h"
#include "ui_widget.h"

#include<QPushButton>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
     setWindowTitle("主窗口");                                                          //主窗口
     resize(1000,600);


        connect(ui->pushButton_1,&QPushButton::clicked,this,&Widget::jzzh);           //进制转换函数调用
        connect(ui->pushButton_2,&QPushButton::clicked,this,&Widget::jzys);             //十进制四则运算函数调用
        connect(ui->pushButton_3,&QPushButton::clicked,this,&Widget::jzys2);            //进制比较，公约数公倍数等
        connect(ui->pushButton_4,&QPushButton::clicked,this,&Widget::hsys);                 //十进制简单函数
        connect(ui->pushButton_5,&QPushButton::clicked,this,&Widget::hsys2);                 //一元函数，反比例函数，指数对数函数函数

}

void Widget::jzzh(){                        //进制转换函数实现
   jzzh_widget * w=new jzzh_widget();
    w->show();
    w->setWindowTitle("进制转换");

}
void Widget::jzys(){                        //十进制进制运算函数实现
   jzys_widget * w=new jzys_widget();
  w->show();
  w->setWindowTitle("十进制四则运算");

}

void Widget::jzys2(){
    jzys2_widget *x=new jzys2_widget();
    x->show();
    x->setWindowTitle("2/8/10/16进制运算及比较及公倍数公约数");
}

void Widget::hsys(){
    hsys_widget *x=new hsys_widget();
    x->show();
    x->setWindowTitle("十进制简单函数");
}

void Widget::hsys2(){
    hsys2_widget *x=new hsys2_widget();
    x->show();
    x->setWindowTitle("一元，反比例，指数对数运算");
}

Widget::~Widget()
{
    delete ui;
}
