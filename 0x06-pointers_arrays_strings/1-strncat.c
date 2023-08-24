#include <unistd.h>
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
 * _strncat - concatenates two strings based on number of bytes
 * of second string
 * @dest: string to be concatenated into
 * @src: string to be added to dest
 * @n: number of bytes of string to be concatenated
 *
 * Definition - concatenates two strings with a byte limit
 * Return: a pointer to the concatenated string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int dest_l;
	int src_l;
	int i;

	dest_l = _strlen(dest);
	src_l = _strlen(src);


	for (i = 0; i < n; i++)
	{
		dest[dest_l] = src[i];
		dest_l++;
		if (i == src_l - 1)
		{
			break;
		}
	}
	dest[dest_l + 1] = '\0';
	return (dest);
}
