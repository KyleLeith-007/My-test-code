#ifndef SUBWIDGET_H
#define SUBWIDGET_H

#include <QWidget>

namespace Ui {
class subwidget;
}

class subwidget : public QWidget
{
    Q_OBJECT

public:
    explicit subwidget(QWidget *parent = 0);
    ~subwidget();




private:
    Ui::subwidget *ui;
};

#endif // SUBWIDGET_H
