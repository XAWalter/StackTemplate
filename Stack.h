#ifndef STACK_H
#define STACK_H

#include <iostream>

using namespace std;


template <typename T>
class Stack {
public:
	Stack();
	void push(T);
	T pop();
	T top();
	bool empty();


private:
	static const int MAX_SIZE = 20;
	T data[MAX_SIZE];
	int size;
};

template<typename T>
Stack<T>::Stack() {
	size = 0;
}


template<typename T>
void Stack<T>::push(T val) {
	if (size == MAX_SIZE) {
		throw overflow_error("Max Stack Size Reached");
		return;
	}
	data[size] = val;
	size++;

}

template<typename T>
T Stack<T>::pop() {
	if (size <= 0) {
		throw underflow_error("No elements in stack");

	}

	T tmp;
	tmp = top();
	data[size-1] = -1;
	size--;
	return tmp;
}

template<typename T>
T Stack<T>::top() {
	if (size == 0) {
		throw out_of_range("No elements in stack");
	}
	return data[size-1];
}

template<typename T>
bool Stack<T>::empty() {
	if (size <= 0) {
		return true;
	}
	else {
		return false;
	}
}
#endif
