#include "main.h"

/**
 * print_diagonal - prints diagonal line in terminal
 * @n: length of diagonal to be printed
 * Description - prints n backward slashes across newlines
 * Return: void
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		j = 0;
		while (j < i)
		{
			_putchar(32);
			j++;
		}
		_putchar(92);
		_putchar(10);
	}
	}
}
