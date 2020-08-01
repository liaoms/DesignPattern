#ifndef __STRATEGY_H__
#define __STRATEGY_H__

#include <iostream>
using namespace std;

/*
* 策略模式 - 算法与调用者分开，算法单独封装到独自类中，调用者通过制定对应算法类的对象，来使用对应的算法
*/

/*
* 背景
* 一个系统中，对同一种需求有多重算法实现，例如电影票打折，原价、学生(8折)、VIP(6折)所对应的票价都不一样
*/

/********************未采用策略模式***********************/

enum type
{
    STUDENT,
    VIP
};

class MovieTickets
{
private:
    double m_price;
    int m_type;

public:
    MovieTickets(int type, double price)
    {
        m_type = type;
        m_price = price;
    }

    double calculate()  //计算票价
    {
        if(STUDENT == m_type)       //学生票的算法
        {
            return m_price * 0.8;
        }
        else if (VIP == m_type)     //VIP的算法
        {
            return m_price * 0.6;
        }
        else                        //其余按原票价处理
        {
            return m_price;
        }
    }
};
//以上方式缺点为，计算票价里包括各种情况，假如需要增加儿童票，那么需改更改calculate算法

/********************策略模式***********************/
//策略模式中心思想：将算法分离出来，环境类对象通过注册算法方式调用各种算法(分离if ... else...的一种方式)

//策略基类
class CalPrice
{   
public:
    virtual double calculate(double price) = 0;  //算法接口
    virtual ~CalPrice()
    {

    }
};

//各个算法子类
class PrimaryCalPrice : public CalPrice  //原价票价算法
{
public:
    virtual double calculate(double price)
    {
        return price;
    }
};

class StudentCalPrice : public CalPrice  //学生票价算法
{
public:
    virtual double calculate(double price)
    {
        return price * 0.8;
    }
};

class VIPCalPrice : public CalPrice  //VIP票价算法
{
public:
    virtual double calculate(double price)
    {
        return price * 0.6;
    }
};

class ChildCalPrice : public CalPrice  //儿童票价算法
{
public:
    virtual double calculate(double price)
    {
        return price * 0.5;
    }
};

//环境类(算法调用类)
class MovieTickets1
{
private:
    double m_price;
    CalPrice* m_calPrice;
    double m_result;

public:
    MovieTickets1(double price)
    {
        m_price = price;
    }

    void setCal(CalPrice* calPrice)  //注册算法接口
    {
        m_calPrice = calPrice;
    }

    double calculate()  //计算票价
    {
        return m_calPrice->calculate(m_price);   //调用接口
    }
};
//以上策略模式，后续需要增加其他折扣方式时，只需要新增一个新的折扣算法即可，调用算法的环境类不需要更改

#endif // !__STRATEGY_H__