#include <stdlib.h>

unsigned int _strlen(char *str);

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to copy
 * Definition - concatenates two strings into an allocated memory space
 * Return: NULL, if malloc or function fails, pointer to concatenated string
 * if success
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pp;
	int for_malloc;
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	for_malloc = 0;

	if (_strlen(s2) <= n)
		for_malloc += _strlen(s1) + _strlen(s2) + 1;
	else
		for_malloc += _strlen(s1) + n + 1;
	pp = malloc(sizeof(char) * for_malloc);
	if (pp == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			pp[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0' && j < n)
		{
			pp[i] = s2[j];
			j++;
			i++;
		}
		pp[i] = '\0';
	}
	return (pp);
}

/**
 * _strlen - computes the length of a string
 * @str: string whose length is to be computed
 * Description - computes length of string
 * Return: integer, length of string
*/

unsigned int _strlen(char *str)
{
	int i;
	unsigned int lenn;

	i = 0;
	lenn = 0;

	if (str == NULL)
	{
		return (0);
	}

	while (str[i] != 0)
	{
		lenn++;
		i++;
	}
	return (lenn);
}
