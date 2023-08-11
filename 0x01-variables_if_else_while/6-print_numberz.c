#include <stdio.h>

/**
 * main - entry point
 * Description - program starts here
 * Return: Always 0
*/

int main(void)
{
	int count;

	int new = 10;
	char newline = (char)new;

	for (count = 0; count < 10; count++)
	{
		putchar(count);
	}
	putchar(newline);
	return (0);
}
