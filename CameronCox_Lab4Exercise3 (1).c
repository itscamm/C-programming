/*
 * CameronCox_Lab4Exercise3.c
 *
 *  Created on: Sep 29, 2023
 *      Author: ccox6
 */

#include <stdio.h>
#include <math.h>

int find_gcd(int n1, int n2) {
	int q, p, r;
	q = abs(n1);
	p = abs(n2);
	r = q%p;

	while (r != 0) {
		q = p;
		p = r;
		r = q%p;
	}
	return p;
}

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

	int n1,n2, p;

	printf("Enter two numbers to find the greatest divisor between them\n");
	printf("Enter the first number: \n");
	scanf("%d",&n1);
	printf("Enter the second number: ");
	scanf("%d",&n2);

	p = find_gcd(n1, n2);

	printf("The greatest divisor between both numbers is %d.", p);

	return 0;
}

