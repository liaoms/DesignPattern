#include <QCoreApplication>
#include "ConcretComponent.h"
#include "Concrete1Decorator.h"
#include "Concrete2Decorator.h"
#include "Concrete3Decorator.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ConcretComponent com;   //基础功能

    com.task();
    qDebug() << endl;

    Component* dec1 = new Concrete1Decorator(&com);  //基础功能 + 功能1(装饰上功能1)
    dec1->task();
    qDebug() << endl;

    Component* dec2 = new Concrete2Decorator(dec1); //(基础功能 + 功能1) + 功能2(装饰上功能3)
    dec2->task();
    qDebug() << endl;

    Component* dec3 = new Concrete3Decorator(&com); //(基础功能) + 功能3(装饰上功能3)
    dec3->task();

    delete dec1;
    delete dec2;
    delete dec3;

    //总结：装饰模式使得系统基本功能不需要改变，随意扩展子功能，利于版本升级

    return a.exec();
}
