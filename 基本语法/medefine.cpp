// 预处理
#include <iostream>
using namespace std;

#define PI 3.14159
#define MIN(a, b) (a < b ? a : b)

int main() {
	int i, j;
	i = 300;
	j = 30;
	cout << "较小的值为：" << MIN(i, j) << endl;
	return 0;
}