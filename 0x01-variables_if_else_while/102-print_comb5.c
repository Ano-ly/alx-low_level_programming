#include <stdio.h>

/**
 * main - entry point
 * Description - program starts here
 * Return: always 0
*/

int main(void)
{
	int k;
	int l;
	int m;
	int n;

	int new = 10;
	int comma = 44;
	int space = 32;

	for (k = 48; k < 58; k++)
	{
		for (l = 48; l < 58; l++)
		{
			for (m = 48; m < 58; m++)
			{
				for (n = 48; n < 58; n++)
				{
					if ((k <= m) && (l < n))
					{
						putchar(k);
						putchar(l);
						putchar(space);
						putchar(m);
						putchar(n);
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
