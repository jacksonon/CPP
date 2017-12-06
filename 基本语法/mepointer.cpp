// C++指针

#include <iostream>

using namespace std;

int main() {
	int var1 = 20;
	char var2[10];
	cout << "var1变量地址：" << &var1 << endl;
	cout << "var2变量地址：" << &var2 << endl;

	// c++中使用指针
	int *ip;// 指针变量的声明
	ip = &var1;
	cout << "变量值：" << var1 << endl;
	// 输出指针变量中存储的地址
	cout << "存储的地址：" << ip << endl;
	// 访问指针中的值：使用'*'提取值
	cout << "存储的值为：" << *ip << endl;
	return 0;
}