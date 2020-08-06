#ifndef __FILE_H__
#define __FILE_H__

#include "Device.h"
#include <QDebug>

//文件类，不可保存子节点
class File : public Device
{
public:

    File(QString name) : Device(name)
    {

    }

    virtual void process()
    {
        qDebug() << "deal File " << this->getDevName() <<" ...";
    }

    virtual void add(Device* dev)
    {
        qDebug() << "file can't add anything ...";
    }

    virtual void remove(Device* dev)
    {
        qDebug() << "file can't remove anything ...";
    }

};


#endif //__FILE_H__
