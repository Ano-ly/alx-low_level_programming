#include "main.h"

/**
 * print_alphabet - prints the letters of the alphabet
 *
 * Returns: void
*/

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar (i);
		i++;
	}
	_putchar (10);
}

