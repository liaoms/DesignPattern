#ifndef __OPENCOMMAND_H__
#define __OPENCOMMAND_H__

#include "Device.h"
#include <QDebug>

//具体命令
class OpenCommand : public ICommand
{
private:
    Device* m_device;

public:
    virtual void setDevice(Device* device)
    {
        m_device = device;
    }

    virtual void excute()
    {
        qDebug() << "---开命令---";
        m_device->action();
    }
};

#endif //__OPENCOMMAND_H__
