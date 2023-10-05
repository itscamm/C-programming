/*
 * CameronCox_Lab2Exercise2.c
 *
 *  Created on: Sep 18, 2023
 *      Author: ccox6
 */

#include <stdio.h>
#include <math.h>

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

	double x1, y1, z1, x2, y2, z2;
	double distance;

	printf("Enter the first coordinate set: \n");
	printf("x: ");
	scanf("%lf", &x1);
	printf("y: ");
	scanf("%lf", &y1);
	printf("z: ");
	scanf("%lf", &z1);

	printf("Enter the second coordinate set: \n");
	printf("x: ");
	scanf("%lf", &x2);
	printf("y: ");
	scanf("%lf", &y2);
	printf("z: ");
	scanf("%lf", &z2);

	distance = sqrt(pow(x1-x2, 2) + pow(y1-y2,2) + pow(z1-z2,2));

	printf("The distance between the two coordinates is %.2f", distance);

	return 0;
}
