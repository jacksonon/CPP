#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler(int signum) {
	cout << "终止信号:(" << signum << ") 接收.\n";
	// 清理并关闭。
	// 终止程序
	exit(signum);
}

int main() {
	int i = 0;
	// 注册信号。关联处理事件
	signal(SIGINT, signalHandler);
	while(++i) {
		cout << "阻塞线程..." << endl;
		if (i == 3)
		{
			/* code */
			// 发送信号
			raise(SIGINT);
		}
		sleep(1);
	}
	return 0;
}