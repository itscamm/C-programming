/*
 * CameronCox.c
 *
 *  Created on: Oct 11, 2023
 *      Author: ccox6
 */

#include <stdio.h>

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

	for(int i = 0; i < 10; i++){			// for loop that runs 10 times with i starting at 0
		printf("Line %d: %d \n", i, -i-1); // output line i to start with 0 and use -i-1 to get i negative and subtract 1 to start with -1
	}

	return 0;
}
