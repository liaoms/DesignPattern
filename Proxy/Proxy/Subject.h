#ifndef __SUBJECT_H__
#define __SUBJECT_H__

//抽象类
class Subject
{
public:
    virtual void PlayGame() = 0;

    virtual ~Subject() = 0;
};

Subject::~Subject()
{

}

#endif //__SUBJECT_H__
