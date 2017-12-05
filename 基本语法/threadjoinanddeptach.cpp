/*
连接和分离线程
pthread_join(threadid, status)
pthread_detach(threadid)
演示如何使用join函数来等待线程的完成
*/

#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;

#define NUM_THREADS 5

void *wait(void *t) {
	int i;
	long tid;
	tid = (long)t;
	sleep(1);
	cout << "阻塞线程" << endl;
	cout << "线程ID：" << tid << "...退出" << endl;
	pthread_exit(NULL);
}

int main() {
	int rc;
	int i;
	pthread_t threads[NUM_THREADS];
	pthread_attr_t attr;
	void *status;
	// 初始化并设置线程方式为可连接 joinable
	pthread_attr_init(&attr);
	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);
	for (int i = 0; i < NUM_THREADS; i++) {
		cout << "主函数：创建线程, " << i << endl;
		rc = pthread_create(&threads[i], NULL, wait, (void *)&i);
		if (rc) {
			cout << "报错：不能连接线程," << rc << endl;
			exit(-1);
		}
	}
	// 删除属性，并等待其他线程
	pthread_attr_destroy(&attr);
	for (int i = 0; i < NUM_THREADS; i++) {
		rc = pthread_join(threads[i], &status);
		if (rc) {
			cout << "出错：不能连接" << rc << endl;
			exit(-1);
		}
		cout << "主函数：完成线程id：" << i << endl;
		cout << " 退出伴随当前状态：" << status << endl;
	}
	cout << "主函数：程序退出." << endl;
	pthread_exit(NULL);
	//return 0;
}

