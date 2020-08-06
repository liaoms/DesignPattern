#ifndef __DEVICE_H__
#define __DEVICE_H__

#include <QString>

//虚拟处理类
class Device
{
protected:
    QString m_devName;

public:
    Device(QString name) : m_devName(name)
    {

    }

    QString getDevName()
    {
        return m_devName;
    }

    virtual void process() = 0;
    virtual void add(Device* dev) = 0;
    virtual void remove(Device* dev) = 0;

    virtual ~Device() = 0;

};

Device::~Device()
{

}

#endif //__DEVICE_H__
