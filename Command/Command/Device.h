#ifndef __DEVICE_H__
#define __DEVICE_H__

#include <QString>

//命令接收者接口
class Device
{
protected:
    QString m_name;

public:
    Device(QString name) : m_name(name)
    {

    }

    virtual void action() = 0;

    virtual ~Device() = 0;
};

Device::~Device()
{

}

#endif //__DEVICE_H__
