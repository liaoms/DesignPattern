#ifndef __ADEPTER_H__
#define __ADEPTER_H__

#include "NewLibrary.h"
#include "OldLibrary.h"

//适配器类
class Adepter : public NewLibrary
{
private:
    OldLibrary* m_oldLibrary;

public:

    Adepter(OldLibrary* oldLibrary)
    {
        m_oldLibrary = oldLibrary;
    }

    virtual int calculate()  //继承并实现新接口类
    {
        int ret = m_oldLibrary->getResult().toInt() * 10;   //复用老接口算法
        return ret;
    }
};

#endif //__ADEPTER_H__
