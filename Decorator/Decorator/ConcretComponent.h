#ifndef __CONCRETCOMPONENT_H__
#define __CONCRETCOMPONENT_H__

#include "Component.h"
#include <QDebug>


//基本业务实现类
class ConcretComponent : public Component
{
public:
    virtual void task()
    {
        qDebug() << "基本功能";
    }
};


#endif //__CONCRETCOMPONENT_H__
