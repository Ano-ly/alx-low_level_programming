#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @f: the argument whose last digit is to be outputted
 *
 * Description - a short function
 * Return: last digit of parameter f
*/

int print_last_digit(int f)
{
	int remo = f % 10;

	if (remo > 0)
	{
		_putchar('0'+ remo);
		return (remo);
	}
	else
	{
		remo = -remo;

		_putchar('0' + remo);
		return (remo);
	}
}
