/*
 * CameronCox_Lab5Exercise2.c
 *
 *  Created on: Oct 5, 2023
 *      Author: ccox6
 */

#include <stdio.h>
#include <stdlib.h>

int product1(int n1, int n2) {
	return n1 * n2;
}

void product2(int n1, int n2, int *p) {
	*p = n1 * n2;
}

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

	FILE *file;
	int n1, n2;
	int r1, r2;

	file = fopen("integers.txt", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    if (fscanf(file, "%d %d", &n1, &n2) != 2) {
        printf("Error reading integers from the file.\n");
        fclose(file);
        return 1;
    }

    fclose(file);

    r1 = product1(n1, n2);
    product2(n1, n2, &r2);

    if (r1 == r2) {
    	printf("The result from the function product1, %d, is equal to the result from the function product2, %d.", r1, r2);
    } else {
    	printf("The result from the function product1, %d, does not equal to the result from the function product2, %d.", r1, r2);
    }

	return 0;
}

