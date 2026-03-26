//============================================================================
// Name        : 4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;




int main() {
	//int *arr=new int[5];

	int *arr=(int*)malloc(5*sizeof(int));

		cout << "Enter 5 integers:" << endl;
		for(int i=0;i<5;i++){
			cin >> arr[i];
		}

		cout << "Entered Numbers:" << endl;
		for(int i=0;i<5;i++){
			cout << arr[i] << " ";
		}

		//delete[] arr;
		free(arr);
	return 0;
}
