#ifndef __TRAFFICSUBJECT_H__
#define __TRAFFICSUBJECT_H__

#include "Subject.h"


class TrafficSubject : public Subject
{
public:
    virtual void Notify(QString color) //发布通知
    {
        for(int i=0; i<(this->m_Observer.size()); i++)
        {
            this->m_Observer[i]->Update(color);
        }
    }
};


#endif // TRAFFIC_H
