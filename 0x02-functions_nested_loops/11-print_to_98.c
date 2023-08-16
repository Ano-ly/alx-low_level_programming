#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting point of printing
 *
 * Description - the value printed increases or decreases progressively until
 * it reaches 98
 * Return: void
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 99)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if ((n > 98) || (n == 98))
	{
		while (n > 97)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	printf("\n");
}
