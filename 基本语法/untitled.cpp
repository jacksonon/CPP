// 多态
#include <iostream>
using namespace std;

class Shape{
protected:
	int width, height;
public:
	Shape(int a = 0, int b = 0) {
		width = a;
		height = b;
	}
	// 静态多态 -> 
	virtual int area() {// virtual关键字声明为动态
		cout << "基类面积" << endl;
		return 0;
	}
	// 纯虚函数：需要在子类实现
	virtual int wang() = 0;
};

class Rectangle: public Shape {
public:
	Rectangle(int a = 0, int b = 0) : Shape(a, b) {}
	int area() {
		cout << "Rectangle 面积" << endl;
		return (width * height);
	}
	int wang() {
		cout << "纯虚函数的实现" << endl;
		return width*height*10;
	}
};

class Triangle: public Shape {
public:
	Triangle(int a = 0, int b = 0) : Shape(a, b) {}
	int area() {
		cout << "Triangle 面积" << endl;
		return (width * height / 2);
	}
	int wang() {
		cout << "派生类必须实现" << endl;
		return 100;
	}
};

int main() {
	Shape *shape;
	Rectangle rec(10, 7);
	Triangle tri(10, 5);
	shape = &rec;
	shape->area();
	shape->wang();
	shape = & tri;
	shape->area();
	return 0;
}