#include "main.h"

/**
 * print_triangle - prints triangle in terminal
 * @size: height of triangle to be printed
 * Description - prints size hashes incremented across newlines
 * Return: void
*/

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
	int i;
	int j;
	int k;
	int l;

	for (i = 1; i < size + 1; i++)
	{
		k = size - i;

		for (j = 0; j < k; j++)
		{
			_putchar(32);
		}
		for (l = 0; l < i; l++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
	}
}
