#ifndef __LIIGHTDEVICE_H__
#define __LIIGHTDEVICE_H__

#include <QString>
#include "Device.h"
#include <QDebug>

//具体接收者
class LightDevice : public Device
{
public:
    LightDevice(QString name) : Device(name)
    {

    }

    virtual void action()
    {
        qDebug() << this->m_name << "执行命令";
    }
};

#endif //__LIIGHTDEVICE_H__
