#include "jzzh_widget.h"
#include "ui_jzzh_widget.h"
#include<QDebug>
#include<QString>

jzzh_widget::jzzh_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::jzzh_widget)
{
    ui->setupUi(this);




    connect(ui->pushButton8,&QPushButton::clicked,[=](){                   //八进制转换为其他进制
           QString a1=ui->lineEdit_8->text();
           bool ok;
           int val1=a1.toInt(&ok,8);
           a1=a1.setNum(val1,2);
           ui->lineEdit_2->setText(a1);
           a1=a1.setNum(val1,10);
           ui->lineEdit->setText(a1);
           a1=a1.setNum(val1,16);
           ui->lineEdit_16->setText(a1);

           });




    connect(ui->pushButton16,&QPushButton::clicked,[=](){                   //十六进制转换为其他进制
        QString a1=ui->lineEdit_16->text();
        bool ok;
        int val1=a1.toInt(&ok,16);
        a1=a1.setNum(val1,2);
        ui->lineEdit_2->setText(a1);
        a1=a1.setNum(val1,10);
        ui->lineEdit->setText(a1);
        a1=a1.setNum(val1,8);
        ui->lineEdit_8->setText(a1);

           });

     connect(ui->pushButton10,&QPushButton::clicked,[=](){                   //十进制转换为其他进制


         QString a1=ui->lineEdit->text();
         bool ok;
         int val1=a1.toInt(&ok,10);
         a1=a1.setNum(val1,2);
         ui->lineEdit_2->setText(a1);
         a1=a1.setNum(val1,8);
         ui->lineEdit_8->setText(a1);
         a1=a1.setNum(val1,16);
         ui->lineEdit_16->setText(a1);

         });



        connect(ui->pushButton2,&QPushButton::clicked,[=](){             //二进制转换为其他进制

            QString a1=ui->lineEdit_2->text();
            bool ok;
            int val1=a1.toInt(&ok,2);
            a1=a1.setNum(val1,8);
            ui->lineEdit_8->setText(a1);
            a1=a1.setNum(val1,10);
            ui->lineEdit->setText(a1);
            a1=a1.setNum(val1,16);
            ui->lineEdit_16->setText(a1);

     });




}

jzzh_widget::~jzzh_widget()
{
    delete ui;
}
