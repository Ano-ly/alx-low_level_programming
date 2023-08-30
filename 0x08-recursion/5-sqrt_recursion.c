#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: number whose square root is to be found
 * Definition - uses another function that uses recursion to find the square
 * root of a number
 * Return: the natural square root of n, -1 if n has no natural square root
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - uses recursion to find the square root of a number
 * @n: number whose square root is to be found
 * @i: starting value for recursive division
 * Definition - uses recursion
 * Return: the square root of the argument
*/

int _sqrt(int n, int i)
{
	if (n < 1)
	{
		return (-1);
	}
	if ((n / i == i) && (n % i == 0))
	{
		return (i);
	}
	if (n / 2 == i)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}
