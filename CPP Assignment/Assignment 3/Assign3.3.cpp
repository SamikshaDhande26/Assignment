//============================================================================
// Name        : 3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int x=10;

	cout << "x=" <<x << endl;

	int* ptr=&x;

	cout << "value of ptr:" << *ptr << endl;
	cout << "Address of ptr:" << ptr << endl;

	int &ref=x;

	cout << "Reference: " <<ref << endl;

	*ptr=20;

	cout <<*ptr<<endl;

	ref=30;

	cout << ref<<endl;

	return 0;
}
