#include "main.h"

/**
 * print_sign - prints the sign of the argument
 * @n: int argument whose sign will be printed by funtion
 *
 * Definition - a short function
 * Return: 0 is n is 0, -1 id n is negative, 1 if n is positive
*/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(43);
		return (1);
	}
}
