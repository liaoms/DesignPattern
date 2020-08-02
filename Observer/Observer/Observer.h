#ifndef __OBSERVER_H__
#define __OBSERVER_H__

//观察者抽象类(汽车)
class Observer
{
public:

    virtual void Update(QString color) = 0;   //响应接口
};

#endif // !__OBSERVER_H__
