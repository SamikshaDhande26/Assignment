//============================================================================
// Name        : PointerSwap.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>

int main()
{
    int x = 10, y = 20, z = 30;

    // Create pointers
    int *px = &x;
    int *py = &y;
    int *pz = &z;

    // Print values before swap (using dereferencing only)
    printf("Before swap:\n");
    printf("x = %d, y = %d, z = %d\n", *px, *py, *pz);

    printf("Addresses stored in each pointer:\n");
    printf("Address of x:%p \nAddress of y:%p \nAddress of z:%p \n",px,py,pz);

    int temp;
    temp=*px;
    *px=*py;
    *py=temp;

    printf("After swap:\n");
    printf("x = %d, y = %d, z = %d\n", *px, *py, *pz);

    printf("Addresses stored in each pointer:\n");
    printf("Address of x:%p \nAddress of y:%p \nAddress of z:%p \n",px,py,pz);


    return 0;

}
