#ifndef __PSSOFTWARE_H__
#define __PSSOFTWARE_H__

#include "Software.h"
#include <QDebug>

class PsSoftWare : public SoftWare
{
public:
    PsSoftWare(QString name = "PS") : SoftWare(name)
    {
    }

    virtual void install()     //软件安装功能
    {
        qDebug() << this->m_Name;
    }

    virtual void use()         //软件使用功能
    {
        qDebug() << this->m_Name;
    }

    virtual void uninstall()   //软件卸载功能
    {
        qDebug() << this->m_Name;
    }
};

#endif //__PSSOFTWARE_H__
