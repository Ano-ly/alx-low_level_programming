#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints number arguments
 * @separator: separator between each integer printing
 * @n: number of arguments
 * @...: other arguments
 * Description - uses variadic functions
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num_list;

	if (n <= 0)
		return;

	va_start(num_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num_list, int));
		if (separator != NULL)
		{
			if (i != n - 1)
			{
				printf(separator);
			}
		}
	}

	va_end(num_list);
	printf("\n");
}
