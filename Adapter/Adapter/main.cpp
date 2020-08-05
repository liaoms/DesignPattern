#include <QCoreApplication>
#include "Adepter.h"
#include "OldLibrary.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //老接口，返回的是字符串格式的数字
    OldLibrary old("123");
    qDebug() << old.getResult();


    //新接口需求为返回数字类型，并乘以10倍数，同时接口函数变更为calculate
    //通过适配器做转接，复用老接口的算法
    OldLibrary old1("123");
    NewLibrary* newImp = new Adepter(&old);
    qDebug() << newImp->calculate();


    return a.exec();
}
