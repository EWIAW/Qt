#include "mypushbutton.h"
#include <QDebug>

myPushButton::myPushButton(QWidget *parent) : QPushButton(parent)
{
    qDebug()<<"我的按钮的构造函数被调用了";
}

myPushButton::~myPushButton()
{
    qDebug()<<"我的按钮的析构函数被调用了";
}

