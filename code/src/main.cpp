#include <iostream>
#include "TemplateMethod.h"
using namespace std;

int main(int argc, char* argv[])
{
    //模板方法使用方式
    //方式1
    Frame *pApp = new Application();
    pApp->run();

    //方式2
    Application app;
    app.run();
}
