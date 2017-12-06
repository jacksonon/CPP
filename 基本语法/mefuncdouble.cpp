// 函数重载
#include <iostream>
#include <cstring>
using namespace std;

class printData {
public:
	void print(int i) {
		cout << "整数位：" << i << endl;
	}
	void print(double f) {
		cout << "浮点数：" << f << endl;
	}
	void print(string c) {
		cout << "字符串：" << c << endl;
	}
};

class Box
{
public:
	double getVolume(void) {
		return length * breadth * height;
	}
	void setLength(double len) {
		length = len;
	}
	void setBreadth(double bre) {
		breadth = bre;
	}
	void setHeight(double hei) {
		height = hei;
	}
	// 重载运算符。box对象相加
	Box operator+(const Box& b) {
		Box box;
		box.length = this->length + b.length;
		box.breadth = this->breadth + b.breadth;
		box.height = this->height + b.height;
		return box;
	}
private:
	double length;
	double breadth;
	double height;
};

int main() {
	printData pd;
	pd.print(5);
	pd.print(200.23);
	pd.print("你好，家伟!");
	// 重载运算符实例
	Box box1;
	Box box2;
	Box box3;
	double volume = 0.0;
	box1.setLength(6.0);
	box1.setHeight(7.0);
	box1.setBreadth(8.0);
	box2.setLength(6.0);
	box2.setHeight(7.0);
	box2.setBreadth(8.0);
	box3 = box1 + box2;
	volume = box3.getVolume();
	cout << volume << endl;
	return 0;
}