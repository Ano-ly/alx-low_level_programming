#include "main.h"

/**
 * more_numbers - prints 1-14 10 times, each on a new line
 * Description - prints numbers
 * Return: void
*/

void more_numbers(void)
{
	int h;
	int i;
	int j;

	for (h = 0; h < 10; h++)
	{
		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 10; j++)
			{
				if ((i == 1) && (j == 5))
				{
					break;
				}
				if (i == 1)
				{
					_putchar('0' + i);
				}
				_putchar('0' + j);

			}
		}
		_putchar(10);
	}
}
