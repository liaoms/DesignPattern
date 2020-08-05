#include <QCoreApplication>
#include "ProxySubject.h"

//代理模式:通过代理类调用具体类功能
//代理类中可以登录远端服务器、验证登录信息等等，此过程对客户端来说透明化，是的客户端以为仅仅操作的是本地主机

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Subject* proxy = new ProxySubject("小明");    //通过代理类 ProxySubject 调用具体的实现类RealSubject 的PayGame()功能

    proxy->PlayGame();

    return a.exec();
}
