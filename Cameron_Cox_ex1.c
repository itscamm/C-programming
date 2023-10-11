/*
 * CameronCox.c
 *
 *  Created on: Oct 11, 2023
 *      Author: ccox6
 */

#include <stdio.h>

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

	double x,y;	// create variables x and y

	printf("Enter the coordinate x: ");
	scanf("%lf", &x);
	printf("Enter the coordinate y: ");
	scanf("%lf", &y);						// ask user for x and y

	if(x == 0) {
		printf("(%f, %f) is on the x axis", x, y);	//if else statements for every possible outcome
	} else if(y == 0) {								// used <,> to see if x and y is below or above zero
		printf("(%f, %f) is on the y axis", x, y);  // depending on if x,y is above or below you can figure out
	} else if(x > 0 && y > 0) {						// what quadrant the coordinates belong in
		printf("(%f, %f) is in quadrant B", x, y);
	} else if(x < 0 && y > 0) {
		printf("(%f, %f) is in quadrant D", x, y);
	} else if(x < 0 && y < 0){
		printf("(%f, %f) is in quadrant C", x, y);
	} else if(x > 0 && y < 0) {
		printf("(%f, %f) is in quadrant A", x, y);
	}

	return 0;
}
