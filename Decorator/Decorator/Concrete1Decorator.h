#ifndef __CONCRETE1DECORATOR_H__
#define __CONCRETE1DECORATOR_H__

//装饰子类(具体装饰的内容，可以无限多个子类)
#include "Decorator.h"
#include <QDebug>

class Concrete1Decorator : public Decorator
{
public:

    Concrete1Decorator(Component* com) : Decorator(com)
    {

    }

    void concrete1()
    {
        qDebug() << "装饰了功能1";
    }
    void task()
    {
        Decorator::task();
        concrete1();
    }

    ~Concrete1Decorator()
    {

    }

};


#endif
