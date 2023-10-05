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

	double radius;
	double area;

	printf("Enter the radius: ");
	scanf("%lf", &radius);

	area = PI * radius * radius;

	printf("\nThe area of the circle is %f", area);

	return 0;
}
