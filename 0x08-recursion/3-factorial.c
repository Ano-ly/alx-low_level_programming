#include "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n: number whose factorial is to be calculated
 * Description - calculates factorial using recursion
 * Return: factorial of n, 0 if n is 1, -1 if n is less than 1
*/

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
