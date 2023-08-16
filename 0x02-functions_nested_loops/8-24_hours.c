#include "main.h"

/**
 * jack_bauer - prints time from 00:00 to 23:59
 *
 * Description - contains 4 for loops
 * Return: void
*/

void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48; i < 51; i++)
	{
	if ((i == 50) && (j == 52))
	{
		break;
	}
	for (j = 48; j < 58; j++)
	{
	if ((i == 50) && (j == 52))
	{
		break;
	}
	for (k = 48; k < 54; k++)
	{
	if ((i == 50) && (j == 52))
	{
		break;
	}
	for (l = 48; l < 58; l++)
	{
		if ((i == 50) && (j == 52) && (k == 48) && (l == 48))
		{
			break;
		}
		_putchar(i);
		_putchar(j);
		_putchar(58);
		_putchar(k);
		_putchar(l);
		_putchar(10);
	}
	}
	}
	}
}
