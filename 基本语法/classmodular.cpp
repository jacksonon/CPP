/*
  类模板
  template <class type> class class-name {
	...
  }
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

template <class T> class Stack {
	private:
		vector<T> elems; // 元素
	public:
		void push(T const&); // 入栈
		void pop();// 出栈
		T top() const;// 返回栈顶元素
		bool empty() const {// 判断是否为空
			return elems.empty();
		}
};

template <class T> void Stack<T>::push (T const& elem) {
	elems.push_back(elem);
}

template <class T> void Stack<T>::pop() {
	if (elems.empty())
	{	
		throw out_of_range("stack<>::pop(): empty stack");
	}
	elems.pop_back();
}

template <class T> T Stack<T>::top() const {
	if (elems.empty())
	{	
		throw out_of_range("stack<>::pop(): empty stack");
	}
	return elems.back();
}

int main() {
	try {
		Stack<int> intStack;
		Stack<string> stringStack;

		intStack.push(7);
		cout << intStack.top() << endl;

		stringStack.push("hello");
		cout << stringStack.top() << std::endl;
		stringStack.pop();
		stringStack.pop();
	}
	catch(exception const& ex) {
		cerr << "exception: " << ex.what() << endl;
		return -1;
	}
}
