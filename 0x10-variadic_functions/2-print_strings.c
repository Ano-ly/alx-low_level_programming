#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints string arguments
 * @separator: separator for string to be printed
 * @n: number of arguments
 * Description - prints strings
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str_list;
	char *strr;

	va_start(str_list, n);

	if (n <= 0)
		return;

	for (i = 0; i < n; i++)
	{
		strr = va_arg(str_list, char *);

		if (strr != NULL)
			printf("%s", strr);
		else
			printf("(nil)");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(str_list);
	printf("\n");
}
