#include "main.h"

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

/**
 * _strspn - counts matching bytes in substring
 * @s: string to be checked for matching bytes
 * @accept: list of bytes that constitute a match
 * Description - uses for and while loops for this purpose
 * Return: integer, number of matching bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int l1;
	int l2;
	int j;
	int determinant;
	int count;

	i = 0;
	count = 0;
	l1 = _strlen(s);
	l2 = _strlen(accept);
	determinant = 1;

	while (determinant != 0 && i != l1)
	{
		for (j = 0; j < l2; j++)
		{
			if (accept[j] == s[i])
			{
				i++;
				count++;
				break;
			}
			else if (j == l2 - 1)
			{
				determinant = 0;
				i++;
			}
		}
	}
	return (count);
}
