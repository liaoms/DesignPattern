#ifndef __CONCRETE2DECORATOR_H__
#define __CONCRETE2DECORATOR_H__

//装饰子类(具体装饰的内容，可以无限多个子类)
#include "Decorator.h"
#include <QDebug>

class Concrete2Decorator : public Decorator
{
public:

    Concrete2Decorator(Component* com) : Decorator(com)
    {

    }

    void concrete2()
    {
        qDebug() << "装饰了功能2";
    }
    void task()
    {
        Decorator::task();
        concrete2();
    }

    ~Concrete2Decorator()
    {

    }

};


#endif
