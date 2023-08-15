#include "main.h"

/**
 * print_alphabet_x10 - prints the letters of the alphabet on ten successive
 * lines
 *
 * Return: void
*/

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar(10);
	}
}
