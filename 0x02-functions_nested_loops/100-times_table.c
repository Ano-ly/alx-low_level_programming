#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table
 * @n: the type of times table to be printed
 *
 * Desription - prints the n times table
 * Return: void
*/

void print_times_table(int n)
{
	if ((n < 16) && ((n > 0) || (n == 0)))
	{
		int m;
		int p;
		int multed;
		int limit = n + 1;

		for (m = 0; m < limit; m++)
		{
			for (p = 0; p < limit; p++)
			{
				int mult = m * p;

				printf("%d", mult);
				multed = mult + m;

				if ((p != n) && (multed < 10))
				{
					printf(",");
					printf("  ");
					printf(" ");
				}
				else if ((p != n) && (multed > 99))
                                {
                                        printf(",");
                                        printf(" ");
                                }
				else if ((p != n) && (multed > 9))
				{
					printf(",");
					printf("  ");
				}
			}
			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
}
