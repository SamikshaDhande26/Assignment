//============================================================================
// Name        : 6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Employee{
	const int employeeId;
	string name;
	float salary;

public:
	Employee(int employeeId,string name,float salary): employeeId(employeeId),name(name),salary(salary){

	}

	void printDetails(){
		cout<< "Employee Details:" << endl;
		cout << "Employee ID:" << employeeId << endl;
		cout << "Name:" << name << endl;
		cout << "Salary:" << salary << endl;
	}
};
int main() {

	Employee e(101,"Ram",27621.92);

	e.printDetails();


	return 0;
}
