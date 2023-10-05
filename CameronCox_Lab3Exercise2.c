/*
 * CameronCox_Lab2Exercise3.c
 *
 *  Created on: Sep 25, 2023
 *      Author: ccox6
 */

#include <stdio.h>
#include <math.h>
#define PI 3.14159265

double square(int length) {
	return length * length;
}

double circle(int radius){
	return PI * radius * radius;
}

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

	char choice;
	double value;

	printf("Enter 'c' to calculate the area of a circle, or 's' to calculate the area of a square:");
	scanf("%c", &choice);

	if(choice == 'c'|| choice == 'C') {
		printf("Enter the side length of the circle: ");
		scanf("%lf", &value);
		printf("The area of the circle is %lf", circle(value));
	} else if(choice == 's' || choice == 'S' ) {
		printf("Enter radius of the square: ");
		scanf("%lf", &value);
		printf("The area of the circle is %lf", square(value));
	} else {
		printf("Error. Remember to choose 'c' or 's'.");
	}

	return 0;
}

