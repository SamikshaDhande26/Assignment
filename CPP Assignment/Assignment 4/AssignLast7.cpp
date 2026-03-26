//============================================================================
// Name        : AssugnLast7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cstring>
using namespace std;
class String{
	char *str;

public:
	String(){
		str=new char[1];
		str[0]='\0';
	}

	String(const char *s){
		str=new char[strlen(s)+1];
		strcpy(str,s);
	}
};
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
