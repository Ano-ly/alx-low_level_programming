#include "main.h"
#include <stdio.h>

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
