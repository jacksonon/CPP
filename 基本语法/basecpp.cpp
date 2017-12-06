// 注释
/* 注释 */
/*
 * 注释
 * 数据类型
 * 变量类型
 * 变量作用域
 * 常量
 * 修饰符类型 unsigned 无符号
 */

#include <iostream>
using namespace std;

// typedef声明：给已有的类型取一个新的名字
typedef int feet;
typedef double wangjiawei;

// 声明变量 : 全局变量
extern int a, b;

// **全局变量自动初始化值，局部变量不会自动初始化**
// int	0 
// char	'\0'
// float	0
// double	0
// pointer	NULL

// 函数声明
int func();

// 函数定义
int func () {
	return 0;
}

// 常量定义
#define WANG_ME 100
#define WANG_YOUR 50
#define NEWLINE '\n'

// 枚举
enum color {
	red,
	green = 5, // 当前5，下一个+1，初始仍然从0开始
	blue
} wang;

int main() {
	cout << "char:" << sizeof(char) << endl;
	cout << "int:" << sizeof(int) << endl;
	cout << "short int : "  << sizeof(short int) << endl;
	cout << "long int :" << sizeof(long int) << endl;
	cout << "float " << sizeof(float) << endl;
	cout << "double : " << sizeof(double) << endl;
	// 宽字符：2或4个字节
	cout << "wchar_t" << sizeof(wchar_t) << endl;
	// 变量 wang的类型为color
	wang = blue;
	cout << "wang ：" << wang << endl;
	// 变量定义:带有静态存储持续时间的变量会被隐式初始化为 NULL（所有字节的值都是 0），其他所有变量的初始值是未定义的。
	int a, b;
	// 实际初始化
	a = 10;
	b = 20;
	// 局部变量
	int c = 0;
	c = a + b;
	cout << c << endl;
	// 使用define常量
	int area;
	area = WANG_ME * WANG_YOUR;
	cout << "面积为：" << area;
	cout << NEWLINE;
	// 使用const声明常量.---!!!!--常量通常全为大写字母--!!!!-----
	const int length = 10;
	const int width = 5;
	area = length * width;
	cout << area;
	cout << NEWLINE;
	return 0;
}