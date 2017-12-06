/*

// 声明数组
double balance[10];

// 初始化数组
double balance[5] = {100.0, 2.0, 3.4, 17.0, 50.0};

// 访问数组元素
double salary = balance[9];

setw(间距)格式化输出

*/

#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main() {
	int n[10];
	for (int i = 0; i < 10; i++) {
		n[i] = i + 100;
	}
	cout << "单个：" << setw(13) << "值" << endl;
	for (int i = 0; i < 10; i++) {
		cout << setw(7) << i << setw(13) << n[i] << endl;
	}
	return 0;
}
