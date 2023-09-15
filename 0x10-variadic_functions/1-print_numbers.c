#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

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
	va_list num_list;
	int num;

	va_start(num_list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(num_list, int);
		printf("%d", num);
		if (i != n - 1 && separator != NULL)
		{
			printf(separator);
		}
	}
	va_end(num_list);
	printf("\n");
}
