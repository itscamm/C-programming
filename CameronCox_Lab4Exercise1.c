/*
 * CameronCox_Lab4Exercise1.c
 *
 *  Created on: Sep 29, 2023
 *      Author: ccox6
 */

#include <stdio.h>
#include <math.h>s

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

	int n;
	int i = 0;
	int sum = 0;
	int wsum;
	int p;

	printf("Enter integer N: ");
	scanf("%d", &n);

	while(i <= n) {
	sum = sum + i;
	i++;
	}

	p = (n+1);
	wsum = n*p/2.0;

	if(sum==wsum) {
	  printf("Sums with loop is %d which is the same as the sum using the equation which also gets %d", sum, wsum);
	} else {
		printf("Sum of the loop (%d) is not equal to sum of the equation (%d)", sum, wsum);
	}

	return 0;
}

