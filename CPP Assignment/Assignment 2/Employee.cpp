//============================================================================
// Name        : Employee.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>

using namespace std;

class Employee{
public:


private:
	const int empId;
	string empName;
	double empSalary;
	double grossSalary;

public:
	Employee(int id, string name, double salary){
		const empId=id;
		empName=name;
		empSalary=salary;
		grossSalary=0;
	}

	const int getEmpId() const {
			return empId;
	}

	string getEmpName() const {
		return empName;
	}

	void setEmpName(string empName) {
		this->empName = empName;
	}

	double getEmpSalary() const {
		return empSalary;
	}

	void setEmpSalary(double empSalary) {
		this->empSalary = empSalary;
	}

	void calculateGrossSalary(){


		if(empSalary <= 5000){
			grossSalary=empSalary + (0.10 * empSalary);

		}
		else if(empSalary <= 10000){
			grossSalary=empSalary + (0.15 * empSalary);

		}
		else{
			grossSalary=empSalary + (0.20 * empSalary);

		}

		cout << "Employee Gross Salary:" << grossSalary << endl;


	}

	void displayEmployeeDetails(){
		cout << "Employee ID:" << empId << endl;
		cout << "Employee Name:" << empName << endl;
		cout << "Employee Salary:" << empSalary << endl;
		cout << "Employee Gross Salary:" << grossSalary << endl;
	}
};

int main() {
	int choice;
	int id;
	string name;
	double salary;

	cout << "Enter employee id:" << id << endl;
	cin >> id;

	cout << "Enter employee name:" << name << endl;
	cin >> name;

	cout << "Enter employee salary:" << name << endl;
	cin >> salary;

	Employee emp(id,name,salary);

	do{
		cout << "1. Calculate Gross Salary" << endl;
		cout << "2. Display Employee Details" << endl;
        cout << "3. Update Employee Name" << endl;
        cout << "4. Update Employee Salary" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice:" << endl;
        cin >> choice;

        switch(choice){
        case 1:
        	emp.calculateGrossSalary();
        	break;

        case 2:
        	emp.displayEmployeeDetails();
        	break;

        case 3:
        	cout << "Enter new name:" << endl;
        	cin >> name;
        	emp.setEmpName(name);
        	break;

        case 4:
        	cout << "Enter new salary:" << endl;
        	cin >> salary;
        	emp.setEmpSalary(salary);
        	break;

        case 5:
        	cout << "Exit the program" << endl;
        	break;

        default:
        	cout << "Invalid choice" << endl;
        }
	}while(choice!=5);

	return 0;
}
