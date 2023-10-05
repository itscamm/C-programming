/*
 * CameronCox_Lab2Exercise3.c
 *
 *  Created on: Sep 18, 2023
 *      Author: ccox6
 */

#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

	int n;
	double p1, p2;
	double result;

	printf("Enter an integer n: ");
	scanf("%d", &n);

	p1 = (2*n) + (1/3);
	p2 = sqrt((p1)*PI);

	result = pow(n,n) * exp((-1)*n) * p2;

	printf("%d! equals approximately %f", n, result);

	return 0;
}

