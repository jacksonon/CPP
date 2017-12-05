#include <iostream>
using namespace std;

#define DEBUG
#define MIN(a, b) (((a) < (b)) ? a : b)
#define MKSTR(x) #x
#define CONCAT(x, y) x ## y

int main() {
	int i, j;
	i = 100;
	j = 30;
#ifdef DEBUG
	cerr << "inside main function" << endl;
#endif

#if 0
	/* 注释部分 */
	cout << MKSTR(HELLO C++) << endl;
#endif

	cout << "最小数是：" << MIN(i, j) << endl;

#ifdef DEBUG
	cerr << "Trace: coming out of main function " << endl;
#endif

	cout << MKSTR(HELLO C++) << endl;

	int xy = 100;
	cout << CONCAT(x, y);

	// 输出预定义宏
	cout << "value if __LINE__ : " << __LINE__ << endl;
	cout << "value of __FILE__ : " << __FILE__ << endl;
	cout << "value of __DATE__ : " << __DATE__ << endl;
	cout << "value of __TIME__ : " << __TIME__ << endl;

	return 0;

}