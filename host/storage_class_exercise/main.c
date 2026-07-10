/*
 * main.c
 *
 *  Created on: Jun 17, 2026
 *      Author: Assane Dessables
 */

#include<stdio.h>

static int y = 0; // This variable is private to only this file. This cannot be externed like x can
int x = 0; // This variable is public to all functions of the project.
void fileIncreaseX();

void increaseX()
{
	static int z = 0; // This is within the scope of the function but keeps its variable through lifetime of the application
	x++;
}

int main(){

	printf("X is now: %d\n", x);
	increaseX();
	printf("X is now: %d\n", x);
	increaseX();
	printf("X is now: %d\n", x);

	fileIncreaseX();
	printf("X is now: %d\n", x);

	return 0;
}


// Static keyword makes this function private to the file main.c
static void changeSystemClock(int system_clock)
{
	printf("System clock changed to = %d\n", system_clock);
}
