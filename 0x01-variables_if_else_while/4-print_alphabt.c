#include <stdio.h>

/**
 * main - entry point
 * Description - program starts here
 * Return: always 0
*/

int main(void)
{
	int c;
	char newline;
	int n = 10;
	newline = (char)n;

	for (c = 97; c < 123; c++)
	{
		char chr = (char)c;

		if (!(c == 101 || c == 113))
		{
			putchar(chr);
		}
	}
	putchar(newline);
	return (0);
}
