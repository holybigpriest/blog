#ifndef LOCKER_H
#define LOCKER_H

#include<semaphore.h>
#include<exception>
#include<iostream>
using namespace std;
class sem
{
public:
    sem()
    {
        if(sem_init(&m_sem,0,0)!=0){//0成功，-1则失败并且设置errono
            throw exception();
        }
    }
    sem(int num)
    {
        if(sem_init(&m_sem,0,num)!=0)
        {
            throw exception();
        }
    }
    ~sem()
    {
        sem_destroy(&m_sem);
    }
    bool post(){
        return sem_post(&m_sem)==0;
    }
    bool wait(){
        return sem_wait(&m_sem)==0;
    }
private:
    sem_t m_sem;
};

#endif
