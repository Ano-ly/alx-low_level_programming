#include <stdlib.h>

int calc_len(char *s1, char *s2);

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

	len = calc_len(s1, s2);
	i = 0;
	j = 0;

	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
		return (NULL);
	i = 0;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			p[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
		{
			p[i] = s2[j];
			i++;
			j++;
		}
	}
	p[i] = '\0';

	return (p);
}

/**
* calc_len - calculates the required length of memory space
* @s1: first string to be considered
* @s2: second string to be considered
* Definition - calculates len
* Return: value of len
*/

int calc_len(char *s1, char *s2)
{
	int len;
	int i;

	len = 0;
	i = 0;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			len++;
			i++;
		}
	}
	i = 0;

	if (s2 != NULL)
	{
		while (s2[i] != '\0')
		{
			len++;
			i++;
		}
	}

	if (len == 0)
	{
		return (0);
	}
	return (len);
}
