#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	// 定义数字
	short s;
	int i;
	long l;
	float f;
	double d;
	s = 10;
	i = 1000;
	l = 1000000;
	f = 230.45;
	d = 30340.234;
	cout << s << endl;
	cout << i << endl;
	cout << l << endl;
	cout << f << endl;
	cout << d << endl;

	// 数学运算
	cout << cos(180) << endl;
	cout << sin(180) << endl;
	cout << tan(180) << endl;
	cout << log(100) << endl;
	cout << pow(10, 2) << endl;// 平方
	cout << hypot(10, 10) << endl;// 直角三角形斜边
	cout << sqrt(100) << endl;// 平方根
	cout << abs(-10) << endl;
	cout << fabs(-100.2) << endl;// 十进制数绝对值
	cout << floor(3.1111) << endl;// 返回小于或等于传参的最大整数

	// 随机数
	int k, m;
	// 需要先传入时间参数。使用time()方法
	srand((unsigned)time(NULL));
	for (k = 0; k < 10; k++)
	{
		// 伪随机数
		m = rand();
		cout << "随机数：" << m << endl;
	}

	return 0;
}