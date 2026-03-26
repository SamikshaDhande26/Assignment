//============================================================================
// Name        : GradeCalculator1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	float eng;
	float maths;
	float sci;
	float hindi;
	float his;


	cout << "Enter the marks of English:" << endl;
	cin >> eng;

	cout << "Enter the marks of Maths:" << endl;
	cin >> maths;

	cout << "Enter the marks of Science:" << endl;
	cin >> sci;

	cout << "Enter the marks of Hindi:" << endl;
	cin >> hindi;

	cout << "Enter the marks of History:" << endl;
	cin >> his;

	float total=eng+maths+sci+hindi+his;

	cout << "Total Marks:" << total << endl;

	float per=total/5;

	cout << "Percentage: " << per << endl;

	(per>=75) ? cout << "Student passed with Grade A" : (per>=60) ? cout << "Student passed with Grade B" :(per>=45) ? cout << "Student passed with Grade C" : cout << "Student is failed";
	return 0;
}
