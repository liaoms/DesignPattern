#ifndef __FOLDER_H__
#define __FOLDER_H__

#include "Device.h"
#include <QDebug>
#include <QList>

//文件夹类，在文件夹中增加其他文件(folder\file\image等)
class Folder : public Device
{
private:

    QList<Device*> m_device;    //保存其他类，类似树的子节点

public:
    Folder(QString name) : Device(name)
    {

    }

    virtual void process()
    {
        qDebug() << "... deal folder " << this->getDevName() <<" ...";
        for(int i=0; i<m_device.size(); i++)    //处理问价夹类对象，则将文件夹下所有的内容都处理完，如碰到文件夹，则递归完成
        {
            m_device[i]->process();
        }
    }

    virtual void add(Device* dev)
    {
        m_device.append(dev);   //增加一个子节点
    }

    virtual void remove(Device* dev)
    {
        m_device.removeOne(dev);    //增加一个子节点
    }

};


#endif //__FOLDER_H__
