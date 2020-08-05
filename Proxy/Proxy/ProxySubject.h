#ifndef __PROXYSUBJECT_H__
#define __PROXYSUBJECT_H__

#include "RealSubject.h"
#include <QString>

//代理模式:在代理类中调用具体的实现类
class ProxySubject : public Subject
{
private:
    Subject* m_Object;  //具体类指针
    QString m_name;
public:
    ProxySubject(QString name) : m_name(name)
    {
        m_Object = new RealSubject();
    }


    void PlayGame()  //重写抽象类的接口
    {
        login();                    //代理类中可增加功能
        m_Object->PlayGame();    //代理类中调用真正的实现类
        exit();
    }

    void login()
    {
        qDebug() << m_name << "登录远端的服务器游戏";
    }

    void exit()
    {
        qDebug() << m_name << "退出远端服务器游戏";
    }

};


#endif //__PROXYSUBJECT_H__
