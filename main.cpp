#include <iostream>
#include <string>
#include "Stack.h"
#include <stdexcept>

using namespace std;

int main()
{
	cout << "Enter a test number(1-5): ";
	int test;
	cin >> test;
	cout << endl;
	//tests constructor, push, pop, top and empty
	if (test == 1) {
		try {
			cout << "\nStack1 constructor called";
			Stack<int> Stack1;
			if (Stack1.empty()) {
				cout << "\nStack1 is empty.";
			}
			else {
				cout << "\nStack1 is not empty";
			}
			cout << "\npush 10";
			Stack1.push(10);
			cout << "\npush 20";
			Stack1.push(20);
			cout << "\npush 30";
			Stack1.push(30);
			cout << "\nStack1 top: ";
			cout << Stack1.top();
			cout << "\npop";
			Stack1.pop();
			cout << "\nStack1 top: ";
			cout << Stack1.top();
			cout << "\npop";
			Stack1.pop();
			cout << "\nStack1 top: ";
			cout << Stack1.top();
			cout << "\npop";
			Stack1.pop();
			if (Stack1.empty()) {
				cout << "\nStack1 is empty.";
			}
			else {
				cout << "\nStack1 is not empty";
			}
			cout << endl;
		}
		catch (underflow_error & e) {
			cout << e.what() << endl;
		}
		catch (overflow_error & e) {
			cout << e.what() << endl;
		}
		catch (out_of_range & e) {
			cout << e.what() << endl;
		}
	}
	//tests top on empty Stack
	if (test == 2) {
		try {
			cout << "\nStack2 constructor called";
			Stack<int> Stack2;
			cout << "\nStack2 top: ";
			cout << Stack2.top();
			cout << endl;
		}
		catch (underflow_error & e) {
			cout << e.what() << endl;
		}
		catch (overflow_error & e) {
			cout << e.what() << endl;
		}
		catch (out_of_range & e) {
			cout << e.what() << endl;
		}
	}
	//tests pop from an empty Stack
	if (test == 3) {
		try {
			cout << "\nStack3 constructor called";
			Stack<int> Stack3;
			cout << "\npop from empty Stack\n";
			Stack3.pop();
			cout << endl;
		}
		catch (underflow_error & e) {
			cout << e.what() << endl;
		}
		catch (overflow_error & e) {
			cout << e.what() << endl;
		}
		catch (out_of_range & e) {
			cout << e.what() << endl;
		}
	}
	//tests push to a full Stack
	if (test == 4) {
		try {
			cout << "\nStack4 constructor called";
			Stack<int> Stack4;
			cout << "\npush 20 elements";
			for (int i = 1; i <= 20; ++i) {
				Stack4.push(i);
			}
			cout << "\nStack4 top: ";
			cout << Stack4.top();
			cout << "\npush 21\n";
			Stack4.push(21);
			cout << endl;
		}
		catch (underflow_error & e) {
			cout << e.what() << endl;
		}
		catch (overflow_error & e) {
			cout << e.what() << endl;
		}
		catch (out_of_range & e) {
			cout << e.what() << endl;
		}
	}
	//tests Stack of strings
	if (test == 5) {
		try {
			cout << "\nStack5 constructor called";
			Stack<string> Stack5;
			cout << "\npush A";
			Stack5.push("A");
			cout << "\npush B";
			Stack5.push("B");
			cout << "\npush C";
			Stack5.push("C");
			cout << "\nStack5 top: ";
			cout << Stack5.top();
			cout << "\npop";
			Stack5.pop();
			cout << "\nStack5 top: ";
			cout << Stack5.top();
			cout << "\npop";
			Stack5.pop();
			cout << "\nStack5 top: ";
			cout << Stack5.top();
			cout << "\npop";
			Stack5.pop();
			if (Stack5.empty()) {
				cout << "\nStack5 is empty.";
			}
			else {
				cout << "\nStack5 is not empty";
			}
			cout << "\nStack5 top: \n";
			Stack5.top();
			cout << endl;
		}
		catch (underflow_error & e) {
			cout << e.what() << endl;
		}
		catch (overflow_error & e) {
			cout << e.what() << endl;
		}
		catch (out_of_range & e) {
			cout << e.what() << endl;
		}
	}
	system("pause");
	return 0;
}