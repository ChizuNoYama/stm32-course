/*
 * main.c
 *
 *  Created on: Jun 26, 2026
 *      Author: Assane Dessables
 */

#include <stdio.h>

int main(void){
	float number1;
	float number2;
	float number3;
	float average;

	printf("Enter the first number: ");
	// This is to flush the contents above in the buffer to stdout (display)
	// Eclipse and the ghostty terminal are line buffered so they are auytomatically flushed,
	// but to ensure that they are always flushed regardless of the system it runs, explicitly flush
	fflush(stdout);
	scanf("%f", &number1);

	printf("\nEnter the second number: ");
	fflush(stdout);
	scanf("%f", &number2);

	printf("\nEnter the third number: ");
	fflush(stdout);
	scanf("%f", &number3);

	average = (number1 + number2 + number3) / 3;

	printf("Average: %f\n", average);
	printf("Press enter key to exit...\n");
	while(getchar() != '\n');

	getchar();
	return 0;
}
