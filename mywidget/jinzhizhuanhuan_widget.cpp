#include "jinzhizhuanhuan_widget.h"
#include "ui_jinzhizhuanhuan_widget.h"

subwidget::subwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::subwidget)
{
    ui->setupUi(this);

}



subwidget::~subwidget()
{
    delete ui;
}
