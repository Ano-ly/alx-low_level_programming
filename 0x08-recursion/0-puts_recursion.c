#include "main.h"

void iter(char *s, int n);

/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 * Description - uses recursipn to print a string
 * Return: void
*/

void _puts_recursion(char *s)
{
	int n;

	n = 0;

	iter(s, n);
}

/**
 * iter - does the actual printing
 * @s: the string to be printed
 * @n: the starting index to print
 * Definition - uses actual recursion
 * Return: void
*/

void iter(char *s, int n)
{
	if (s[n] == '\0')
	{
		return;
	}
	else
	{
		_putchar(s[n]);
		iter(s, n + 1);
	}
}
