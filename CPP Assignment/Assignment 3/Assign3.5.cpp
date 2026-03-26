//============================================================================
// Name        : 5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class Student{
private:

	int rollNo;
	string name;
	float marks;

public:
	Student(){
		rollNo=0;
		name ="";
		marks=0;
	}

//	Student(int r,string n,float m){
//		rollNo=r;
//		name=n;
//		marks=m;
//	}

	Student(int rollNo, string name, float marks){
		this->rollNo=rollNo;
		this->name=name;
		this->marks=marks;
	}

	void printStudentDetails(){
		cout << "Student Details: "  << endl;
		cout << "RollNo: " << rollNo << endl;
		cout << "Name: " << name << endl;
		cout << "Marks: " << marks << endl;

	}
};
int main() {
	Student s1;
	Student s2(101,"Ram",89.3);
	Student s3(102,"Shyam",67.7);

	s1.printStudentDetails();
	s2.printStudentDetails();
	s3.printStudentDetails();

	return 0;
}
