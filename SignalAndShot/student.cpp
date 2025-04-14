#include "student.h"
#include <QDebug>

Student::Student(QObject *parent) : QObject(parent)
{

}

void Student::StartStudy()
{
    qDebug()<<"回到座位上学习";
}
