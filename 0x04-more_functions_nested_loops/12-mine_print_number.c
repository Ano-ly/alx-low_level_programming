#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer argument
 * @n: parameter to be printed
 * Description - using for loops and while loops and the _putchar function
 * Return: void
*/

void print_number(int n)
{
	int i;
	int no = -1;
	int n_duplicate;

	/* Converts n to absolute value if n is negative */
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	/* Creates duplicate of n for second loop so tainted n in first loop is
	 * not used */
	n_duplicate = n;

	/* Prints zero if the argument supplied is zero */
	if (n == 0)
	{
		_putchar(48);
	}

	/* This loop counts the number of digits in the integer supplied */
	while (n > 0)
	{
		n = n / 10;

		no++;
	}

	i = no;

	/* This loop prints the digits of the number each at a time */
	while (i > -1)
	{
		int dig;
		int dig1;
		int exp;
		int ii;

		exp = 1;
		ii = 0;

		while (ii < i)
		{
			exp *= 10;
			ii++;
		}
		if (i == 0)
		{
			exp = 1;
		}
		dig1 = n_duplicate / exp;
		dig = '0' + dig1;

		_putchar(dig);
		n_duplicate -= dig1 * exp;
		i--;
	}
}
