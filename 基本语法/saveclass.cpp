// 可用存储类如下：
// auto register static extern mutable thread_local(C++11)
// c++11开始：auto不再是存储类说明符。register被弃用
// static 存储类指示编译器在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。因此，使用 static 修饰局部变量可以在函数调用之间保持局部变量的值。
// static 修饰符也可以应用于全局变量。当 static 修饰全局变量时，会使变量的作用域限制在声明它的文件内。
// 使用g++ a b -o write 执行
#include <iostream>
int count;
extern void write_extern();

int main() {
	count = 5;
	write_extern();
}

