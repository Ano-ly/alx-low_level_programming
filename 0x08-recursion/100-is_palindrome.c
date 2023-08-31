#include "main.h"

int _len(char *s, int n);
int is_pal(char *s, int n, int l);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if the argument string is a palindrome
 * @s: the string to be checked
 * Definition - uses other functions to check
 * Return: 0, is not palindrome, 1 if palindrome
*/

int is_palindrome(char *s)
{
	return (is_pal(s, 0, _strlen_recursion(s) - 1));
}

/**
 * is_pal - uses recursion to check if a string is a palindrome
 * @s: string to be checked
 * @n: the starting index from the left rightwar
 * @l: the ending index from the right leftward
 * Description - uses recursion
 * Return: 1 if palindrome, 0 if not
*/

int is_pal(char *s, int n, int l)
{
	if (s[n] == '\0')
	{
		return (1);
	}
	if ((n == l) || (n + 1 == l && s[n] == s[l]))
	{
		return (1);
	}
	if (s[n] == s[l])
	{
		return (is_pal(s, n + 1, l - 1));
	}
	else
	{
		return (0);
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

