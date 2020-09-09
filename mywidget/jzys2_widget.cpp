#include "jzys2_widget.h"
#include "ui_jzys2_widget.h"
#include<QTextEdit>
#include<QPushButton>
#include<qmath.h>
#include<QRegExp>
#include<QDebug>
jzys2_widget::jzys2_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::jzys2_widget)
{
    ui->setupUi(this);


    connect(ui->radioButton,&QRadioButton::clicked,[=](){            //操作数1二进制输入限制
        QRegExp rx("[0-1]{8}");
        QRegExpValidator *val=new QRegExpValidator(rx,this);
        ui->lineEdit->setValidator(val);

    });
    connect(ui->radioButton_2,&QRadioButton::clicked,[=](){         //操作数1十六进制输入限制
        operat_flag1=1;
        QRegExp rx2("[a-fA-F0-9]{8}");
        QRegExpValidator *val2=new QRegExpValidator(rx2,this);
        ui->lineEdit->setValidator(val2);

    });

    connect(ui->radioButton_7,&QRadioButton::clicked,[=](){         //操作数1十进制
        operat_flag1=3;
        QRegExp rx7("[0-9]{8}");
        QRegExpValidator *val7=new QRegExpValidator(rx7,this);
        ui->lineEdit->setValidator(val7);

    });

    connect(ui->radioButton_5,&QRadioButton::clicked,[=](){         //操作数1八进制输入限制
        operat_flag1=2;
        QRegExp rx5("[a-fA-F0-7]{8}");
        QRegExpValidator *val5=new QRegExpValidator(rx5,this);
        ui->lineEdit->setValidator(val5);

    });

    connect(ui->radioButton_3,&QRadioButton::clicked,[=](){            //操作数2二进制输入限制
        QRegExp rx3("[0-1]{8}");
        QRegExpValidator *val3=new QRegExpValidator(rx3,this);
        ui->lineEdit_2->setValidator(val3);

    });
    connect(ui->radioButton_4,&QRadioButton::clicked,[=](){             //操作数2十六进制输入限制
        operat_flag2=1;
        QRegExp rx4("[a-fA-F0-9]{8}");
        QRegExpValidator *val4=new QRegExpValidator(rx4,this);
        ui->lineEdit_2->setValidator(val4);

    });

    connect(ui->radioButton_6,&QRadioButton::clicked,[=](){             //操作数2八进制输入限制
        operat_flag2=2;
        QRegExp rx6("[a-fA-F0-7]{8}");
        QRegExpValidator *val6=new QRegExpValidator(rx6,this);
        ui->lineEdit_2->setValidator(val6);

    });

    connect(ui->radioButton_8,&QRadioButton::clicked,[=](){             //操作数2十进制
        operat_flag2=3;
        QRegExp rx8("[0-9]{8}");
        QRegExpValidator *val8=new QRegExpValidator(rx8,this);
        ui->lineEdit_2->setValidator(val8);

    });

    connect(ui->pushButton_jia,&QPushButton::clicked,[=](){                 //加号运算符
        operat=1;
        if(operat_flag1==0){
        bool ok;
        int dec=ui->lineEdit->text().toInt(&ok,2);
        //qDebug()<<dec;
        num1=dec;
        }
        else
            if(operat_flag1==1){
            bool ok;
            int hex=ui->lineEdit->text().toInt(&ok,16);
           //qDebug()<<hex;
            num1=hex;
        }
        else if(operat_flag1==2) {
                bool ok;
                int hex=ui->lineEdit->text().toInt(&ok,8);
               //qDebug()<<hex;
                num1=hex;
            }
            else  {
                bool ok;
                int hex=ui->lineEdit->text().toInt(&ok,10);
                num1=hex;
            }

    });

    connect(ui->pushButton_jian,&QPushButton::clicked,[=](){           //减号运算符
        operat=2;
        if(operat_flag1==0){
        bool ok;
        int dec=ui->lineEdit->text().toInt(&ok,2);
        //qDebug()<<dec;
        num1=dec;
        }
        else
            if(operat_flag1==1){
            bool ok;
            int hex=ui->lineEdit->text().toInt(&ok,16);
           //qDebug()<<hex;
            num1=hex;
        }
        else if(operat_flag1==2){
                bool ok;
                int hex=ui->lineEdit->text().toInt(&ok,8);
               //qDebug()<<hex;
                num1=hex;
            }
            else  {
                bool ok;
                int hex=ui->lineEdit->text().toInt(&ok,10);
                num1=hex;
            }

    });


    connect(ui->pushButton_cheng,&QPushButton::clicked,[=](){          //乘法运算符
        operat=3;
        if(operat_flag1==0){
        bool ok;
        int dec=ui->lineEdit->text().toInt(&ok,2);
        //qDebug()<<dec;
        num1=dec;
        }
        else
            if(operat_flag1==1){
            bool ok;
            int hex=ui->lineEdit->text().toInt(&ok,16);
           //qDebug()<<hex;
            num1=hex;
        }
        else if(operat_flag1==2){
                bool ok;
                int hex=ui->lineEdit->text().toInt(&ok,8);
               //qDebug()<<hex;
                num1=hex;
            }
            else  {
                bool ok;
                int hex=ui->lineEdit->text().toInt(&ok,10);
                num1=hex;
            }

    });

    connect(ui->pushButton_chu,&QPushButton::clicked,[=](){                  //除法运算符
        operat=4;
        if(operat_flag1==0){
        bool ok;
        int dec=ui->lineEdit->text().toInt(&ok,2);
        //qDebug()<<dec;
        num1=dec;
        }
        else
            if(operat_flag1==1){
            bool ok;
            int hex=ui->lineEdit->text().toInt(&ok,16);
           //qDebug()<<hex;
            num1=hex;
        }
        else if(operat_flag1==2){
                bool ok;
                int hex=ui->lineEdit->text().toInt(&ok,8);
               //qDebug()<<hex;
                num1=hex;
            }
            else  {
                bool ok;
                int hex=ui->lineEdit->text().toInt(&ok,10);
                num1=hex;
            }

    });

    connect(ui->pushButton_bijiao,&QPushButton::clicked,[=](){                  //比较运算符

        if(operat_flag1==0){
        bool ok;
        int dec=ui->lineEdit->text().toInt(&ok,2);
        //qDebug()<<dec;
        num1=dec;
        }
        else
            if(operat_flag1==1){
            bool ok;
            int hex=ui->lineEdit->text().toInt(&ok,16);
           //qDebug()<<hex;
            num1=hex;
        }
        else if(operat_flag1==2){
                bool ok;
                int hex=ui->lineEdit->text().toInt(&ok,8);
               //qDebug()<<hex;
                num1=hex;
            }
            else  {
                bool ok;
                int hex=ui->lineEdit->text().toInt(&ok,10);
                num1=hex;
            }

    });


    connect(ui->pushButton_gongbeishu,&QPushButton::clicked,[=](){            //公倍数运算符
        operat=5;
        if(operat_flag1==0){
        bool ok;
        int dec=ui->lineEdit->text().toInt(&ok,2);
        //qDebug()<<dec;
        num1=dec;
        }
        else
            if(operat_flag1==1){
            bool ok;
            int hex=ui->lineEdit->text().toInt(&ok,16);
           //qDebug()<<hex;
            num1=hex;
        }
        else if(operat_flag1==2){
                bool ok;
                int hex=ui->lineEdit->text().toInt(&ok,8);
               //qDebug()<<hex;
                num1=hex;
            }
            else  {
                bool ok;
                num1=ui->lineEdit->text().toInt(&ok,10);
            }

    });

    connect(ui->pushButton_gongyueshu,&QPushButton::clicked,[=](){            //公约数运算符
        operat=6;
        if(operat_flag1==0){
        bool ok;
        int dec=ui->lineEdit->text().toInt(&ok,2);
        //qDebug()<<dec;
        num1=dec;
        }
        else
            if(operat_flag1==1){
            bool ok;
            int hex=ui->lineEdit->text().toInt(&ok,16);
           //qDebug()<<hex;
            num1=hex;
        }
        else if(operat_flag1==2){
                bool ok;
                int hex=ui->lineEdit->text().toInt(&ok,8);
               //qDebug()<<hex;
                num1=hex;
            }
            else  {
                bool ok;
                num1=ui->lineEdit->text().toInt(&ok,10);
            }

    });

    connect(ui->pushButton_bijiao_2,&QPushButton::clicked,[=](){            //比较大小 运算符

                if(operat_flag2==0){
                bool ok;
                int dec=ui->lineEdit_2->text().toInt(&ok,2);
                //qDebug()<<dec;
                num2=dec;
                compare(num1,num2);

                }
                else if(operat_flag2==1){
                    bool ok;
                    int hex=ui->lineEdit_2->text().toInt(&ok,16);
                    //qDebug()<<hex;
                    num2=hex;
                    compare(num1,num2);
                }
                else if(operat_flag2==2){
                    bool ok;
                    int hex=ui->lineEdit_2->text().toInt(&ok,8);
                    //qDebug()<<hex;
                    num2=hex;
                    compare(num1,num2);
                }
                 else  {
                    bool ok;
                    int hex=ui->lineEdit_2->text().toInt(&ok,10);
                    num2=hex;
                    compare(num1,num2);
                }
    });

    connect(ui->pushButton_qingkong,&QPushButton::clicked,[=](){             //清空
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");
        ui->lineEdit_6->setText("");
        ui->lineEdit_7->setText("");
        num1=0;
        num2=0;
        operat_flag1=0;
        operat_flag2=0;
        result=0;
        operat=0;
    });

    connect(ui->pushButton_yunsuan,&QPushButton::clicked,[=](){                //运算符  运算符
        if(operat_flag2==0){
        bool ok;
        int dec=ui->lineEdit_2->text().toInt(&ok,2);
        //qDebug()<<dec;
        num2=dec;
        calculate(num1,num2);

        }
        else if(operat_flag2==1){
            bool ok;
            int hex=ui->lineEdit_2->text().toInt(&ok,16);
            //qDebug()<<hex;
            num2=hex;
            calculate(num1,num2);
        }
        else if(operat_flag2==2){
            bool ok;
            int hex=ui->lineEdit_2->text().toInt(&ok,8);
            //qDebug()<<hex;
            num2=hex;
            calculate(num1,num2);
        }
        else {
           num2=ui->lineEdit_2->text().toInt();
            calculate(num1,num2);
        }
    });






}

jzys2_widget::~jzys2_widget()
{
    delete ui;
}

void jzys2_widget::compare(int n1,int n2){                  //比较函数
        if(n1<n2){
            ui->lineEdit_3->setText("<");
        }
        if(n1>n2){
            ui->lineEdit_3->setText(">");
        }
        if(n1==n2){
            ui->lineEdit_3->setText("=");
        }
    }




void jzys2_widget::calculate(int n1,int n2){                            //计算函数
     switch(operat){
     case 1:{
        result=n1+n2;
        ui->lineEdit_4->setText(QString::number(result));

        int hex=result;                           // 十进制转换为十六进制

        QString hex1=QString("%1").arg(hex,0,16,QLatin1Char(' '));
        ui->lineEdit_6->setText(hex1);

                                    // 十进制转换为二进制
         hex1=QString("%1").arg(hex,0,2,QLatin1Char(' '));
        ui->lineEdit_5->setText(hex1);
                                        //十进制转化为八进制
        hex1=QString("%1").arg(hex,0,8,QLatin1Char(' '));
       ui->lineEdit_7->setText(hex1);
    }
          break;
    case 2:{
         result=n1-n2;
         ui->lineEdit_4->setText(QString::number(result));

         int hex=result;                           // 十进制转换为十六进制
         QString hex1=QString("%1").arg(hex,0,16,QLatin1Char(' '));
         ui->lineEdit_6->setText(hex1);

                                     // 十进制转换为二进制
          hex1=QString("%1").arg(hex,0,2,QLatin1Char(' '));
         ui->lineEdit_5->setText(hex1);
         //十进制转化为八进制
         hex1=QString("%1").arg(hex,0,8,QLatin1Char(' '));
          ui->lineEdit_7->setText(hex1);

     }
         break;
     case 3:{
         result=n1*n2;
         ui->lineEdit_4->setText(QString::number(result));

         int hex=result;                           // 十进制转换为十六进制
         QString hex1=QString("%1").arg(hex,0,16,QLatin1Char(' '));
         ui->lineEdit_6->setText(hex1);

                                     // 十进制转换为二进制
          hex1=QString("%1").arg(hex,0,2,QLatin1Char(' '));
         ui->lineEdit_5->setText(hex1);
         //十进制转化为八进制
          hex1=QString("%1").arg(hex,0,8,QLatin1Char(' '));
         ui->lineEdit_7->setText(hex1);
     }
          break;
    case 4:{
         result=n1/n2;
         ui->lineEdit_4->setText(QString::number(result));

         int hex=result;                           // 十进制转换为十六进制
         QString hex1=QString("%1").arg(hex,0,16,QLatin1Char(' '));
         ui->lineEdit_6->setText(hex1);

                                     // 十进制转换为二进制
          hex1=QString("%1").arg(hex,0,2,QLatin1Char(' '));
         ui->lineEdit_5->setText(hex1);
         //十进制转化为八进制
           hex1=QString("%1").arg(hex,0,8,QLatin1Char(' '));
             ui->lineEdit_7->setText(hex1);
     }
          break;
    case 5:{
         int min;

         if(n1<n2)  min=n2;
         else min=n1;
         for(int i=min;i<=(n1)*(n2);i++){
             if((i%n1==0)&&(i%n2==0)){
                 result=i;
                 break;
             }
             else continue;
         }
          ui->lineEdit_4->setText(QString::number(result));
         int hex=result;                           // 十进制转换为十六进制
         QString hex1=QString("%1").arg(hex,0,16,QLatin1Char(' '));
         ui->lineEdit_6->setText(hex1);

                                     // 十进制转换为二进制
          hex1=QString("%1").arg(hex,0,2,QLatin1Char(' '));
         ui->lineEdit_5->setText(hex1);
         //十进制转化为八进制
          hex1=QString("%1").arg(hex,0,8,QLatin1Char(' '));
          ui->lineEdit_7->setText(hex1);
     }
         break;

    case 6:{
         int min;

         if(n1<n2)  min=n1;
         else   min=n2;
         for(int i=min;i>=1;i--){
             if((n1%i==0)&&(n2%i==0)){
                     result=i;
                     break;
         }
             else continue;
         }
          ui->lineEdit_4->setText(QString::number(result));
         int hex=result;                           // 十进制转换为十六进制
         QString hex1=QString("%1").arg(hex,0,16,QLatin1Char(' '));
         ui->lineEdit_6->setText(hex1);

                                     // 十进制转换为二进制
          hex1=QString("%1").arg(hex,0,2,QLatin1Char(' '));
         ui->lineEdit_5->setText(hex1);
         //十进制转化为八进制
          hex1=QString("%1").arg(hex,0,8,QLatin1Char(' '));
            ui->lineEdit_7->setText(hex1);
     }
         break;
}
}
