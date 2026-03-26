/*
 ============================================================================
 Name        : Temperature.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
	float celciusToFahrenheit(float );
	float fahrenheitToCelcius(float );

int main() {
	float c=30.5;
	float f=97.7;

	float res1=celciusToFahrenheit(f);
	float res2=fahrenheitToCelcius(c);

	printf("Celcius: %.2f and Farenheit: %.2f\n", c,res1);
	printf("Farenheit: %.2f and Celcius: %.2f \n ", f,res2);

	return 0;
}
float celciusToFahrenheit(float c){
	return (c*9/5)+32;
}
float fahrenheitToCelcius(float f){
	return (f-32)*5/9;
}
