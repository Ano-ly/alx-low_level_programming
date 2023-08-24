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
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Description - compares two strings using ascii values
 * Return: 0 is similar, positive integer if s1 is greater than s2
 * negative integer if otherwise
*/

int _strcmp(char *s1, char *s2)
{
	int i;
	int s1l;
	int schoose;
	int s2l;

	s1l = _strlen(s1);
	s2l = _strlen(s2);

	if (s1l > s2l)
	{
		schoose = s2l;
	}
	else
	{
		schoose = s1l;
	}

	for (i = 0; i < schoose; i++)
	{
		if (s1[i] - s2[i])
			break;
	}
	return (s1[i] - s2[i]);
}
