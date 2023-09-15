#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints number arguments
 * @separator: separator between each integer printing
 * @n: number of arguments
 * Description - uses variadic functions
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list num_list;

	if (n != 0)
	{
	va_start(num_list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(num_list, int);
		printf("%d", num);
		if (separator != NULL)
		{
			if (i != n - 1)
			{
				printf(separator);
			}
		}
	}
	}

	va_end(num_list);
	printf("\n");
}
