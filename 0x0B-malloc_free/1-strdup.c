#include <stdlib.h>

/**
 * _strdup - this function duplicates a string
 * @str: string to be duplicated
 * Definition - duplicates a string using memory allocation and for loops
 * Return: pointer to duplicate of string
*/

char *_strdup(char *str)
{
	char *p;
	int n;
	int i;

	n = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * (n + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
