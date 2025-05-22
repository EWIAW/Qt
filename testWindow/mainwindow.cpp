#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTextEdit>
#include <QFileDialog>
#include <QDebug>
#include <iostream>
#include <fstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("我的记事本");

    //创建菜单栏
    QMenuBar* menuBar = new QMenuBar(this);
    this->setMenuBar(menuBar);

    //创建菜单
    QMenu* menu = new QMenu("文件");
    menuBar->addMenu(menu);

    //创建菜单项
    QAction* action1 = new QAction("保存");
    QAction* action2 = new QAction("加载");
    menu->addAction(action1);
    menu->addAction(action2);

    _edit = new QTextEdit(this);
    this->setCentralWidget(_edit);
    _edit->setPlaceholderText("此处编写⽂本内容...");

    connect(action1,&QAction::triggered,this,&MainWindow::save);
    connect(action2,&QAction::triggered,this,&MainWindow::load);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::save()
{
    QFileDialog* dialog = new QFileDialog(this);
    QString fileName = dialog->getSaveFileName(this,"保存文件","E:");
    qDebug()<<"filename:"<<fileName;

    std::ofstream file(fileName.toStdString().c_str());
    if(!file.is_open())
    {
        qDebug()<<"文件保存失败";
        return;
    }
    const QString& text = _edit->toPlainText();
    file<<text.toStdString();
    file.close();
}

void MainWindow::load()
{
    QFileDialog* dialog = new QFileDialog(this);
    QString fileName = dialog->getOpenFileName(this,"加载文件","E:");
    qDebug()<<"filename:"<<fileName;

    std::ifstream file(fileName.toStdString().c_str());
    if(!file.is_open())
    {
        qDebug()<<"文件加载失败";
        return;
    }

    std::string content;
    std::string line;
    while(std::getline(file,line))
    {
        content += line;
        content += '\n';
    }
    file.close();
    QString text = QString::fromStdString(content);
    _edit->setPlainText(text);
}
