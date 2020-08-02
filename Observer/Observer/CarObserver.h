#ifndef __CAROBSERVER_H__
#define __CAROBSERVER_H__

#include "Observer.h"
#include <QString>
#include <QDebug>

class CarObserver : public Observer
{
private:
    QString m_CarName;

public:
    CarObserver(QString carName)
    {
        m_CarName = carName;
    }

    virtual void Update(QString color)   //响应接口
    {
        qDebug() << m_CarName << " 收到 '" << color << "' " << "开始执行";
    }

};

#endif // CAROBSERVER_H
