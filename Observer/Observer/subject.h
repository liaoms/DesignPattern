#ifndef __SUBJECT_H__
#define __SUBJECT_H__

#include "Observer.h"
#include <QVector>
#include <QString>

//目标抽象主题(红绿灯)
class Subject
{
protected:
    QVector<Observer*> m_Observer;  //保存订阅的观察者

public:
    void addObserver(Observer* observer)    //订阅
    {
        m_Observer.push_back(observer);
    }

    void removeObserver(Observer* observer) //注销
    {
        m_Observer.removeOne(observer);
    }

    virtual void Notify(QString color) = 0;  //发布通知

    ~Subject()
    {

    }
};

#endif // __SUBJECT_H__
