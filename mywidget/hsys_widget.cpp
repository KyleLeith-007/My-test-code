#include "hsys_widget.h"
#include "ui_hsys_widget.h"
#include<QTextEdit>
#include<QPushButton>
#include<qmath.h>
#define PI 3.14159265358979323846
hsys_widget::hsys_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hsys_widget)
{
    ui->setupUi(this);

      init_data();
    connect(ui->pushButton_0,&QPushButton::clicked,this,&hsys_widget::button_0_clicked);
    connect(ui->pushButton_1,&QPushButton::clicked,this,&hsys_widget::button_1_clicked);
    connect(ui->pushButton_2,&QPushButton::clicked,this,&hsys_widget::button_2_clicked);
    connect(ui->pushButton_3,&QPushButton::clicked,this,&hsys_widget::button_3_clicked);
    connect(ui->pushButton_4,&QPushButton::clicked,this,&hsys_widget::button_4_clicked);
    connect(ui->pushButton_5,&QPushButton::clicked,this,&hsys_widget::button_5_clicked);
    connect(ui->pushButton_6,&QPushButton::clicked,this,&hsys_widget::button_6_clicked);
    connect(ui->pushButton_7,&QPushButton::clicked,this,&hsys_widget::button_7_clicked);
    connect(ui->pushButton_8,&QPushButton::clicked,this,&hsys_widget::button_8_clicked);
    connect(ui->pushButton_9,&QPushButton::clicked,this,&hsys_widget::button_9_clicked);
    connect(ui->pushButton_dengyu,&QPushButton::clicked,this,&hsys_widget::button_dengyu_clicked);
    connect(ui->pushButton_quanqing,&QPushButton::clicked,this,&hsys_widget::button_quanqing_clicked);
    connect(ui->pushButton_tuige,&QPushButton::clicked,this,&hsys_widget::button_tuige_clicked);
    connect(ui->pushButton_fan,&QPushButton::clicked,this,&hsys_widget::button_fan_clicked);
    connect(ui->pushButton_log,&QPushButton::clicked,this,&hsys_widget::button_log_clicked);
    connect(ui->pushButton_ln,&QPushButton::clicked,this,&hsys_widget::button_ln_clicked);
    connect(ui->pushButton_sin,&QPushButton::clicked,this,&hsys_widget::button_sin_clicked);
    connect(ui->pushButton_cos,&QPushButton::clicked,this,&hsys_widget::button_cos_clicked);
    connect(ui->pushButton_tan,&QPushButton::clicked,this,&hsys_widget::button_tan_clicked);
    connect(ui->pushButton_pi,&QPushButton::clicked,this,&hsys_widget::button_pi_clicked);
    connect(ui->pushButton_pinfang,&QPushButton::clicked,this,&hsys_widget::button_pinfang_clicked);
    connect(ui->pushButton_zhengfu,&QPushButton::clicked,this,&hsys_widget::button_zhengfu_clicked);
    connect(ui->pushButton_zhimi,&QPushButton::clicked,this,&hsys_widget::button_zhimi_clicked);
}

hsys_widget::~hsys_widget()
{
    delete ui;
}



void hsys_widget::init_data(){               //十进制运算用到的参数
    num1=0;
    num2=0;
    operat_flag=0;
    zhengfu_flag=0;
}



void hsys_widget::readNum(int num){                     //将按下的按键转化成十进制数
    if(operat_flag==0&&zhengfu_flag==0) {
        num1=num1*10+num;
    }
    else if(operat_flag==0&&zhengfu_flag==1) {
        num1=-num1*10-num;
    }
    else if(operat_flag==1&&zhengfu_flag==0){
        num2=num2*10+num;
    }
    else {
        num2=-num2*10-num;
    }
}

void hsys_widget::operation(){                  //运算符运算实现
    switch(operat){

    case 5:{
        int temp1=1;
        for(int i=0;i<num2;i++){
            temp1=temp1*num1;
        }
        result=temp1;
    }
        break;

     case 7:
        result=1/num2;
        break;
     case 8:
        result=qLn(num2)/qLn(num1);
        break;
     case 9:
        num1=0;
        result=qLn(num2)/qLn(10);
        break;
    case 10:
        num1=0;
        result=sin(num2);
        break;
    case 11:
        num1=0;
        result=cos(num2);
        break;
    case 12:
        num1=0;
        result=tan(num2);
        break;


   }

    num1=result;
    num2=0;
    s=QString::number(result,'g');


}


                                                             //按键按下函数实现
void hsys_widget::button_0_clicked(){
    s+="0";
    ui->textEdit->setText(s);
    readNum(0);
}

void hsys_widget::button_1_clicked(){
    s+="1";
    ui->textEdit->setText(s);
    readNum(1);
}

void hsys_widget::button_2_clicked(){
    s+="2";
    ui->textEdit->setText(s);
    readNum(2);
}

void hsys_widget::button_3_clicked(){
    s+="3";
    ui->textEdit->setText(s);
    readNum(3);
}

void hsys_widget::button_4_clicked(){
    s+="4";
    ui->textEdit->setText(s);
    readNum(4);
}

void hsys_widget::button_5_clicked(){
    s+="5";
    ui->textEdit->setText(s);
    readNum(5);
}

void hsys_widget::button_6_clicked(){
    s+="6";
    ui->textEdit->setText(s);
    readNum(6);
}

void hsys_widget::button_7_clicked(){
    s+="7";
    ui->textEdit->setText(s);
    readNum(7);
}

void hsys_widget::button_8_clicked(){
    s+="8";
    ui->textEdit->setText(s);
    readNum(8);
}

void hsys_widget::button_9_clicked(){
    s+="9";
    ui->textEdit->setText(s);
    readNum(9);
}

void hsys_widget::button_pi_clicked(){
    s+="π";
    ui->textEdit->setText(s);
    if(operat_flag==0){
        num1=PI;

    }
    else num2=PI;

}

void hsys_widget::button_tuige_clicked(){
    s=s.left(s.length()-1);
    ui->textEdit->setText(s);

    if(operat_flag==0&&num1!=0){
        int temp=num1/10;
        num1=temp;
    }
    else if(operat_flag==1&&num2!=0) {
        int temp=num2/10;
        num2=temp;
    }
    else if(operat_flag==0&&num1==0){
        zhengfu_flag=0;
    }
     else zhengfu_flag=0;
}



void hsys_widget::button_quanqing_clicked(){
    s="";
    ui->textEdit->setText(s);
    num1=0;
    num2=0;
    operat_flag=0;
    zhengfu_flag=0;
}






void hsys_widget::button_fan_clicked(){                    //反函数
    s+="1/";
    ui->textEdit->setText(s);
    operat_flag=1;
    operat=7;
}

void hsys_widget::button_log_clicked(){                     //lon函数
    s+="log";
    ui->textEdit->setText(s);
    operat_flag=1;
    operat=8;
}

void hsys_widget::button_ln_clicked(){                         //ln 函数
    s+="ln";
    ui->textEdit->setText(s);
    operat_flag=1;
    operat=9;
}

void hsys_widget::button_sin_clicked(){                         //sin函数
    s+="sin";
    ui->textEdit->setText(s);
    operat_flag=1;
    operat=10;
}

void hsys_widget::button_cos_clicked(){                  //cos函数
    s+="cos";
    ui->textEdit->setText(s);
    operat_flag=1;
    operat=11;
}

void hsys_widget::button_tan_clicked(){                    //tan函数
    s+="tan";
    ui->textEdit->setText(s);
    operat_flag=1;
    operat=12;
}

void hsys_widget::button_zhengfu_clicked(){                   //正负
    if(operat_flag==0){
        s+="-";
        ui->textEdit->setText(s);
        zhengfu_flag=1;
    }
    else {
        s+="(-)";
        ui->textEdit->setText(s);
        zhengfu_flag=1;
    }
}



void hsys_widget::button_dengyu_clicked(){                  //等于
    if(operat_flag==0){
        ui->textEdit->setText(QString::number(num1));
    }
    else{
    operation();
    zhengfu_flag=0;

    QString a=QString::number(result,'g');
    ui->textEdit->setText(a);
    }
}


void hsys_widget::button_zhimi_clicked(){
    s+="^";
    ui->textEdit->setText(s);
    operat_flag=1;
    operat=5;
}


void hsys_widget::button_pinfang_clicked(){
    s+="^2";
    ui->textEdit->setText(s);

     num1=num1*num1;
}


