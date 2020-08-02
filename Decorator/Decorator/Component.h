#ifndef __COMPONENT_H__
#define __COMPONENT_H__

//基本业务抽象类

class Component
{
public:
   virtual void task() = 0;

    virtual ~Component()
    {

    }

};



#endif //__COMPONENT_H__
