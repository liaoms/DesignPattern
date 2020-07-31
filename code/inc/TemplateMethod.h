#ifndef __TEMPLATEMETHOD_H__
#define __TEMPLATEMETHOD_H__

#include <iostream>
using namespace std;

/*
* 设计模式 - 模板方法
* 中心思想：稳定部分与变动部分分开，稳定部分通过多态方式调用变动部分
* 实现机制：稳定部分放到基类完成，基类中定义变动部分接口，接口由子类完成，达到子类复用基类稳定部分的代码，重写自己需要变动的接口
*/

//框架类(实现主体流程及稳定的部分)
class Frame
{
private:
    void step1()    //稳定部分
    {
        cout << "step 1..." << endl;
    }

    void step3()    //稳定部分
    {
        cout << "step 3..." << endl;
    }

    void step5()    //稳定部分
    {
        cout << "step 5..." << endl;
    }

protected:
    virtual int step2() = 0;    //变动部分，实现为prote 纯虚函数，放到应用程序中实现
    virtual int step4() = 0;    //同上

public:
    int run()   //主体处理流程不变，直接放到框架类中完成
    {
        step1();

        if(step2())
        {
            step3();
        }

        if(step4())
        {
            step5();
        }
    }

    virtual ~Frame()    //基类析构函数必须设置为虚函数
    {

    }
};

/********************************************************************/

//应用程序(继承框架类，复用框架中稳定的部分，重写变动的部分)
class Application : public Frame
{
protected:
    virtual int step2() //重写步骤2
    {
        cout << "step 2..." << endl;
    }
    virtual int step4() //重写步骤2
    {
        cout << "step 4..." << endl;
    }
};

#endif // !__TEMPLATEMETHOD_H__