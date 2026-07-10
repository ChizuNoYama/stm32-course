/*
 * main.c
 *
 *  Created on: Jun 17, 2026
 *      Author: Assane Dessables
 */

#include<stdio.h>

int main(){
	short x = 100;

	short* anAddress = (short*)0x200000000;

	printf("Value of the pointer is: %d", *anAddress);
	getchar();
	return 0;
}
