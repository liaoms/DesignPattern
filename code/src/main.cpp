#include <iostream>
#include "TemplateMethod.h"
#include "Strategy.h"

using namespace std;

int main(int argc, char* argv[])
{
    
    /*******************模板方法模式*************************/
    #if 0
    //模板方法使用方式
    //方式1
    Frame *pApp = new Application();
    pApp->run();

    //方式2
    Application app;
    app.run();
    #endif

    /*******************策略模式*************************/
    //不采用策略模式
    MovieTickets student(STUDENT, 100);
    cout << "student price = " << student.calculate() << endl; 

    MovieTickets vip(VIP, 100);
    cout << "vip price = " << vip.calculate() << endl; 

    //采用策略模式
    PrimaryCalPrice priPrice; //定义各个算法策略
    StudentCalPrice stPrice;   
    VIPCalPrice VPIPrice;
    ChildCalPrice ChildPrice;

    MovieTickets1 tick(100);   //定义环境类对象

    tick.setCal(&priPrice);  //注册算法策略到环境类对象中
    cout << "primary price = " << tick.calculate() << endl;  //计算得到结果 

    tick.setCal(&stPrice); 
    cout << "student price = " << tick.calculate() << endl;  

    tick.setCal(&VPIPrice);
    cout << "VIP price = " << tick.calculate() << endl; 

    tick.setCal(&ChildPrice);
    cout << "Child price = " << tick.calculate() << endl; 

}
