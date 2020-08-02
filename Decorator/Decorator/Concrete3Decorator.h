#ifndef __CONCRETE3DECORATOR_H__
#define __CONCRETE3DECORATOR_H__

//装饰子类(具体装饰的内容，可以无限多个子类)
#include "Decorator.h"
#include <QDebug>

class Concrete3Decorator : public Decorator
{
public:

    Concrete3Decorator(Component* com) : Decorator(com)
    {

    }

    void concrete3()
    {
        qDebug() << "装饰了功能3";
    }

    void task()
    {
        Decorator::task();
        concrete3();
    }

    ~Concrete3Decorator()
    {

    }

};


#endif
