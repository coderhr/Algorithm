#include <exception>
#include <pthread.h>
#include <semaphore.h>
#include <iostream>

/*封装信号量*/
class sem{
public:
    sem(){
        if(sem_init(&m_sem,0,0)!=0){
            throw std::exception();//初始化函数没有返回值抛出异常
        }
    }
    ~sem(){  //销毁信号量
        sem_destroy(&m_sem);
    }
    bool wait(){   //等待信号量
        return sem_wait(&m_sem)==0;
    }
    bool post(){   //增加信号量
        return sem_post(&m_sem)==0;
    }
private:
    sem_t m_sem;
};

/*封装互斥锁*/
class locker{
public:
    locker(){  //创建并初始化互斥锁
        if (pthread_mutex_init(&m_mutex, NULL) != 0) {
            throw std::exception();
        }
    }
    ~locker(){  //销毁互斥锁
        pthread_mutex_destroy(&m_mutex);
    }
    bool lock()//获取互斥锁
    {
        return pthread_mutex_lock(&m_mutex)==0;
    }
    bool unlock()//释放互斥锁
    {
        return pthread_mutex_unlock(&m_mutex)==0;
    }
private:
    pthread_mutex_t m_mutex;
};

/*封装条件变量*/
class cond{
public:
    cond(){
        if(pthread_mutex_init(&m_mutex,NULL)!=0)
            throw std::exception();
        if(pthread_cond_init(&m_cond,NULL)!=0){
            //构造函数出问题就立即释放已经成功分配的资源
            pthread_mutex_destroy(&m_mutex);
            throw std::exception();
        }
    }
    ~cond(){   //销毁条件变量
        pthread_mutex_destroy(&m_mutex);
        pthread_cond_destroy(&m_cond);
    }
    bool wait(){    //等待条件变量
        int ret=0;
        pthread_mutex_lock(&m_mutex);
        ret=pthread_cond_wait(&m_cond,&m_mutex);
        pthread_mutex_unlock(&m_mutex);
        return  ret==0;
    }
    bool signal(){    //唤醒等待条件变量的线程
        return pthread_cond_signal(&m_cond)==0;
    }
private:
    pthread_mutex_t m_mutex;
    pthread_cond_t m_cond;
};

int main(){
    char* p;
    std::cout << sizeof(p) << std::endl;
    return 0;
}
