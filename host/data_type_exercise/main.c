/*
 * main.c
 *
 *  Created on: Jun 16, 2026
 *      Author: Assane Dessables
 */

#include<stdio.h>

int main()
{
	unsigned char distanceAB = 160;
	unsigned char distanceBC = 40;

	unsigned char totalDistance = distanceAB + distanceBC;

	printf("Total distance is %dkm\n", totalDistance);
	return 0;
}
