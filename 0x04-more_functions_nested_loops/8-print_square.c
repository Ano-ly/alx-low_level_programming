#include "main.h"

/**
 * print_square - print a square on terminal using #
 * @size: size of square to be printed
 * Description - # will be printed size times on size lines
 * Return: void
*/

void print_square(int size)
{
	if (size > 0)
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			j = 0;
			while (j < size)
			{
				_putchar(35);
				j++;
			}
			_putchar(10);
			i++;

		}
	}
	else
	{
		_putchar(10);
	}
}
