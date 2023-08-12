#include <stdio.h>

/**
 * main - entry point
 * description- program begins here
 * Return: always 0
*/

int main(void)
{
	int m;
	int n;

	int comma = 44;
	int space = 32;
	int new = 10;

	for (m = 48; m < 58; m++)
	{
		for (n = 48; n < 58; n++)
		{
			if (m < n)
			{
				putchar(m);
				putchar(n);
				if (!(m == 56) || !(n == 57))
				{
					putchar(comma);
					putchar(space);
				}
			}
		}
	}

	putchar(new);
	return (0);
}
