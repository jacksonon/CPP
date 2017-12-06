#include <iostream>
using namespace std;

int main() {
	int a = 21;
	int b = 10;

	// 算数运算符
	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;
	cout << "a % b = " << a % b << endl;
	cout << "a自增 : " << a++ << endl;// 后增
	cout << "a自增2 : " << ++a << endl;
	cout << "b自减 : " << a-- << endl;// 后减
	cout << "b自减2 : " << --a << endl;

	// 关系运算符
	cout << (a == b) << endl;
	cout << (a != b) << endl;
	cout << (a > b) << endl;
	cout << (a < b) << endl;
	cout << (a >= b) << endl;
	cout << (a <= b) << endl;

	// 逻辑运算符
	cout << (a && b) << endl;
	cout << (a || b) << endl;
	cout << !(a && b) << endl;

	// 位运算符
	// & ：相同且都为1的位为1，其余为0
	// |：只要有1的位就是为1
	// ^：相同的位为0，不同的位为1
	// ~：0变1，1变0
	// << 二进制左 如：0011 1100 -> 1111 0000
	// >> 右移 如：0011 1100 -》 0000 1111

	// 赋值运算符
	b = 5;
	cout << b << endl;
	b += 5;
	cout << b << endl;
	b -= 5;
	cout << b << endl;
	b *= 5;
	cout << b << endl;
	b /= 5;
	cout << b << endl;
	b %= 5;
	cout << b << endl;
	b <<= 5;
	cout << b << endl;
	b >>= 5;
	cout << b << endl;
	b &= 5 ;
	cout << b << endl;
	b ^= 5;
	cout << b << endl;
	b |= 5;
	cout << b << endl;

	// 杂项运算符
	cout << "a整形的字符大小：" << sizeof(a) << endl;
	cout << (a > b ? "是的" : "不是") << endl;
	cout << "强转小数:" << int(2.2000) << endl;
	cout << "a的地址：" << &a << endl;

	return 0;
}