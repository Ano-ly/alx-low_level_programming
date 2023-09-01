#include "main.h"

/**
 * _isalpha - Checks if its argument is a letter of the alphabet
 * @c: int argument to be checked
 *
 * Description - takes integer argument
 * Return: 1 if c is an alphabet, 0 if otherwise
*/


int _isalpha(int c)
{
	int asciic = (int)c;

	if (((asciic > 96) && (asciic < 123)) || ((asciic > 64) && (asciic < 91)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
