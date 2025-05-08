#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QDebug>
#include <QResizeEvent>
#include <QTimer>
#include <QProgressBar>
#include <QRegExpValidator>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pushButton->setEnabled(false);

    ui->lineEdit->setPlaceholderText("请输入姓名");
    ui->lineEdit->setClearButtonEnabled(true);

    ui->lineEdit_2->setPlaceholderText("请输入密码");
    ui->lineEdit_2->setClearButtonEnabled(true);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);

    ui->lineEdit_3->setPlaceholderText("请输入电话号码");
    ui->lineEdit_3->setClearButtonEnabled(true);
//    ui->lineEdit_3->setInputMask("000-0000-0000");
    ui->lineEdit_3->setValidator(new QRegExpValidator(QRegExp("^1\\d{10}$")));

//    timer = new QTimer(this);
//    connect(timer,&QTimer::timeout,this,&Widget::updateProgressBar);
//    timer->start(100);
//    timer = new QTimer(this);
//    connect(timer,&QTimer::timeout,this,&Widget::updateTime);
//    timer->start(1000);
//    resize(800,600);
//    ui->label->setGeometry(0,0,800,600);
//    QPixmap pixmap(":/photo");
//    ui->label->setPixmap(pixmap);
//    ui->label->setScaledContents(true);//设置图片可以拉伸

//    ui->radioButton->setChecked(true);
//    ui->label->setText("你选择的性别为：男");
//    ui->radioButton_3->setEnabled(false);

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
//    ui->pushButton_add->setToolTip("这是一个增加透明的的按钮");
//    ui->pushButton_add->setToolTipDuration(3000);
//    ui->pushButton_sub->setToolTip("这是一个减少透明度的按钮");
//    ui->pushButton_sub->setToolTipDuration(3000);

//    ui->lineEdit->setFocusPolicy(Qt::StrongFocus);
//    ui->lineEdit_2->setFocusPolicy(Qt::TabFocus);
//    ui->lineEdit_3->setFocusPolicy(Qt::StrongFocus);
//    ui->lineEdit_4->setFocusPolicy(Qt::StrongFocus);

//    QIcon icon(":/photo.jpg");
//    ui->pushButton_target->setText("");
//    ui->pushButton_target->setIcon(icon);
//    ui->pushButton_target->setIconSize(QSize(100,100));

//    ui->pushButton_up->setText("");
//    ui->pushButton_down->setText("");
//    ui->pushButton_left->setText("");
//    ui->pushButton_right->setText("");

//    QIcon icon_up(":/up.png");
//    QIcon icon_down(":/down.png");
//    QIcon icon_left(":/left.png");
//    QIcon icon_right(":/right.png");
//    ui->pushButton_up->setIcon(icon_up);
//    ui->pushButton_down->setIcon(icon_down);
//    ui->pushButton_left->setIcon(icon_left);
//    ui->pushButton_right->setIcon(icon_right);

//    ui->pushButton_up->setIconSize(QSize(50,50));
//    ui->pushButton_down->setIconSize(QSize(50,50));
//    ui->pushButton_left->setIconSize(QSize(50,50));
//    ui->pushButton_right->setIconSize(QSize(50,50));

//    ui->pushButton_up->setShortcut(QKeySequence("w"));
//    ui->pushButton_down->setShortcut(QKeySequence("s"));
//    ui->pushButton_left->setShortcut(QKeySequence("a"));
//    ui->pushButton_right->setShortcut(QKeySequence("d"));
}

//void Widget::resizeEvent(QResizeEvent *event)
//{
//    ui->label->setGeometry(0,0,event->size().width(),event->size().height());
//    qDebug()<<event->size();
//}

Widget::~Widget()
{
    delete ui;
}

//void Widget::updateProgressBar()
//{
//    int value = ui->progressBar->value();
//    if(value >= 100)
//    {
//        timer->stop();
//        return;
//    }
//    ui->progressBar->setValue(value+1);
//}

//void Widget::updateTime()
//{
//    int value = ui->lcdNumber->intValue();
//    if(value <= 0)
//    {
//        timer->stop();
//        return;
//    }
//    ui->lcdNumber->display(value-1);
//}


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

//void Widget::on_pushButton_add_clicked()
//{
//    float opacity = this->windowOpacity();
//    if(opacity >= 1.0)
//    {
//        return;
//    }

//    opacity += 0.1;
//    this->setWindowOpacity(opacity);
//}

//void Widget::on_pushButton_sub_clicked()
//{
//    float opacity = this->windowOpacity();
//    if(opacity <= 0.5)
//    {
//        return;
//    }

//    opacity -= 0.1;
//    this->setWindowOpacity(opacity);
//}

//void Widget::on_pushButton_light_clicked()
//{
//    this->setStyleSheet("background-color:#f3f3f3");
//    ui->textEdit->setStyleSheet("background-color:#fff;color:#000;");
//    ui->pushButton_light->setStyleSheet("color:#000");
//    ui->pushButton_dark->setStyleSheet("color:#000");
//}

//void Widget::on_pushButton_dark_clicked()
//{
//    this->setStyleSheet("background-color:#333");
//    ui->textEdit->setStyleSheet("background-color:#333;color:#fff;");
//    ui->pushButton_light->setStyleSheet("color:#fff");
//    ui->pushButton_dark->setStyleSheet("color:#fff");
//}

//void Widget::on_pushButton_up_clicked()
//{
//    const QRect& rect = ui->pushButton_target->geometry();
//    ui->pushButton_target->setGeometry(rect.x(),rect.y()-5,rect.width(),rect.height());
//}

//void Widget::on_pushButton_down_clicked()
//{
//    const QRect& rect = ui->pushButton_target->geometry();
//    ui->pushButton_target->setGeometry(rect.x(),rect.y()+5,rect.width(),rect.height());
//}

//void Widget::on_pushButton_left_clicked()
//{
//    const QRect& rect = ui->pushButton_target->geometry();
//    ui->pushButton_target->setGeometry(rect.x()-5,rect.y(),rect.width(),rect.height());
//}

//void Widget::on_pushButton_right_clicked()
//{
//    const QRect& rect = ui->pushButton_target->geometry();
//    ui->pushButton_target->setGeometry(rect.x()+5,rect.y(),rect.width(),rect.height());
//}

//void Widget::on_radioButton_clicked()
//{
//    ui->label->setText("你选择的性别为：男");
//}

//void Widget::on_radioButton_2_clicked()
//{
//    ui->label->setText("你选择的性别为：女");
//}

//void Widget::on_radioButton_3_clicked()
//{
//    ui->label->setText("你选择的性别为：其他");
//}

//void Widget::on_radioButton_clicked()
//{
//    qDebug()<<"clicked";
//}

//void Widget::on_radioButton_2_pressed()
//{
//    qDebug()<<"pressed";
//}

//void Widget::on_radioButton_3_released()
//{
//    qDebug()<<"released";
//}

//void Widget::on_radioButton_4_toggled(bool checked)
//{
//    if(checked == true)
//    {
//        qDebug()<<"true";
//    }
//    else
//    {
//        qDebug()<<"false";
//    }
//}

void Widget::on_pushButton_clicked()
{
    QString str = ui->radioButton->isChecked()?"男":"女";
    qDebug()<<"姓名："<<ui->lineEdit->text()
           <<"密码："<<ui->lineEdit_2->text()
          <<"性别："<<str
         <<"电话："<<ui->lineEdit_3->text();
}

void Widget::on_lineEdit_3_textEdited(const QString &arg1)
{
    qDebug()<<arg1;
    QString tmp = arg1;
    int pos = 0;
    if(ui->lineEdit_3->validator()->validate(tmp,pos) == QValidator::Acceptable)
    {
        ui->pushButton->setEnabled(true);
    }
    else
    {
        ui->pushButton->setEnabled(false);
    }
}
