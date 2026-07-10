/*
 * main.c
 *
 *  Created on: Jun 16, 2026
 *      Author: Assane Dessables
 */

#include<stdio.h>
int main()
{
	char *string = "this is a string";
	int int_size = sizeof(string);
	printf("The string of \"%s\" is size of an int is %d\n", string, int_size);
	printf("Address of this variable %d",*string);

	return 0;
}
