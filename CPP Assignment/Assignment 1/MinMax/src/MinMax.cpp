//============================================================================
// Name        : MinMax.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void findMinMax(int a, int b, int c, int &minVal, int &maxVal){

	//for minimum value
	if(a<=b && a<=c){
		minVal=a;
	}else if(b<=a && b<=c){
		minVal=b;
	}else{
		minVal=c;
	}

	//for maximum value
	if(a>=b && a>=c){
			maxVal=a;
		}else if(b>=a && b>=c){
			maxVal=b;
		}else{
			maxVal=c;
		}
}
int main() {
	int a=10, b=40, c=30;
	int lo;
	int hi;

	findMinMax(a,b,c,lo,hi);
	printf("Maximum value: %d \nMinimum value: %d \n",hi,lo);
	return 0;
}
