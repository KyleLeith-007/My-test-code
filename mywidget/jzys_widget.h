#ifndef JZYS_WIDGET_H
#define JZYS_WIDGET_H
#include<QPushButton>
#include <QWidget>
#include<QTextEdit>
#include<QStack>

#include<QString>

#include <QVector>

using namespace std;

namespace Ui {
class jzys_widget;
}

class jzys_widget : public QWidget
{
    Q_OBJECT
protected:



public:
    explicit jzys_widget(QWidget *parent = 0);
    char nows;//现在对应的符号
        int zuo = 0, you = 0;//左括号和右括号
        int lens = 0;//字符串长度
        // hh=0;
        int mark;
        vector<char>shizi;//用于计算的表达式存放在这里

    ~jzys_widget();

private:
    Ui::jzys_widget *ui;


         QString input=" ";

         //bool flat=false;
         double calculate(int x, int y);                             //计算函数

         double number1(int start, int end);//

         double panduan(int start, double number, int y);

         void solve(int x, int y, double num);



    void button_0_clicked();                //按键函数
    void button_1_clicked();
    void button_2_clicked();
    void button_3_clicked();
    void button_4_clicked();
    void button_5_clicked();
    void button_6_clicked();
    void button_7_clicked();
    void button_8_clicked();
    void button_9_clicked();
    void button_tuige_clicked();
    void button_dengyu_clicked();
    void button_cheng_clicked();
    void button_chu_clicked();
    void button_jia_clicked();
    void button_jian_clicked();
    void button_quanqing_clicked();
    void button_fan_clicked();
    void button_mi_clicked();
    void button_zhi_clicked();
    void button_zhengfu_clicked();
    void button_log_clicked();
    void button_ln_clicked();
    void button_sin_clicked();
    void button_cos_clicked();
    void button_tan_clicked();
    void button_gongyueshu_clicked();
    void button_gongbeishu_clicked();
    void button_bijiao_clicked();
    void button_zkh_clicked();
    void button_ykh_clicked();
    void button_dian_clicked();





};

#endif // JZYS_WIDGET_H
