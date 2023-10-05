/*
 * CameronCox_Lab2Exercise1.c
 *
 *  Created on: Sep 18, 2023
 *      Author: ccox6
 */

#include <stdio.h>
#include <math.h>

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

	double x, y;
	double diff;

	printf("Enter the first digit: ");
	scanf("%lf", &x);
	printf("Enter the second digit: ");
	scanf("%lf", &y);

	diff = fabs(x-y);

	printf("The difference between x and y is %f", diff);

	return 0;
}
