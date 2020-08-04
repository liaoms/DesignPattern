#ifndef __BOOKFACTORY_H__
#define __BOOKFACTORY_H__

#include "TechnicalBook.h"
#include <QMap>

//工厂类：生产目标对象
class BookFactory
{
private:
    BookFactory(){}

    static BookFactory* m_instance;
    QMap<QString, Book*> m_bookPools;

public:
    static BookFactory* NewInstance()   //图书馆采用单例模式
    {
        if(m_instance == NULL)
        {
            m_instance = new BookFactory();
        }

        return m_instance;
    }

    Book* getBook(QString bookName)
    {
        QMap<QString, Book*>::iterator itr = m_bookPools.find(bookName);
        if(itr != m_bookPools.end())    //书池中已经有的，直接返回现有的书籍
        {

            return itr.value();
        }
        else
        {
            Book* newBook = new TechnicalBook(bookName);    //没有的，则新生成，并将其加入到书池中
            if(newBook != NULL)
            {
                m_bookPools.insert(bookName, newBook);
                return newBook;
            }
        }
    }
};

BookFactory* BookFactory::m_instance = NULL;

#endif //__BOOKFACTORY_H__
