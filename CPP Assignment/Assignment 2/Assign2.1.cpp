//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Student{
	string name;
	int rollNo;
	float marks;
	char grade;

public:
	Student(){

	}

//	Student(string n,int rn,float m, char ch){
//		this->name=n;
//		this->rollNo=rn;
//		this->marks=m;
//		this->grade=ch;
//	}

	void setName(string n){
		name=n;
	}

	string getName() const{
		return name;
	}

	void setRollNo(int rn){
		rollNo=rn;
	}

	int getRollNo() const{
		return rollNo;
	}

	void setMarks(float m){
		marks=m;

	}

	float getMarks() const{
		return marks;
	}

	void setGrade(char ch){
		grade=ch;
	}

	char getGrade() const{
		return grade;
	}

	void calculateGrade(){
		if(marks>=90){
			grade='A';
		}else if(marks>=80){
			grade='B';
		}else if(marks>=70){
			grade= 'C';
		}else if(marks>=60){
			grade= 'D';
		}else{
			grade= 'F';
		}
	}
};

int main() {
	Student s;

	int choice;

	do{
	cout << "Menu..." << endl;
	cout << "1.Accept Information" << endl;
	cout << "2.Display Information" << endl;
	cout << "3.Calculate grade" << endl;
	cout << "4.Exit the program" << endl;

	cout << "Enter your choice:" << endl;
	cin >> choice;

	switch(choice){
	case 1:{
		string name;
		int rollNo;
		float marks;


		cout<< "Enter the name: "<< endl;
		cin >> name;
		s.setName(name);

		cout<< "Enter the roll no.: "<< endl;
		cin >> rollNo;
		s.setRollNo(rollNo);

		cout<< "Enter the marks: "<< endl;
		cin >> marks;
		s.setMarks(marks);

		break;
		}
	case 2:
		cout << "Name : " << s.getName() << endl;
		cout << "Roll No.: " << s.getRollNo() << endl;
		cout << "Marks : " << s.getMarks() << endl;
		//cout << "Grade : " << s.getGrade() << endl;
		break;

	case 3:
		s.calculateGrade();
		cout << "Name : " << s.getName() << endl;
		cout << "Roll No.: " << s.getRollNo() << endl;
		cout << "Marks : " << s.getMarks() << endl;
		cout << "Grade : " << s.getGrade() << endl;
		break;

	case 4:
		cout << "Exiting the program" << endl;
		break;

	default:
		cout << "Invalid choice" << endl;
	}
}while(choice!=5);

	return 0;
}
