#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QLabel>
#include <QFont>
#include <QVideoWidget>
#include <QDebug>

#include "mypushbutton.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);//这个函数其实是将 与该widget.ui文件所关联的xml文件转换为C++的代码，然后运行这些代码，来创建控件。

//    myPushButton* mpb = new myPushButton;
//    mpb->setText("我的按钮");
//    mpb->setParent(this);

    QPushButton* btn1 = new QPushButton("按钮1",this);
    btn1->move(200,300);
    QPushButton* btn2 = new QPushButton("按钮2",this);

    qDebug()<<btn1->x()<<" "<<btn1->y();
    qDebug()<<btn2->x()<<" "<<btn2->y();

    QLabel* lb = new QLabel("hello Qt",this);
    lb->move(100,100);
//    QPushButton* btn = new QPushButton;//创建一个按钮
//    btn->setText("hello world");//在按钮上显示hello world
//    btn->setParent(this);//将按钮显示在窗口上

//    QLabel* lab = new QLabel(this);//创建一个标签
//    lab->setText("你好，世界");//设置标签内容
//    setFixedSize(1000,500);//设置窗口大小

//    QFont font("华文行楷",64);//定义个字体
//    lab->setFont(font);//设置字体

//    lab->move(0,300);
//    lab->setStyleSheet("color:red");
}

Widget::~Widget()
{
    delete ui;
//    qDebug()<<"wid的析构函数";
}

