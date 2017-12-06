/*

// C 风格的字符串起源于 C 语言，并在 C++ 中继续得到支持。
// 字符串实际上是使用 null 字符 '\0' 终止的一维字符数组。
// 因此，一个以 null 结尾的字符串，包含了组成字符串的字符。
// C风格字符串
char greeting[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
char greeting[] = "hello";// 等价

*/

#include <iostream>
#include <cstring>// C的字符
#include <string>// C++字符

using namespace std;

int main() {
	// 举出使用
	char greeting[] = "hello";
	cout << "欢迎语句：" << greeting << endl;

	//操作字符串函数
	char str1[11] = "Hello";
	char str2[11] = "World";
	char str3[11];
	int len;
	// 复制后者到前者
	strcpy(str3, str1);
	cout << "strcpy(str3, str1) : " << str3 << endl;
	// 连接后者到前者末尾
	strcat(str1, str2);
	cout << "strcat(str1, str2) : " << str1 << endl;
	// 连接后长度
	len = strlen(str1);
	cout << "长度：" << len << endl;

	// C++中字符操作
	string str1a = "hello";
	string str2a = "world";
	string str3a;
	int lena;
	str3a = str1a;
	str3a = str1a + str2a;
	lena = str3a.size();
	cout << str3a << lena << endl;
	return 0;
}