#ifndef __QQSOFTWARE_H__
#define __QQSOFTWARE_H__

#include "Software.h"
#include <QDebug>

class QQSoftWare : public SoftWare
{
public:
    QQSoftWare(QString name) : SoftWare(name)
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

#endif //__QQSOFTWARE_H__
