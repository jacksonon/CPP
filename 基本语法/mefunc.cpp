/*
定义函数
返回类型 函数名(参数列表) {
	函数体
}
*/

#include <iostream>
using namespace std;

// 函数声明
int max(int num1, int num2 = 20);// 函数默认值，无值默认使用，有值替换
// 声明中参数名不是必须的，参数类型才是必须的
int min(int, int);

int max(int num1, int num2) {
	int result;
	if (num1 > num2) {
		result = num1;
	} else {
		result = num2;
	}
	return result;
}

// 主函数内调用函数
int main() {
	int a = 100;
	int b = 200;
	int ret;
	ret = max(a, b);
	cout << "最大值：" << ret << endl;

	int ret2 = max(a);
	cout << "默认使用：" << ret2 << endl;
	return 0;
}