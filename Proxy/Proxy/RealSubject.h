#ifndef __REALSUBJECT_H__
#define __REALSUBJECT_H__

#include "Subject.h"
#include <QDebug>

//抽象类实现
class RealSubject : public Subject
{
public:

    virtual void PlayGame()
    {
        qDebug() <<" 玩游戏";
    }


};


#endif //__REALSUBJECT_H__
