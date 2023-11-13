#include "main.h"

/**
 * _strchr - finds the first occorence of a character in a string
 * @s: the string to be searched
 * @c: the character to be searched for
 * Definition - searched for c using for loop
 * Return: pointer to first occurence, NULL if not found.
*/

char *_strchr(char *s, char c)
{
	int l;
	int i;
	char *p;

	p = ((void *)0);
	l = _strlen(s);

	for (i = 0; i < l; i++)
	{
		if (s[i] == c)
		{
			p = s + i;
			break;
		}
	}
	return (p);
}
