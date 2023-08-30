#include "main.h"

int _strlen(char *s);
void _iter(char *s, int n);

/**
 * _print_rev_recursion - uses another function that uses recursion to print
 * the reversed form of a string
 * @s: string to be printed in the reverse order
 * Definition - uses another function to print
 * Return: void
*/

void _print_rev_recursion(char *s)
{
	_iter(s, _strlen(s) - 1);
}

/**
 * _iter - uses recursion to print string in reversed order
 * @s: string to be printed
 * @n: the maximum index of the string
 * Definition - used recursion to print reversed order of string
 * Return: void
*/

void _iter(char *s, int n)
{
	if (n < 0)
	{
		return;
	}
	else
	{
		_putchar(s[n]);
		_iter(s, n - 1);
	}
}

/**
 * _strlen - computes the length of a string
 * @str: string whose length is to be computed
 * Description - computes length of string
 * Return: integer, length of string
*/

int _strlen(char *str)
{
	int i;
	int lenn;

	i = 0;
	lenn = 0;

	while (str[i] != 0)
	{
		lenn++;
		i++;
	}
	return (lenn);
}
