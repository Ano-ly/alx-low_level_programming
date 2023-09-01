#include "main.h"
#include <stdio.h>

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
 * _strcpy - copies string
 * @dest: one string
 * @src: another string
 * Definition - copies string
 * Return: a char
*/


char *_strcpy(char *dest, char *src)
{
	int length;
	int i;

	length = _strlen(src);

	for (i = 0; i < length + 1; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
