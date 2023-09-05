#include <stdlib.h>

/**
 * str_concat - concatenates strings
 * @s1: first string
 * @s2: second string
 * Description - concatenates two strings and return pointer to a new memory
 * space with concatenated strings
 * Return: pointer to new memory space
*/

char *str_concat(char *s1, char *s2)
{
	char *p;
	int len;
	int i;
	int j;

	len = 0;
	i = 0;
	j = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (s1[i] != '\0' && s1 != NULL)
	{
		len++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0' && s2 != NULL)
	{
		len++;
		i++;
	}
	if (len == 0)
		return (NULL);
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && s1 != NULL)
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0' && s2 != NULL)
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}
