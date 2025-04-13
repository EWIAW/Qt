#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//QApplication为应用程序类，有且只有一个
    Widget w;//实例化一个窗口对象
    w.show();//将窗口显示出来
    return a.exec();//程序进入消息循环，等待用户的输入并响应。这里main函数把控制器交给了Qt，当应用程序退出时，exec函数就会返回。
}
