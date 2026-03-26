//============================================================================
// Name        : AssignLast1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Employee{
	int id;
	string name;
public:
	mutable int accessCount;

	Employee(int i,string n):id(i),name(n),accessCount(0){

	}

	Employee(const Employee &other){
		id=other.id;
		name=other.name;
		accessCount=other.accessCount;
		cout << "User defined copy constructor called" << endl;
	}

	void display() const{
		accessCount++;

		cout<< "ID:" << id << endl;
		cout<< "Name:" << name << endl;
		cout<< "Access Count:" << accessCount << endl;
	}
};

int main() {
	Employee e1(101,"Ram");

	cout << "Calling display() on e1" << endl;
	e1.display();
	e1.display();
	e1.display();

	Employee e2=e1;

	e2.display();

	e1.display();

	return 0;
}
