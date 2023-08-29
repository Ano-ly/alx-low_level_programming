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
 * _strpbrk - finds first occurence of byte in a string
 * @s: string to be serached
 * @accept: string of matching bytes
 * Definition: uses for and while loop to check for first
 * occurence of byte in string
 * Return: pointer to the index of first occurence
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	char *p;
	int j;
	int l1;
	int l2;
	int determinant;

	p = 0;
	i = 0;
	l1 = _strlen(s);
	l2 = _strlen(accept);
	determinant = 1;

	while (determinant != 0 && i != l1)
	{
		for (j = 0; j < l2; j++)
		{
			if (accept[j] == s[i])
			{
				determinant = 0;
				break;
			}
			else if (j == l2 - 1)
			{
				i++;
			}
		}

	}
	if (determinant == 0)
	{
		p = s + i;
	}
	return (p);
}

