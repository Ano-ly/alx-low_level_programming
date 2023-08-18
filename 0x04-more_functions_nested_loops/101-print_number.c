#include "main.h"
#include <stdio.h>


/**
 * print_digit - does the actual printing
 * @i: count of digits in integer
 * @n_duplicate: integer to be printed
 * Description - supplements first function
 * Return: void
*/

void print_digit(int i, int n_duplicate)
{
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

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	n_duplicate = n;

	if (n == 0)
	{
		_putchar(48);
	}
	while (n > 0)
	{
		n = n / 10;

		no++;
	}
	i = no;
	print_digit(i, n_duplicate);
}
