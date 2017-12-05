/* 函数模板
template <class type> ret_type func-name(parameter list) {
	// 函数主体
}
基本等同于泛型函数。C++中我们称之为函数模板
*/

#include <iostream>
#include <string>

using namespace std;

// inline 标识和上行连接，可忽略。目的是简化单行代码
template <typename T> 
inline T const& Max (T const& a, T const& b) {
	return a < b ? b : a;
}

int main() {
	int i = 39;
	int j = 20;
	cout << "max(i, j):" << Max(i, j) << endl;

	string s1 = "Hello";
	string s2 = "world";
	cout << "Max(s1, s2):" << Max(s1, s2) << endl;
	return 0;
}