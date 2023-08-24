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
 * leet - converts string to leet
 * @s: string to be converted
 *
 * Description - letters a,e,o,t,l,A,E,O,T,L are converted to
 * 4,3,0,7,1,4,3,0,7,1 respectively
 * Return: pointer to converted string
*/

char *leet(char *s)
{
	int array1[] = {97, 101, 111, 116, 108, 65, 69, 79, 84, 76};
	int array2[] = {52, 51, 48, 55, 49, 52, 51, 48, 55, 49, 52};

	int i;
	int j;
	int l;

	l = _strlen(s);
	i = 0;

	for (i = 0; i < l; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == array1[j])
			{
				s[i] = (char)array2[j];
			}
		}
	}
	return (s);
}
