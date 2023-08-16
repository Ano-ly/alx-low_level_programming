#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the nine times table
 * Desription - prints the nine times table
 * Return: void
*/

void times_table(void)
{
	int m;
	int n;
	int multed;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			int mult = m * n;

			printf("%d", mult);
			multed = mult + m;

			if ((n != 9) && (multed < 10))
			{
				printf(",");
				printf(" ");
				printf(" ");
			}
			else if ((n != 9) && (multed > 9))
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	}
}
