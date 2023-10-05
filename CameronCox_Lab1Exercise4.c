/*
 * CameronCox_Lab1Exercise4.c
 *
 *  Created on: Sep 12, 2023
 *      Author: ccox6
 */

#include <stdio.h>

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);

	double IntMile, EndMile, diff, rate, reimb;
	rate = .35;

	printf("Enter beginning odometer reading: ");
	scanf("%lf", &IntMile);
	printf("Enter ending odometer reading: ");
	scanf("%lf", &EndMile);

	diff = EndMile - IntMile;
	reimb = diff * rate;

	printf("You traveled %.1f. At $%.2f per mile, your reimbursement is $%.2f.", diff, rate, reimb);

	return 0;
}
