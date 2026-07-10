/*
 * main.c
 *
 *  Created on: Jun 26, 2026
 *      Author: Assane Dessables
 */

#include <stdio.h>

int main(void){

	double charge, chargeE;
	double electrons;
	printf("enter the charge:");
	scanf("%lf", &charge);

	printf("Enter the charge of an electron:");
	// le is format for scientific notation of a floating point type
	scanf("%le", &chargeE);

	electrons = (charge / chargeE) * -1;
	printf("Total number of electrons = %le\n", electrons);
	printf("Total number of electrons = %lf\n", electrons);
	printf("press 'Enter' key to exit the application \n");

	while(getchar() != '\n');

	getchar();

	return 0;
}
