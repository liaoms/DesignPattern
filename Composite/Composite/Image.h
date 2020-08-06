#ifndef __IMAGE_H__
#define __IMAGE_H__

#include "Device.h"
#include <QDebug>

//图像类，不可保存子节点
class Image : public Device
{
public:
    Image(QString name) : Device(name)
    {

    }

    virtual void process()
    {
        qDebug() << "deal Image " << this->getDevName() <<" ...";
    }

    virtual void add(Device* dev)
    {
        qDebug() << "Image can't add anything ...";
    }

    virtual void remove(Device* dev)
    {
        qDebug() << "Image can't remove anything ...";
    }

};


#endif //__IMAGE_H__
