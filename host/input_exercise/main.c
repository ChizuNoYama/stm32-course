/*
 * main.c
 *
 *  Created on: Jun 26, 2026
 *      Author: Assane Dessables
 */


#include <stdio.h>

int main(void){

	char char1;
	char char2;
	char char3;
	char char4;
	char char5;
	char char6;

	printf("Enter 6 characters of your choice: ");

	scanf("%c %c %c %c %c %c", &char1, &char2, &char3, &char4, &char5, &char6);

	printf("\nASCII codes: %u, %u, %u, %u, %u, %u\n", char1, char2, char3, char4, char5, char6);

	printf("Press the enter key to exit the application\n");

	while(getchar() != '\n');

	getchar();

	return 0;
}
