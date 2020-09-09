#include "jzys_widget.h"
#include "ui_jzys_widget.h"
#include<QTextEdit>
#include<QPushButton>
#include<qmath.h>
#include<QStack>
#include<QVector>


jzys_widget::jzys_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::jzys_widget)
{
    ui->setupUi(this);






    connect(ui->pushButton_0,&QPushButton::clicked,this,&jzys_widget::button_0_clicked);                   //按键信号与槽
    connect(ui->pushButton_1,&QPushButton::clicked,this,&jzys_widget::button_1_clicked);
    connect(ui->pushButton_2,&QPushButton::clicked,this,&jzys_widget::button_2_clicked);
    connect(ui->pushButton_3,&QPushButton::clicked,this,&jzys_widget::button_3_clicked);
    connect(ui->pushButton_4,&QPushButton::clicked,this,&jzys_widget::button_4_clicked);
    connect(ui->pushButton_5,&QPushButton::clicked,this,&jzys_widget::button_5_clicked);
    connect(ui->pushButton_6,&QPushButton::clicked,this,&jzys_widget::button_6_clicked);
    connect(ui->pushButton_7,&QPushButton::clicked,this,&jzys_widget::button_7_clicked);
    connect(ui->pushButton_8,&QPushButton::clicked,this,&jzys_widget::button_8_clicked);
    connect(ui->pushButton_9,&QPushButton::clicked,this,&jzys_widget::button_9_clicked);
    connect(ui->pushButton_jia,&QPushButton::clicked,this,&jzys_widget::button_jia_clicked);
    connect(ui->pushButton_jian,&QPushButton::clicked,this,&jzys_widget::button_jian_clicked);
    connect(ui->pushButton_cheng,&QPushButton::clicked,this,&jzys_widget::button_cheng_clicked);
    connect(ui->pushButton_chu,&QPushButton::clicked,this,&jzys_widget::button_chu_clicked);
    connect(ui->pushButton_dengyu,&QPushButton::clicked,this,&jzys_widget::button_dengyu_clicked);
    connect(ui->pushButton_quanqing,&QPushButton::clicked,this,&jzys_widget::button_quanqing_clicked);
    connect(ui->pushButton_tuige,&QPushButton::clicked,this,&jzys_widget::button_tuige_clicked); 
    connect(ui->pushButton_zkh,&QPushButton::clicked,this,&jzys_widget::button_zkh_clicked);
    connect(ui->pushButton_ykh,&QPushButton::clicked,this,&jzys_widget::button_ykh_clicked);
    connect(ui->pushButton_dian,&QPushButton::clicked,this,&jzys_widget::button_dian_clicked);

}

    void jzys_widget::button_0_clicked()
    {
       nows ='0';
       shizi.push_back(nows);                                      //把0放入容器尾部
       input +='0';
       lens++;
       ui->textEdit->setText(input);
    }


    void jzys_widget::button_1_clicked()
    {
        nows ='1';
        shizi.push_back(nows);                                                   //把1放入容器尾部
        input +='1';
        lens++;
        ui->textEdit->setText(input);

    }

    void jzys_widget::button_2_clicked()
    {

        nows ='2';
        shizi.push_back(nows);                                                   //把2放入容器尾部
        input +='2';
        lens++;
         ui->textEdit->setText(input);

    }

    void jzys_widget::button_3_clicked()
    {

        nows ='3';
        shizi.push_back(nows);                                               //把3放入容器尾部
        input +='3';
        lens++;
         ui->textEdit->setText(input);

    }

    void jzys_widget::button_4_clicked()
    {

        nows ='4';
        shizi.push_back(nows);                                         //把4放入容器尾部
        input +='4';
        lens++;
         ui->textEdit->setText(input);

    }

    void jzys_widget::button_5_clicked()
    {

        nows ='5';
        shizi.push_back(nows);                                      //把5放入容器尾部
        input +='5';
        lens++;
         ui->textEdit->setText(input);

    }


    void jzys_widget::button_6_clicked()
    {
        nows ='6';
        shizi.push_back(nows);                                          //把6放入容器尾部
        input +='6';
        lens++;
         ui->textEdit->setText(input);

    }

    void jzys_widget::button_7_clicked()
    {
        nows ='7';
        shizi.push_back(nows);                                             //把7放入容器尾部
        input +='7';
        lens++;
         ui->textEdit->setText(input);
    }

    void jzys_widget::button_8_clicked()
    {
        nows ='8';
        shizi.push_back(nows);                                            //把8放入容器尾部
        input +='8';
        lens++;
         ui->textEdit->setText(input);
    }

    void jzys_widget::button_9_clicked()
    {
        nows ='9';
        shizi.push_back(nows);                                          //把9放入容器尾部
        input +='9';
        lens++;
         ui->textEdit->setText(input);
    }


    void jzys_widget::button_jia_clicked()
    {
        nows ='+';
        shizi.push_back(nows);                                           //把+放入容器尾部
        input +='+';
        lens++;
         ui->textEdit->setText(input);
    }

    void jzys_widget::button_jian_clicked()
    {
        nows ='-';
        shizi.push_back(nows);                                            //把-放入容器尾部
        input +='-';
        lens++;
         ui->textEdit->setText(input);
    }

    void jzys_widget::button_cheng_clicked()
    {
        nows ='*';
        shizi.push_back(nows);                                              //把*放入容器尾部
        input +='*';
        lens++;
         ui->textEdit->setText(input);
    }

    void jzys_widget::button_chu_clicked()
    {
        nows ='/';
        shizi.push_back(nows);                                               //把/放入容器尾部
        input +='/';
        lens++;
         ui->textEdit->setText(input);
    }

    void jzys_widget::button_dian_clicked()
    {
        nows ='.';
        shizi.push_back(nows);                                                //把.放入容器尾部
        input +='.';
        lens++;
         ui->textEdit->setText(input);
    }

    void jzys_widget::button_zkh_clicked()
    {
        nows ='(';
        shizi.push_back(nows);                                                //把(放入容器尾部
        input +='(';
        lens++;
        zuo++;
         ui->textEdit->setText(input);
    }

    void jzys_widget::button_ykh_clicked()
    {
        nows =')';
        shizi.push_back(nows);                                                      //把)放入容器尾部
        input +=')';
        lens++;
        you++;
         ui->textEdit->setText(input);
    }

    void jzys_widget::button_tuige_clicked()
    {
        shizi.erase(shizi.end() - 1 );
        lens--;
        input =input.left(input.length()-1);                                          //减去一字符
         ui->textEdit->setText(input);
    }

    void jzys_widget::button_quanqing_clicked()                                           //清空
    {
        input="";
         ui->textEdit->setText(input);

                  zuo = 0;
                  you = 0;
                  lens = 0;
                  //hh=0;
                  mark=0;;
                 // flat=false;
                  shizi.clear();

    }

    void jzys_widget::button_dengyu_clicked()                                            //等于号
    {
        nows = '=';
        shizi.push_back(nows);
        /*if (hh == 0)
        {
            hh = 1;
            shizi.push_back(' ');
        }*/
        lens++;
        input += '=';
         ui->textEdit->setText(input);

        int i, j;
        double rs;
        if (zuo != you)
        {
            input=input+"=Error";
             ui->textEdit->setText(input);
        }
        else
            while (zuo > 0)
            {
            for (i = 0; i < lens; i++)
                if (shizi[i] == '(')
                {

                for (j = i; j <= lens; j++)
                    if (shizi[j] == ')')
                    {

                    calculate(i + 1, j-1);                                               //计算括号里的内容

                    break;
                    }

                break;
                }
            zuo--;
            you--;
            }

        if (zuo == 0 && you == 0)
            rs = calculate(0, lens);
        input=input+QString::number(rs);
         ui->textEdit->setText(input);


    }

    double jzys_widget::calculate(int x, int y)
    {
        int starts, start;                        //起点
        start = x;
        mark = x;                                //数字的结尾
        double num1, num2, num3;

        num1 = number1(start, y);                //初始化num1
        start = mark;
        starts = start;                              //最初的起点


        while (mark < y)
        {

            start ++;
            num2 = number1(start, y);
            start = mark;

            if (shizi[start] == '*' || shizi[start] == '/')
            {
                start++;
                num2 = panduan(start , num2, y);
                start = mark;
            }


                if (shizi[starts] == '+')
                    num1 = num1 + num2;
                else if (shizi[starts] == '-')
                        num1 = num1 - num2;
                else if (shizi[starts] == '*')
                            num1 = num1 * num2;
                else if (shizi[starts] == '/')
                                num1 = num1 /(int) num2;
                else starts = mark;                    //变更初始符号

                 num3 = num1;

            if (shizi[mark + 1] == '='||shizi[mark]=='=')
                break;

        }

        if (zuo!=0)
            solve(x-1, y+1, num3);

        return num3;
    }

    double jzys_widget::number1(int start, int end)
    {


        string num = "";
        double temp;
        while ((shizi[start] >= '0'&&shizi[start]<='9') || shizi[start] == '.')
        {
            num += shizi[start];
            start++;                //后一个字符
            mark = start;
                                  //记录下数字d后一个的位置
        }
        temp = atof(num.c_str());        //转double



        return temp;

    }

    double jzys_widget::panduan(int start, double number, int y)
    {
        double num3;
        if (shizi[start-1] == '*')             //前一个符号
        {
            num3 = number1(start, y);
            start = mark;
            num3 = number*num3;
        }
        else
        {
            num3 = number1(start, y);
            start = mark;
            num3 = number / (int)num3;
        }

        if (shizi[start] == '*' || shizi[start] == '/')
            num3 = panduan(start+1, num3,y);

        return num3;
    }

    void jzys_widget::solve(int x, int y, double num)
    {
        QString b=QString::number(num);

        QByteArray cpath = b.toLocal8Bit();
        char*buffer = cpath.data();

        int len;
        len = strlen(buffer);
        shizi.erase(shizi.begin() + x, shizi.begin() + y+1);
        lens = lens - y + x;

        for (int i = 0; i < len; i++)
        {
            shizi.insert(shizi.begin() + x, buffer[i]);
            lens++;
            x++;
        }

        return ;
    }





jzys_widget::~jzys_widget()
{
    delete ui;
}



