#include <stdlib.h>

int num(char *str);
int end(char *str, int i);
void fill_in(char *str, char **p);

/**
 * strtow - splits a string into constituent parts
 * @str: string to be split
 * Definition - uses three other functions
 * Return: pointer to array of string
*/

char **strtow(char *str)
{
	char **_p;
	int for_malloc;
	int n;
	int j;
	int i;

	j = 0;
	i = 0;

	if (str == NULL)
		return (NULL);
	for_malloc = num(str);
	_p = malloc(sizeof(char *) * (for_malloc + 1));
	if (_p == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		if (str[i] == 32)
			i++;
		else
		{
			n = 0;
			while (str[i] != ' ')
			{
				n++;
				i++;
			}
			_p[j] = malloc(sizeof(char) * (n + 1));
			if (_p[j] == NULL)
				return (NULL);
			j++;
		}
	}
	fill_in(str, _p);
	_p[for_malloc] = '\0';
	return (_p);
}

/**
 * num - computes number of word in string
 * @str: string whose number of words is to be computed
 * Definition - used function 'end'
 * Return: Number of words
*/

int num(char *str)
{
	int count;
	int i;

	count = 0;
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		else
		{
			i = end(str, i);
			i++;
			count++;
		}
	}
	return (count);
}

/**
 * end - computes the index of the end of current word
 * @str: string to be examined
 * @i: current index
 * Definition - it basically figures out where a word ends
 * Return: index of end of current word
*/

int end(char *str, int i)
{
	if (str[i] == ' ')
		return (i - 1);
	else
		return (end(str, i + 1));
}

/**
 * fill_in - does the actual filling in of memory space with necessary chars
 * @str: string where chars are gotten
 * @p: destination array of strings
 * Definition - uses while loops
 * Return: void
*/

void fill_in(char *str, char **p)
{
	int i;
	int j;
	int k;

	j = 0;
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		else
		{
			k = 0;
			while (str[i] != ' ')
			{
				p[j][k] = str[i];
				k++;
				i++;
			}
			p[j][k] = '\0';
			k++;
			j++;
		}
	}
}
