#include <stdio.h>

/**
 * main - entry point
 * Description - program starts here
 * Return: Always 0
*/

int main(void)
{
	int cn;

	int new = 10;
	char newline = (char)new;

	for (cn = 48; cn < 58; cn++)
	{
		putchar(cn);
	}
	for (cn = 97; cn < 103; cn++)
	{
		putchar(cn);
	}

	putchar(newline);
	return (0);
}
