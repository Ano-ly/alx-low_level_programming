#include "main.h"

int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

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
		return _sqrt(n, i + 1);
	}
}
