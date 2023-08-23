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
 * _strcat - concatenates two strings
 * @dest: string to be concatenated into
 * @src: string to be added to dest
 *
 * Definition - concatenated two strings
 * Return: a pointer to the concatenated string dest
*/

char *_strcat(char *dest, char *src)
{
	int dest_l;
	int src_l;
	int i;

	dest_l = _strlen(dest);
	src_l = _strlen(src);


	for (i = 0; i < src_l; i++)
	{
		dest[dest_l] = src[i];
		dest_l++;
	}
	return (dest);
}
