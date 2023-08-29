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
 * _strstr - searches
 * @haystack: string to be searched
 * @needle: substring to be searched for
 * Definition: searches for substring
 * Return: pointer to first occurence
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int l1;
	int l2;
	int found;
	char *p;
	int loc;

	j = 0;
	p = 0;
	l1 = _strlen(haystack);
	l2 = _strlen(needle);
	found = 0;

	for (i = 0; i < l1; i++)
	{
		if (haystack[i] == needle[0])
			break;
	}
	loc = i - 1;

	while (i != l1)
	{
		if (j == l2)
		{
			found = 1;
			break;
		}
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
			continue;
		}
		else
			break;
	}
	if (found == 1)
		p = haystack + loc;
	return (p);
}
