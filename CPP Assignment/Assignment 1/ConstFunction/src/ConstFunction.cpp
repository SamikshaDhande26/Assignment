//============================================================================
// Name        : ConstFunction.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
const float PI=3.14159f;
float circleArea(float radius){
	float area=PI*radius*radius;
	return area;
}

float circlePerimeter(float radius){
	float circumference=2*PI*radius;
	return circumference;
}
int main() {
	//PI=3.0f;  //error:assignment of read-on;y variable

	float radius=7.0;

	float res1=circleArea(radius);
	float res2=circlePerimeter(radius);

	printf("Area of circle:%.4f \n",res1);
	printf("Circumference of circle:%.4f \n",res2);
	return 0;
}
