/*
 * CameronCox.c
 *
 *  Created on: Oct 11, 2023
 *      Author: ccox6
 */

#include <stdio.h>
#define PI 3.14159

void calculateSAandV(double r, double *surfaceArea, double *volume) { // function that takes in r, sa, and v
	double r3 = r*r*r;
	double r2 = r*r;
	double fd3 = 4.0/3.0;		// create variables to simplify the function when calculating

	*volume = fd3*PI*r3; // calculate surface area
	*surfaceArea = 4.0*PI*r2;			// calculate volume
}

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

	double r;
	double surfaceArea, volume;		// create variables r, surface area, and volume

	printf("Enter the radius r:");
	scanf("%lf", &r);				// ask user for radius

	calculateSAandV(r, &surfaceArea, &volume);	// implement function and set sa and volume using pointers

	printf("The surface area is equal to %f", surfaceArea);
	printf("\nThe volume is equal to %f", volume);		// output results

	return 0;
}
