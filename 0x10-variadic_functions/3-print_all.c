#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints all
 * @format: stuff
 * Definition - prints stuff
 * Return: none
*/

void print_all(const char * const format, ...)
{
	va_list some;

	va_start(some, format);
	printf("%d", va_arg(some, int));
	va_end(some);
}
