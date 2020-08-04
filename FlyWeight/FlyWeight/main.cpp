#include <QCoreApplication>
#include "BookFactory.h"
#include "TechnicalBook.h"
#include <QDebug>

//享元设计模式
//中心思想：在工厂类中设置一个目标对象的容器池，从工厂获取对象时，先从容器池中获取，没有再new一个目标对象，达到对象的复用，减小系统资源开销
//例子：从图书馆获取书籍，同一本书籍可以先后供多个人借用

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    BookFactory* library = BookFactory::NewInstance();

    if(library)
    {
        Book* book1 = library->getBook("数据结构与算法");
        book1->setUser(new User("张三"));

        Book* book2 = library->getBook("数据结构与算法");
        book2->setUser(new User("李四"));

        Book* book3 = library->getBook("操作系统");
        book3->setUser(new User("王五"));

        Book* book4 = library->getBook("数据库");
        book4->setUser(new User("王麻子"));

        qDebug() << book1->userName() << " 借了 "<< book1->bookName() << book1;
        qDebug() << book2->userName() << " 借了 "<< book2->bookName() << book2;
        qDebug() << book3->userName() << " 借了 "<< book3->bookName() << book3;
        qDebug() << book4->userName() << " 借了 "<< book4->bookName() << book4;

        //输出结果，通过地址得到，book1与book2为同一本书，即同一个对象，达到了对象复用的效果
    }
    return a.exec();
}
