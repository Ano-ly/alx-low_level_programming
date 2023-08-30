#include "main.h"

int _len(char *s, int n);

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
