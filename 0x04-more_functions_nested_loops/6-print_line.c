#include "main.h"

/**
 * print_line - prints straight line in terminal
 * @n: length of line to be printed
 * Description - n dashes are printed to form a line
 * Return: void
*/

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
		_putchar(10);
	}
}
