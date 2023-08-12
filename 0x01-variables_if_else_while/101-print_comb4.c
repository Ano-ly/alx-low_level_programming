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
	int l;

	int comma = 44;
	int space = 32;
	int new = 10;

	for (l = 48; l < 58; l++)
	{
		for (m = 48; m < 58; m++)
		{
			for (n = 48; n < 58; n++)
			{
				if ((l < m) && (m < n))
				{
					putchar(l);
					putchar(m);
					putchar(n);
					if (!(l == 55) || !(m == 56) || !(n == 57))
					{
						putchar(comma);
						putchar(space);
					}
				}
			}
		}
	}

	putchar(new);
	return (0);
}
