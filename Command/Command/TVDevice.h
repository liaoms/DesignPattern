#ifndef __TVDEVICE_H__
#define __TVDEVICE_H__

#include <QString>
#include "Device.h"
#include <QDebug>

//具体接收者
class TVDevice : public Device
{
public:
    TVDevice(QString name = "电视") : Device(name)
    {

    }

    virtual void action()
    {
        qDebug() << this->m_name << "执行命令";
    }
};

#endif //__TVDEVICE_H__
