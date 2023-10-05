/*
 * CameronCox_Lab4Exercise2.c
 *
 *  Created on: Sep 29, 2023
 *      Author: ccox6
 */

#include <stdio.h>
#include <math.h>


int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

	int count_years;
	int population = 9870;

	while(population < 30000) {
		count_years++;
		population *= 1.1;
		printf("Year %d: Population = %d\n", count_years, population);
	}

	printf("Population surpasses 30000 after %d years.", count_years);

	return 0;
}

