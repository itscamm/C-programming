/*
 * CameronCox_Lab5Exercise1.c
 *
 *  Created on: Oct 5, 2023
 *      Author: ccox6
 */

#include <stdio.h>

void sum_average(double x,double y,double z, double *sum, double *average) {
	*sum = x+y+z;
	*average = *sum /3.0;
}

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

	double x, y, z;
	double result_sum, result_avg;

	printf("Enter three numbers to find the sum and average.");
	printf("\nEnter x: ");
	scanf("%lf", &x);
	printf("\nEnter y: ");
	scanf("%lf", &y);
	printf("\nEnter z: ");
	scanf("%lf", &z);

	sum_average(x,y,z,&result_sum,&result_avg);

    printf("\nSum: %lf\n", result_sum);
    printf("Average: %lf\n", result_avg);

	return 0;
}
