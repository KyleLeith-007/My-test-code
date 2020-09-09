#ifndef HSYS_WIDGET_H
#define HSYS_WIDGET_H
#include<QPushButton>
#include <QWidget>
#include<QTextEdit>


namespace Ui {
class hsys_widget;
}

class hsys_widget : public QWidget
{
    Q_OBJECT

protected:
    Ui::hsys_widget *ui;
    double num1,num2,result;          //操作数一，操作数二，以及结果变量
    int operat;                           //运算符
    int operat_flag;
    int zhengfu_flag=0;

    QString s;
public:
    explicit hsys_widget(QWidget *parent = 0);
    ~hsys_widget();

    void operation();                     //计算函数声明
    void readNum(int num);                   //读取数字函数声明
    void init_data();                       //变量函数声明

private:
                                              //按键函数
    void button_0_clicked();

    void button_1_clicked();

    void button_2_clicked();

    void button_3_clicked();

    void button_4_clicked();

    void button_5_clicked();

    void button_6_clicked();

    void button_7_clicked();

    void button_8_clicked();

    void button_9_clicked();

    void button_sin_clicked();
    void button_cos_clicked();
    void button_tan_clicked();
    void button_ln_clicked();
    void button_log_clicked();
    void button_fan_clicked();
    void button_pi_clicked();
    void button_zhimi_clicked();
    void button_pinfang_clicked();
    void button_tuige_clicked();
    void button_quanqing_clicked();
     void button_dengyu_clicked();
     void button_zhengfu_clicked();

};

#endif // HSYS_WIDGET_H
