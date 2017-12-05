#include <iostream>
// 必须的头文件是
#include <pthread.h>
 
using namespace std;
 
#define NUM_THREADS 5

struct thread_data
{
	int thread_id;
	char *message;
};
 
// 线程的运行函数
void* say_hello(void* args)
{
    //cout << "Hello Runoob！" << endl;
    struct thread_data *my_data;
    my_data = (struct thread_data *) args;
    cout << "ID：" << my_data->thread_id;
    cout << "message: " << my_data->message <<endl;
    pthread_exit(NULL);
}
 
int main()
{
    // 定义线程的 id 变量，多个变量使用数组
    pthread_t tids[NUM_THREADS];
    // 创建存储结构体数组
    struct thread_data td[NUM_THREADS];
    int rc;
    int i;
    for(int i = 0; i < NUM_THREADS; ++i)
    {
    	cout << "主函数：创建线程 -> " << i << endl;
    	td[i].thread_id = i;
    	td[i].message = (char*)"this is message"; 
        //参数依次是：创建的线程id，线程参数，调用的函数，传入的函数参数
        int rc = pthread_create(&tids[i], NULL, say_hello, (void*)&td[i]);
        if (rc)
        {
           cout << "pthread_create error: error_code=" << rc << endl;
           exit(-1);
        }
    }
    //等各个线程退出后，进程才结束，否则进程强制结束了，线程可能还没反应过来；
    pthread_exit(NULL);
}

// 使用 -lpthread 库编译下面的程序
//$ g++ test.cpp -lpthread -o test.o
