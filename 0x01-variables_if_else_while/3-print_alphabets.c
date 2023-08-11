#include <stdio.h>

/**
 * main -entry point
 * Description - program starts here
 * Return: Always 0
*/

int main(void)
{
	int c;

	int new = 10;
	char newline = (char)new;

	for (c = 97; c < 123; c++)
	{
		char ch = (char)c;

		putchar(ch);
	}
	for (c = 65; c < 91; c++)
	{
		char ch = (char)c;

		putchar(ch);
	}

	putchar(newline);
	return (0);

}
