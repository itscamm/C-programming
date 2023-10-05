/*
 * CameronCox_Lab3Exercise1.c
 *
 *  Created on: Sep 25, 2023
 *      Author: ccox6
 */

#include <stdio.h>

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

	int item, product = 1;

	printf("Enter number of items: ");
	scanf("%d", &item);

	product *= item;

	if(item != 0){
		printf("Cost of items = %d", product);
	} else {
		printf("Cost of items = %d", product);
	}

	return 0;
}
