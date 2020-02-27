/*
 * David Bonilla Amador
 * CSC-251
 * 2/26/20
 * Question 5 (loop)
 */
#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	double x = 0;
	int i =0;
	double temp;
	for (i = 0; i <11; i++)
	{
		x = x +2;
		x = x/20;
	
	}
	temp = x/20;
	printf("%.3f",temp);
	printf("The Value of x is %f \n", x);

}
