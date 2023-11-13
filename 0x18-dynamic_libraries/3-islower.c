#include "main.h"

/**
 * _islower - Checks if its argument is in lower case
 * @c: int argument to be checked
 *
 * Description - takes integer argument
 * Return: 1 if c is lowercase, 0 if otherwise
*/


int _islower(int c)
{
	int asciic = (int)c;

	if ((asciic > 96) && (asciic < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
