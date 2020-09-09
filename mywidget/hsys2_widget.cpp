#include "hsys2_widget.h"
#include "ui_hsys2_widget.h"
#include<qmath.h>
#include<math.h>
hsys2_widget::hsys2_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hsys2_widget)
{
    ui->setupUi(this);

    connect(ui->pushButton,&QPushButton::clicked,this,&hsys2_widget::calculate);      //点击运算按钮
    connect(ui->pushButton_2,&QPushButton::clicked,[=](){           //点击清空按钮
         flag=0;
         x=0;
         x1=0;
         x2=0;
         n=0;
         ui->lineEdit11->setText("");
         ui->lineEdit12->setText("");
         ui->lineEdit13->setText("");
         ui->lineEdit14->setText("");
         ui->lineEdit21->setText("");
         ui->lineEdit22->setText("");
         ui->lineEdit23->setText("");
         ui->lineEdit24->setText("");
         ui->lineEdit25->setText("");
         ui->lineEdit26->setText("");
         ui->lineEdit27->setText("");
         ui->lineEdit31->setText("");
         ui->lineEdit32->setText("");
         ui->lineEdit33->setText("");
         ui->lineEdit41->setText("");
         ui->lineEdit42->setText("");

         ui->lineEdit43->setText("");
         ui->lineEdit51->setText("");
         ui->lineEdit52->setText("");
         ui->lineEdit53->setText("");


    });
    connect(ui->radioButton_1,&QRadioButton::clicked,[=](){           //一元一次函数
        flag=0;

    });

    connect(ui->radioButton_2,&QRadioButton::clicked,[=](){           //一元二次函数
        flag=1;


        //ui->lineEdit14->setText(QString::number(n4));
    });

    connect(ui->radioButton_3,&QRadioButton::clicked,[=](){           //反比例函数
        flag=2;

    });


    connect(ui->radioButton_4,&QRadioButton::clicked,[=](){           //指数函数
        flag=3;

     });
    connect(ui->radioButton_5,&QRadioButton::clicked,[=](){           //对数函数
        flag=4;

    });



}

    hsys2_widget::~hsys2_widget()
    {
        delete ui;
    }

void hsys2_widget::calculate(){                                    //计算函数
    if(flag==0){
        double n1=ui->lineEdit11->text().toDouble();
        double n2=ui->lineEdit12->text().toDouble();
        double n3=ui->lineEdit13->text().toDouble();
        double n4=n3-n2;
        x=n4/n1;

        ui->lineEdit14->setText(QString::number(x));
    }
    else if(flag==1){
        double n1=ui->lineEdit21->text().toDouble();
        double n2=ui->lineEdit22->text().toDouble();
        double n3=ui->lineEdit23->text().toDouble();
        double n4=ui->lineEdit24->text().toDouble();
        double n5=n3-n4;
         n=(n2*n2)-4*n1*n5;
        if(n<0){
            ui->lineEdit27->setText("无实数根");
        }
        else{
             x1=((-1)*n2+sqrt(n))/(2*n1);
           ui->lineEdit25->setText(QString::number(x1));
             x2=((-1)*n2-sqrt(n))/(2*n1);
            ui->lineEdit26->setText(QString::number(x2));
        }
    }

    else if(flag==2){
        double n1=ui->lineEdit31->text().toDouble();

        double n3=ui->lineEdit32->text().toDouble();
         x=n1/n3;
        ui->lineEdit33->setText(QString::number(x));
    }
    else if(flag==3){
            double n1=ui->lineEdit41->text().toDouble();

            double n3=ui->lineEdit42->text().toDouble();
            x=qLn(n3)/qLn(n1);
            ui->lineEdit43->setText(QString::number(x));
        }
        else {
            double n1=ui->lineEdit51->text().toDouble();

            double n3=ui->lineEdit52->text().toDouble();
            double temp1=1;
            for(int i=0;i<n3;i++){
                temp1=temp1*n1;
            }
             x=temp1;

           ui->lineEdit53->setText(QString::number(x));
        }
    }




