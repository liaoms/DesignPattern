#include <QCoreApplication>
#include "HPComputer.h"
#include "HuaWeiComputer.h"
#include "MacComputer.h"
#include "PPTSoftware.h"
#include "PsSoftware.h"
#include "QQSoftware.h"

//桥接模式：中心思想，一个系统中两个维度的东西拆开，通过各自维度的接口类中桥接，使得一个维度可以选择使用另一个维度，确保两个维度解耦

//此处电脑与软件分别为2个维度，若不采用桥接模式，则
//装有ppt的惠普电脑 、装有ps的惠普电脑、装有qq的惠普电脑
//。。。共需要m*n = 9个类

//使用桥接模式后，电脑与软件解耦，通过桥接方式使得电脑可自由设置软件

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //电脑
    Computer* HP = new HPComputer("惠普");
    Computer* HW = new HPComputer("华为");
    Computer* MAC = new HPComputer("苹果");

    //软件
    SoftWare* ppt = new PPTSoftWare("PPT");
    SoftWare* ps = new PPTSoftWare("PS");
    SoftWare* qq = new PPTSoftWare("QQ");

    //桥接
    HP->setSoftWare(ppt);
    HP->run();

    HP->setSoftWare(ps);
    HP->run();

    HP->setSoftWare(qq);
    HP->run();
    qDebug() << endl;

    HW->setSoftWare(ppt);
    HW->run();

    HW->setSoftWare(ps);
    HW->run();
    qDebug() << endl;

    MAC->setSoftWare(qq);
    MAC->run();

    return a.exec();
}
