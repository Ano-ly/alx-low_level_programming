#include "main.h"

/**
 * _isdigit - checks if argument is a digit
 * @c: argument to be checked
 * Definition - checker
 * Return: 1 if c is digit, 0 if otherwise
*/

int _isdigit(int c)
{
	int val = '0' + c;

	if (((val >= 48) && (val <= 57)) || ((val >= 96) && (val <= 105)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
