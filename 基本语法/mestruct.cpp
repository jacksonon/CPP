#include <iostream>
#include <cstring>

using namespace std;
void printBook(struct Books book);
// 指向结构体的指针
void printBookWithPoint(struct Books *book);

/* 更简单的定义结构的方式
typedef struct {
	char title[50];
	int book_id;
} Books;*/

// 声明结构体
struct Books {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

int main() {
	Books Book1;
	Books Book2;
	strcpy(Book1.title, "C++学习");
	strcpy(Book1.author, "王家伟");
	strcpy(Book1.subject, "编程实例");
	Book1.book_id = 10000;
	strcpy(Book2.title, "C语言");
	strcpy(Book2.author, "王家伟");
	strcpy(Book2.subject, "C语言实训");
	Book2.book_id = 123456;
	cout << Book1.title << Book1.author << Book1.subject << endl;
	cout << Book2.title << Book2.author << Book2.subject << endl;
	printBookWithPoint(&Book1);
	printBook(Book2);
	typedef long int *pint32;
	pint32 x, y, z;
	cout << x << y << z << endl;
	return 0;
}

void printBookWithPoint(struct Books *book) {
	cout << book->title << book->author << book->subject << endl;
}

// 结构体作为函数参数
void  printBook(struct Books book) {
	cout << book.title << book.author << book.subject << endl;
}