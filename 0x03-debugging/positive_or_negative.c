#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point
 * description: the program prints negative, positive or zero
 * Return: void
*/
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
