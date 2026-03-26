//============================================================================
// Name        : Assign4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Student{
protected:
	int rollNo;

public:


	Student(int rollNo):rollNo(rollNo){

	}

	virtual void display(){
		cout << "Roll NO. " << rollNo << endl;
	}
};

class Result : public Student{
private:
	float marks;
public:
	Result(int rollNo,float marks) :Student(rollNo),marks(marks){

	}

	void display(){
		cout << "Roll No.:" << rollNo << endl;
		cout << "Marks:" << marks<< endl;
	}
};

int main() {

	Result r1(101,89.09);

	Student *ptr;
	ptr=&r1;

	ptr->display();


	return 0;
}
