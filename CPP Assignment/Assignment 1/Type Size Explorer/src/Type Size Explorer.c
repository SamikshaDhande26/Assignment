/*
 ============================================================================
 Name        : Type.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	printf("Size of short int is:%d bytes \n",sizeof(short int));
	printf("Size of int is: %d bytes \n",sizeof(int));
	printf("Size of long int is: %d bytes \n",sizeof(long int));
	printf("Size of long long int is: %d bytes \n",sizeof(long long int));
	printf("Size of unsigned int is: %d bytes \n",sizeof(unsigned int));
	printf("Size of float is: %d bytes \n",sizeof(float));
	printf("Size of double int is: %d bytes \n",sizeof(double));
	printf("Size of long double int is: %d bytes \n",sizeof(long double));
	return 0;
}

/*
  Which two types have the same size on your machine?
  -->1)int ,long int, unsigned int and float have same size that is 4 bytes.
     2)long long int and double int have same size that is 8 bytes.

  Does unsigned int have a different size than int?
  -->No, both has same size that is 4 byte.
  */
