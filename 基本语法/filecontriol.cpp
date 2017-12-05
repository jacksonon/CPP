#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	char data[100];

	//以写模式打开文件
	ofstream outfile;
	outfile.open("afile.dat");

	cout << "writing to the file" << endl;
	cout << "enter you name: ";
	cin.getline(data, 100);

	//向文件写入用户输入的数据
	outfile << data << endl;

	cout << "enter your age:";
	cin >> data;
	cin.ignore();

	//再次向文件写入用户输入的数据
	outfile << data << endl;

	//关闭打开的文件
	outfile.close();

	//已读模式打开文件
	ifstream infile;
	infile.open("afile.dat");

	cout << "reading from the file" << endl;
	infile >> data;

	//在屏幕上写入数据
	cout << data << endl;

	//关闭
	infile.close();

	return 0;
}