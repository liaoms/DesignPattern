#include <QCoreApplication>
#include "User.h"
#include "TVDevice.h"
#include "LightDevice.h"
#include "OpenCommand.h"
#include "CloseCommand.h"

//命令模式：中心思想，将命令发送端与命令执行端解耦

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //命令接收执行者
    Device* pTv = new TVDevice("电视机");
    Device* pLight = new LightDevice("电灯");

    //具体命名
    ICommand* pOpen = new OpenCommand;      //定义命令
    ICommand* pClose = new CloseCommand;

    //pOpen->setDevice(pTv);      //设置命令接收者
    //pClose->setDevice(pTv);

    pOpen->setDevice(pLight);      //设置命令接收者
    pClose->setDevice(pLight);

    //命令发送者
    User user;
    user.setCommand(pOpen);     //请求开命令
    user.excute();

    user.setCommand(pClose);    //请求关命令
    user.excute();

    return a.exec();
}
