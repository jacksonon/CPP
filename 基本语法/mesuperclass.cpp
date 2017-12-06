// 继承
#include <iostream>
using namespace std;

// 基类
class Shape {
public:
	void setWidth(int w) {
		width = w;
	}
	void setHeight(int h) {
		height = h;
	}
protected:
	int width;
	int height;
};

// 基类
class PaintCost	{
public:
	int getCost(int area) {
		return area * 100;
	}
};

// 派生类
class Rectangle: public Shape, public PaintCost
{
public:
	int getArea() {
		return (width * height);
	}
};

int main(void) {
	Rectangle rect;
	rect.setWidth(5);
	rect.setHeight(7);
	cout << rect.getArea() << endl;
	cout << rect.getCost(rect.getArea()) << endl;
	return 0;
}