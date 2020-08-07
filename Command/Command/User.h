#ifndef __USER_H__
#define __USER_H__

#include "ICommand.h"

//命令发送、请求执行者
class User
{
private:
    ICommand* m_command;

public:
    void setCommand(ICommand* command)
    {
        m_command = command;
    }

    void excute()
    {
        m_command->excute();
    }

};

#endif //__USER_H__
