#include "main.h"

int comp(char *s1, char *s2, int n1, int n2);
int end(char *s, int n);

/**
 * wildcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Description - compares two strings
 * Return: 0 if not identical, 1 if identical
*/

int wildcmp(char *s1, char *s2)
{
	return (comp(s1, s2, 0, 0));
}

/**
 * comp - compares two strings
 * @s1: first string
 * @s2: second string
 * @n1: recursion variable for indexing s1
 * @n2: recursion variable for indexing s2
 * Description - compares two strings using recursion
 * Return: 0 if not identical, 1 if identical
*/

int comp(char *s1, char *s2, int n1, int n2)
{
	if ((s1[n1] == '\0') && ((s2[n2] == '\0') || (s2[n2] == '*')))
	{
		return (1);
	}
	if (s1[n1] == s2[n2])
	{
		return (comp(s1, s2, n1 - 1, n2 - 1));
	}
	if ((s1[n1] != s2[n2]) && (s2[end(s2, n2)] == s1[n1]))
	{
		return (comp(s1, s2, n1, end(s2, n2)));
	}
	if ((s2[n2] == '*') || (s2[n2 - 1] == '*'))
	{
		return (comp(s1, s2, n1 + 1, end(s2, n2)));
	}
	else
	{
		return (0);
	}
}

/**
 * end - computes the index of the next character that is not '*'
 * @s: string
 * @n: starting index
 * Description - is called by comp function
 * Return: index of next character that is not '*'
*/

int end(char *s, int n)
{
	if (s[n] != '*')
	{
		return (n);
	}
	else
	{
		return (end(s, n + 1));
	}
}
