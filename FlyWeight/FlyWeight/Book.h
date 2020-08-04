#ifndef __BOOK_H__
#define __BOOK_H__

#include <QString>

//目标 对象的外部部分(可变)
class User
{
private:
    QString m_name;

public:
    User(QString name) : m_name(name)
    {

    }

    QString getName()
    {
        return m_name;
    }
};

//目标对象的内部部分(稳定)
class Book
{
private:
    QString m_name;
    User* m_user;
public:
    Book(QString name) : m_name(name)
    {

    }

    QString bookName()
    {
        return m_name;
    }

    QString userName()
    {
        return m_user->getName();
    }

    void setUser(User* user)
    {
        m_user = user;
    }

    virtual ~Book() = 0;
};

Book::~Book()
{
    if(m_user)
    {
        delete m_user;
    }
}


#endif  //__BOOK_H__
