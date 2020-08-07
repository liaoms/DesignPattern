#ifndef __ICOMMAND_H__
#define __ICOMMAND_H__

#include "Device.h"

//命令执行接口
class ICommand
{
public:
    virtual void setDevice(Device* device) = 0;     //设置接收者
    virtual void excute() = 0;

    virtual ~ICommand() = 0;
};

ICommand::~ICommand()
{

}

#endif //__ICOMMAND_H__
