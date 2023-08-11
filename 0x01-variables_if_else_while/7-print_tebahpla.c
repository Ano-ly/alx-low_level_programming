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

	for (c = 122; c > 96; c--)
	{
		char ch = (char)c;

		putchar(ch);
	}
	putchar(newline);
	return (0);

}

