#include <iostream>
using namespace std;

int main() {
	double* pvalue = NULL;// 初始化为null指针
	pvalue = new double;// 为变量请求内存
	*pvalue = 29494.99;// 在分配的地址中1存储值
	cout << "value of pvalue : " << *pvalue << endl;// 打印值
	delete pvalue;// 释放内存
}

// 执行 g++ xxx.cpp
// ./a.out