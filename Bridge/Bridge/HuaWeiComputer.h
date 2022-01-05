#ifndef __HUAWEICOMPUTER_H__
#define __HUAWEICOMPUTER_H__

#include "Computer.h"
#include <QDebug>

//实现具体电脑类
class HuaWeiComputer : public Computer
{

public:
    HuaWeiComputer(QString pcName = "HuaWei_PC") : Computer(pcName)
    {

    }

    virtual void installSoftWare()      //电脑安装软件
    {
        qDebug() << this->m_PCName << " 电脑安装:";
        this->m_software->install();
    }

    virtual void useSoftWare()          //电脑使用软件
    {
        qDebug() << this->m_PCName << " 电脑使用:";
        this->m_software->use();
    }

    virtual void uninstallSoftWare()    //电脑卸载软件
    {
        qDebug() << this->m_PCName << " 电脑卸载:";
        this->m_software->uninstall();
    }
};


#endif // __HUAWEICOMPUTER_H__
