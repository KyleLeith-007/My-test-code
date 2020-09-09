#ifndef JINZHI_WIDGET_H
#define JINZHI_WIDGET_H

#include <QWidget>

namespace Ui {
class jinzhi_widget;
}

class jinzhi_widget : public QWidget
{
    Q_OBJECT

public:
    explicit jinzhi_widget(QWidget *parent = 0);
    ~jinzhi_widget();

private:
    Ui::jinzhi_widget *ui;
};

#endif // JINZHI_WIDGET_H
