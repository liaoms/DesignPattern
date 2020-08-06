#include <QCoreApplication>
#include "File.h"
#include "Image.h"
#include "Folder.h"

//组合模式：中心思想，树形结构的处理，提取树形结构的统一处理接口，非叶子节点可以保存其他节点对象，调用处理接口时，递归处理
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Device* root = new Folder("Root");
    Device* folder1 = new Folder("folder1");
    Device* folder2 = new Folder("folder2");
    Device* folder3 = new Folder("folder3");

    Device* file1 = new File("file1");
    Device* file2 = new File("file2");
    Device* file3 = new File("file3");
    Device* file4 = new File("file4");

    Device* image1 = new Image("image1");
    Device* image2 = new Image("image2");
    Device* image3 = new Image("image3");
    Device* image4 = new Image("image4");

    folder1->add(file1);    //设置树结构层次
    folder1->add(file2);
    folder1->add(folder2);

    folder2->add(image1);
    folder2->add(image2);
    folder2->add(folder3);

    folder3->add(file3);
    folder3->add(image3);

    root->add(file4);
    root->add(image4);
    root->add(folder1);

    root->process();    //调用接口统一
    qDebug() << endl;

    folder2->process(); //调用接口统一
    qDebug() << endl;

    file1->process(); //调用接口统一

    return a.exec();
}
