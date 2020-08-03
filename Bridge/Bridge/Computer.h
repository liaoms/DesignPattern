#ifndef __COMPUTER_H__
#define __COMPUTER_H__

#include "Software.h"
#include <QString>

class Computer
{
protected:
    SoftWare* m_software;   //关键点：包含业务类的接口指针，用于后续的动态桥接具体业务类

    QString m_PCName;       //电脑品牌


public:

    Computer(QString pcName)
    {
        m_PCName = pcName;
    }

    void setSoftWare(SoftWare* software)
    {
        m_software = software;
    }

    void run()
    {
        installSoftWare();
        useSoftWare();
        uninstallSoftWare();
    }

    virtual void installSoftWare() = 0;     //电脑安装软件
    virtual void useSoftWare() = 0;         //电脑使用软件
    virtual void uninstallSoftWare() = 0;   //电脑卸载软件

    virtual ~Computer() = 0;
};

Computer::~Computer()
{

}

#endif //__COMPUTER_H__
