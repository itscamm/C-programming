/*
 * exercise1.c
 *
 *  Created on: Sep 7, 2023
 *      Author: ccox6
 */

#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

	int fahrenheit;
	double celsius;


	printf("Enter degrees in Fahrenheit: ");
	scanf("%d",&fahrenheit);

	celsius = (double)5 / 9 * (fahrenheit - 32);

	printf("%d degrees Fahrenheit is equal to %.2f degrees Celsius.", fahrenheit, celsius);

	return 0;
}
