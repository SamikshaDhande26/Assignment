//============================================================================
// Name        : AbsoluteAndClamp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int absolute(int n){
	return (n<0) ? -n :n;
}

int clamp(int val,int lo,int hi){
	return (val<lo) ? lo : (val>hi) ? hi : val;
}
int main() {
	printf("-------------------------------------------------------------\n");
	printf("val\t lo\t hi\t\t absolute(val)\t clamp(val,lo,hi)\n",absolute(-15),clamp(-15,-10,10));
	printf("-------------------------------------------------------------\n");
	printf("-15\t -10\t 10\t\t %d\t\t %d\n",absolute(-15),clamp(-15,-10,10));
	printf("-------------------------------------------------------------\n");
	printf("0\t -10\t 10\t\t %d\t\t %d\n",absolute(0),clamp(0,-10,10));
	printf("-------------------------------------------------------------\n");
	printf("25\t -10\t 10\t\t %d\t\t %d\n",absolute(25),clamp(25,-10,10));
	printf("-------------------------------------------------------------\n");
	printf("-3\t 0\t 5\t\t %d\t\t %d\n",absolute(-3),clamp(-3,0,5));
	printf("-------------------------------------------------------------\n");
	return 0;
}
