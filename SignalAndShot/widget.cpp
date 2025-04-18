#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QDebug>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
//    QPushButton* btn = new QPushButton("关闭窗口",this);//创建一个按钮
//    resize(800,600);//设置窗口大小

//    connect(btn,&QPushButton::clicked,this,&QWidget::close);//将按钮信号和关闭窗口连接起来
//    connect(this,&Widget::MySignal,this,&Widget::MySlots);

//    EmitSignal();//发射信号
//    this->tch = new Teacher(this);
//    this->stu = new Student(this);

//    QPushButton* btn = new QPushButton("上课了",this);
//    btn->move(100,100);
//    connect(tch,&Teacher::MySignal,stu,&Student::StartStudy);
//    connect(btn,&QPushButton::clicked,tch,&Teacher::MySignal);
//    EmitSignal();

//    void (Widget::*Signal_ptr)(QString) = &Widget::MySignal;
//    void (Widget::*Slots_ptr)(QString) = &Widget::MySlots;

//    connect(this,Signal_ptr,this,Slots_ptr);

//    connect(this,&Widget::MySignals,this,&Widget::MySlots1);
//    connect(this,&Widget::MySignals,this,&Widget::MySlots2);
//    connect(this,&Widget::MySignals,this,&Widget::MySlots3);
//    QPushButton* btn  = new QPushButton("按钮",this);

//    EmitSignal();
    this->resize(500,500);
    QPushButton* btn = new QPushButton("关闭窗口",this);
    btn->move(200,200);

    connect(btn,&QPushButton::clicked,this,[=](){this->close();});
//    connect(btn,&QPushButton::clicked,this,&Widget::MySlots1);
}

Widget::~Widget()
{
    delete ui;
}

//void Widget::EmitSignal()
//{
//    emit MySignals();
//}

void Widget::MySlots1()
{
    qDebug()<<"MySlots1()";
}

//void Widget::MySlots2()
//{
//    qDebug()<<"MySlots2()";
//}

//void Widget::MySlots3()
//{
//    qDebug()<<"MySlots3()";
//}

//void Widget::EmitSignal()
//{
//    emit tch->MySignal();
//}

//void Widget::MySlots()
//{
//    qDebug()<<"MySlots()槽函数";
//}

//void Widget::MySlots(QString str)
//{
//    qDebug()<<"MySlots(QString str)槽函数 "<<str;
//}


//void Widget::on_pushButton_clicked()
//{
//    this->close();
//}
//void Widget::MySlots()
//{
//    qDebug()<<"我的信号和槽";
//}

//void Widget::EmitSignal()
//{
//    emit MySignal("hello Qt");
//}

//void Widget::on_pushButton_clicked()
//{
//    QWidget::close();
//}
