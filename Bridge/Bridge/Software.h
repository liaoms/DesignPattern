#ifndef __SOFTWARE_H__
#define __SOFTWARE_H__

#include <QString>

class SoftWare
{
protected:
    QString m_Name;

public:
    SoftWare(QString name)
    {
        m_Name = name;
    }

    virtual void install() = 0;     //软件安装功能
    virtual void use() = 0;         //软件使用功能
    virtual void uninstall() = 0;   //软件卸载功能

    virtual ~SoftWare() = 0;
};

SoftWare::~SoftWare()
{

}

#endif //__SOFTWARE_H__
