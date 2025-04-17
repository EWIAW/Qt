#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

//    QPushButton* btn = new QPushButton("按钮",this);
//    btn->setEnabled(false);
//    this->setWindowTitle("标题");
//    QIcon icon(":/photo.jpg");//创建窗口图标对象，并且表面在qrc文件中查找
//    this->setWindowIcon(icon);//设置图标
//    QPushButton* btn = new QPushButton(this);
//    btn->setText("按钮");
//    btn->resize(200,200);
//    btn->setCursor(QCursor(Qt::WaitCursor));
//    QPixmap pixmap(":/photo.jpg");
//    pixmap = pixmap.scaled(64,64);
//    QCursor cursor(pixmap,2,2);
//    ui->pushButton->setCursor(cursor);
    ui->pushButton_add->setToolTip("这是一个增加透明的的按钮");
    ui->pushButton_add->setToolTipDuration(3000);
    ui->pushButton_sub->setToolTip("这是一个减少透明度的按钮");
    ui->pushButton_sub->setToolTipDuration(3000);

    ui->lineEdit->setFocusPolicy(Qt::StrongFocus);
    ui->lineEdit_2->setFocusPolicy(Qt::TabFocus);
    ui->lineEdit_3->setFocusPolicy(Qt::StrongFocus);
    ui->lineEdit_4->setFocusPolicy(Qt::StrongFocus);
}

Widget::~Widget()
{
    delete ui;
}


//void Widget::on_pushButton_clicked()
//{
//    qDebug()<<"按钮被按下";
//}

//void Widget::on_pushButton_2_clicked()
//{
//    bool flag = ui->pushButton->isEnabled();
//    ui->pushButton->setEnabled(!flag);
//}

//void Widget::on_pushButton_up_clicked()
//{
//    QRect rect = ui->pushButton_target->geometry();
//    ui->pushButton_target->setGeometry(rect.x(),rect.y()-5,rect.width(),rect.height());
//}

//void Widget::on_pushButton_down_clicked()
//{
//    QRect rect = ui->pushButton_target->geometry();
//    ui->pushButton_target->setGeometry(rect.x(),rect.y()+5,rect.width(),rect.height());
//}

//void Widget::on_pushButton_right_clicked()
//{
//    QRect rect = ui->pushButton_target->geometry();
//    ui->pushButton_target->setGeometry(rect.x()+5,rect.y(),rect.width(),rect.height());
//}

//void Widget::on_pushButton_left_clicked()
//{
//    QRect rect = ui->pushButton_target->geometry();
//    ui->pushButton_target->setGeometry(rect.x()-5,rect.y(),rect.width(),rect.height());
//}

//void Widget::on_pushButton_accept_clicked()
//{
//    ui->label->setText("hhh");
//}

//void Widget::on_pushButton_reject_pressed()
//{
//    int width = this->geometry().width();
//    int height = this->geometry().height();
//    qDebug()<<width<<" "<<height;

//    int x = rand()%width;
//    int y = rand()%height;
//    qDebug()<<x<<" "<<y;
//    ui->pushButton_reject->move(x,y);
//}

void Widget::on_pushButton_add_clicked()
{
    float opacity = this->windowOpacity();
    if(opacity >= 1.0)
    {
        return;
    }

    opacity += 0.1;
    this->setWindowOpacity(opacity);
}

void Widget::on_pushButton_sub_clicked()
{
    float opacity = this->windowOpacity();
    if(opacity <= 0.5)
    {
        return;
    }

    opacity -= 0.1;
    this->setWindowOpacity(opacity);
}

void Widget::on_pushButton_light_clicked()
{
    this->setStyleSheet("background-color:#f3f3f3");
    ui->textEdit->setStyleSheet("background-color:#fff;color:#000;");
    ui->pushButton_light->setStyleSheet("color:#000");
    ui->pushButton_dark->setStyleSheet("color:#000");
}

void Widget::on_pushButton_dark_clicked()
{
    this->setStyleSheet("background-color:#333");
    ui->textEdit->setStyleSheet("background-color:#333;color:#fff;");
    ui->pushButton_light->setStyleSheet("color:#fff");
    ui->pushButton_dark->setStyleSheet("color:#fff");
}
