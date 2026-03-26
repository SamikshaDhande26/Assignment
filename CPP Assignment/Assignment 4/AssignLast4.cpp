//============================================================================
// Name        : AssignLast4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class DivideByZero{

};
int main() {
	int a,b;
	cout <<"Enter two integers:";
	cin >> a >> b;
	try{
		try{
			if(b==0){
				throw DivideByZero();

			}
			int result=a/b;
			cout << "Result=" << result << endl;
		}catch(DivideByZero){
			cout << "Inside inner catch" << endl;
			throw;
		}
	}catch(DivideByZero){
		cout << "Handled in outer catch" << endl;
	}
	return 0;
}
