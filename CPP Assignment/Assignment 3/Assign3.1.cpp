//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Box{
private:
	int length;
	int width;
	int height;

public:
	Box(int length, int width, int height){
		this->length=length;
		this->width=width;
		this->height=height;
	}

	void setDimensions(int l,int w, int h){
		this->length=l;
		this->width=w;
		this->height=h;
	}

	int volume(){
		int volume=length*width*height;
		return volume;
	}
};

int main() {

	Box b(5,2,5);

	cout<< "Volume of b: " << b.volume() << endl;

	Box b1(0,0,0);
	b1.setDimensions(7,3,6);
	cout << "Volume of b1: " << b1.volume() << endl;
	return 0;
}
