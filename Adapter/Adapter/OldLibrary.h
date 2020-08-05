#ifndef __OLDLIBRARY_H__
#define __OLDLIBRARY_H__

#include <QString>

//老接口
class OldLibrary
{
private:
    QString m_result;

public:
    OldLibrary(QString result) : m_result(result)
    {

    }

    QString getResult()
    {
        //原始算法，此处简化直接返回
        return m_result;
    }
};

#endif //__OLDLIBRARY_H__
