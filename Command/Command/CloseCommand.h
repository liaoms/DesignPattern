#ifndef __CLOSECOMMAND_H__
#define __CLOSECOMMAND_H__

#include "Device.h"
#include "ICommand.h"
#include <QDebug>

//具体命令
class CloseCommand : public ICommand
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
        qDebug() << "---关命令---";
        m_device->action();
    }
};

#endif //__CLOSECOMMAND_H__
