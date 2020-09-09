#include "jinzhi_widget.h"
#include "ui_jinzhi_widget.h"

jinzhi_widget::jinzhi_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::jinzhi_widget)
{
    ui->setupUi(this);
}

jinzhi_widget::~jinzhi_widget()
{
    delete ui;
}
