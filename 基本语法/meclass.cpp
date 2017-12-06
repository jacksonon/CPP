#include <iostream>
using namespace std;

// 类定义:结束后需要分号
class Box {
public:
	double length;
	double breadth;
	double height;
};

int main() {
	// 定义对象
	Box box1;
	Box box2;
	// 存储体积
	double volume = 0.0;

	box1.height = 5.0;
	box1.length = 6.0;
	box1.breadth = 7.0;

	box2.height = 10.0;
	box2.length = 12.0;
	box2.breadth = 13.0;

	volume = box1.height * box1.length * box1.breadth;
	cout << volume << endl;
	return 0;
}