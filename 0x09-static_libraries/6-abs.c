#include "main.h"
#include <stdio.h>

/**
 * _abs - prints the absolute value of argument
 * @m: parameter to be passed
 *
 * Description - a short function
 * Return: always 0
*/

int _abs(int m)
{
	if (m < 1)
	{
		int absolute = m * -1;

		return (absolute);
	}
	else
	{
		return (m);
	}

}
