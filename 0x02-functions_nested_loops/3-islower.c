#include "main.h"

/**
 * int _islower - Checks if its argument is in lower case
 * @c - int argument to be checked
 * Return: 1 if c is lowercase, 0 if otherwise
*/


int _islower(int c)
{
	int asciic = (int)c;

	if ((asciic > 64) || (asciic < 91))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
