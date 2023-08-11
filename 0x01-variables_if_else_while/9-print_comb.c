#include <stdio.h>

/**
 * main - entry point
 * Description - program begins here
 * Return: Always 0
*/

int main(void)
{
	int cnt;

	int comma = 44;
	int space = 32;

	for (cnt = 48; cnt < 58; cnt++)
	{
		putchar(cnt);
		if (!(cnt == 57))
		{
			putchar(comma);
			putchar(space);
		}
	}
	return (0);
}
