//============================================================================
// Name        : AssignLast2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Student{
	int roll;
	string name;
	float marks;

public:
	Student(int roll,string name,float marks): roll(roll),name(name),marks(marks){

	}

	void writeToFile(ofstream &fout){
		fout << roll << " " << name << " " << marks << endl;
	}

	~Student(){
		cout << "Destroying student..." << endl;
	}
};
int main() {
	Student s[3]={
	Student(1,"Amit",89);
	Student(2,"Sumit",82);
	Student(1,"Gurmeet",78);
	};

	ofstream fout("students.txt");

	for(int i=0;i<3;i++){
		s[i].writeToFile(fout);
	}
	fout.close();

	ifstream fin("students.txt");
	int roll,marks;
	string name;

	    cout << "\nReading data from file:\n";

	    while(fin >> roll >> name >> marks)
	    {
	        cout << roll << " " << name << " " << marks << endl;
	    }

	    fin.close();
	return 0;
}
