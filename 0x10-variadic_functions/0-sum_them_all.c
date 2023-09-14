#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - computes the sum of numbers
 * @n: count of arguments
 * Definition - computes the sum of integer arguments
 * Return: the sum of numbers; 0 if n == 0
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list num_list;

	if (n <= 0)
		return (0);

	va_start(num_list, n);
	sum =0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(num_list, int);
	}
	va_end(num_list);

	return (sum);
}
