#include "main.h"

/**
 * _pow_recursion - computes the result of a number raised to another number
 * @x: the base
 * @y: the power
 * Description - uses recursion to compute
 * Return: result of calculation, -1 if y is less that 0
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
