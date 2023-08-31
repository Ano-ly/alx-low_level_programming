#include "main.h"

int comp(char *s1, char *s2, int n1, int n2);
int end(char *s, int n);
int _len(char *s, int n);
int is_dup(char *s1, char *s2, int l1, int l2);

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
	if (s1[n1] == '\0')
	{
		if (s2[n2] == '\0')
		{
			return (1);
		}
		if ((s2[n2] == '*') && (s2[end(s2, n2)] == '\0'))
		{
			return (1);
		}
		else
			return (0);
	}
	if (s1[n1] == s2[n2])
	{
		return (comp(s1, s2, n1 + 1, n2 + 1));
	}
	if ((s1[n1] != s2[n2]) && (s2[end(s2, n2)] == s1[n1]) && !(is_dup(s1,
		s2, (_len(s1, 0) - 1), (_len(s2, 0) - 1))))
	{
		return (comp(s1, s2, n1, end(s2, n2)));
	}
	if (s2[n2] == '*')
	{
		return (comp(s1, s2, n1 + 1, end(s2, n2)));
	}
	if (n2 != 0)
	{
		if (s2[n2 - 1] == '*')
		{
			return (comp(s1, s2, n1 + 1, end(s2, n2)));
		}
		else
		{
			return (0);
		}
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

/**
 * is_dup - checks if there is a sort of repetition in s1 that might affect
 * return result of comp
 * @s1: first string
 * @s2: second string
 * @l1: length of first string minus one, also recursion variable
 * @l2: length of second string minus one, also recursion variable
 * Description - it is called by function comp at a certain if block
 * Return: 1 if there is similarity, 0 if there is
*/

int is_dup(char *s1, char *s2, int l1, int l2)
{
	if ((s2[l2] == '*') && (s2[l2 + 1] != '\0'))
	{
		return (1);
	}
	if (s1[l1] == s2[l2])
	{
		return (is_dup(s1, s2, l1 - 1, l2 - 1));
	}
	else
		return (0);
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
