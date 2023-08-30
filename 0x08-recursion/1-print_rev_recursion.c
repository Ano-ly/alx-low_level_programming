#include "main.h"

void _iter(char *s, int n);
int _strlen_recursion(char *s);
int _len(char *s, int n);

/**
 * _print_rev_recursion - uses another function that uses recursion to print
 * the reversed form of a string
 * @s: string to be printed in the reverse order
 * Definition - uses another function to print
 * Return: void
*/

void _print_rev_recursion(char *s)
{
	_iter(s, _strlen_recursion(s) - 1);
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
 * _strlen_recursion - uses another function that uses recursion to calculate
 * and print the length of the string.
 * @s: string whose length is to be calculated
 * Definition - calculates the length of a string
 * Return: length of string
*/

int _strlen_recursion(char *s)
{
	return (_len(s, 0));
}

/**
 * _len - uses recursion to print the length of a string
 * @s: string whose length is to be printed
 * @n: the starting point for the index
 * Definition - uses recursion
 * Return: length of the string argument
*/

int _len(char *s, int n)
{
	if (s[n] == '\0')
	{
	return (0);
	}
	else
	{
		return (1 + _len(s, n + 1));
	}
}
