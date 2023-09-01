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
 * _strncpy - copies one string into another.
 * @dest: string to be copied into
 * @src: string to be copied
 * @n: maximum number of bytes to be copied
 *
 * Description - uses for loop and indexes to src into dest
 * Return: pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int src_l;

	src_l = _strlen(src);

	for (i = 0; i < n; i++)
	{
		if (i > src_l)
		{
			dest[i] = '\0';
		}
		else
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
