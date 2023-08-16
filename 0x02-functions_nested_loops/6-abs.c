#include "main.h"

/**
 * _abs - prints the absolute value of argument
 * @int: parameter to be passed
 * Description - a short function
 * Return: always 0
*/

int _abs(int)
{
	if (*int < 1)
	{
		int absolute = *int * -1;

		_putchar(absolute);
		return (0);
	}
	else
	{
		_putchar(*int);
		return (0);
	}

}
