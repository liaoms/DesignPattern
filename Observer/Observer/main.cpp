#include <QCoreApplication>
#include "CarObserver.h"
#include "TrafficSubject.h"
#include <QThread>

/*
* 观察者模式 - 对象间的联动
*/

/*
* 背景
* 被观察的目标对象(红绿灯)发出通行信号后，观察者(车辆做对应响应)，车辆之间无关联，红绿灯也只管发信号，不管具体的车辆
* 车辆与车辆之间无关联、车辆与红绿灯解耦，红绿灯只发信号，不管车辆行为
*/

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    TrafficSubject traffic;

    CarObserver car1("丰田");
    traffic.addObserver(&car1);  //车辆注册到交通灯系统中

    CarObserver car2("本田");
    traffic.addObserver(&car2);

    CarObserver car3("宝马");
    traffic.addObserver(&car3);

    CarObserver car4("马自达");
    traffic.addObserver(&car4);

    traffic.Notify("红灯");   //交通灯发信号

    qDebug() << endl;
    QThread::sleep(2);

    traffic.removeObserver(&car2);  //目标主题移除car2

    traffic.Notify("绿灯");


    return a.exec();
}
