#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "teacher.h"
#include "student.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT//有了这个宏，信号函数就能被moc自动来生成

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void EmitSignal();//用于触发信号用的函数

//private slots:
//    void on_pushButton_clicked();

//signals:
//    void MySignal();//信号声明，信号函数的实现本质就是去调用所关联的槽函数，所以可以不用人为生成

//public slots:
//    void MySlots();//槽函数声明

signals:
    void MySignal();//信号函数声明
    void MySignal(QString str);//重载信号函数

public slots:
    void MySlots();//槽函数声明
    void MySlots(QString str);//重载槽函数

private:
    Ui::Widget *ui;

    Teacher* tch;//发送信号的对象
    Student* stu;//接收信号的对象
};
#endif // WIDGET_H
