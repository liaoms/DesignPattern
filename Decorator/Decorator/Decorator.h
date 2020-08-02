#ifndef __DECORATOR_H__
#define __DECORATOR_H__

#include "Component.h"

//装饰基类
class Decorator : public Component
{
protected:
    Component* m_component;     //关键点：需要定义一个业务抽象类接口指针

public:

    Decorator(Component* com)
    {
        m_component = com;
    }

    void task()
    {
        m_component->task();    //直接业务抽象父类的task接口
    }

    virtual ~Decorator() = 0;
};

Decorator::~Decorator()
{

}


#endif //__DECORATOR_H__
