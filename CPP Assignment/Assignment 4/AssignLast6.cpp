//============================================================================
// Name        : AssignLast6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Vector{
	int size;
	int* arr;

public:
	Vector(int s){
		size=s;
		arr=new int[size];
	}

	~Vector(){
		delete[] arr;
	}

	int& operator[] (int index){
		return arr[index];
	}

	int operator()(){
		int sum=0;
		for(int i=0; i<size;i++){
			sum+=arr[i];
		return sum;
		}
	}
};
int main() {
	Vector v(5);

	for(int i=0;i<5;i++){
		v[i]=i+1;
	}

	v[2]=50;

	cout<<"Elements:";
	for(int i=0;i<5;i++){
		cout <<v[i] <<" ";
	}

	cout<< endl;

	cout << "!Sum of elemnets:" <<v() << endl; // prints !!!Hello World!!!
	return 0;
}
