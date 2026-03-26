//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void swapByValue(int a,int b){
	int temp=a;
	a=b;
	b=temp;
}

void swapByAddress(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;

}

void swapByReference(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

int main() {
	int x=10, y=20;
	cout << "Original Value: x=" << x << "y="<< y << endl;

	swapByValue(x,y);
	cout << "After Swap By Value: x=" << x << "y="<< y << endl;

	swapByAddress(&x,&y);
	cout << "After Swap By Address: x=" << x << "y="<< y << endl;

	swapByReference(x,y);
	cout << "After Swap By Reference: x=" << x << "y="<< y << endl;
	return 0;
}
