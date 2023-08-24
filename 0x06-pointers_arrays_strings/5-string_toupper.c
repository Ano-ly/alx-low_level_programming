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
 * string_toupper - converts all lowercase to uppercase
 * @s: string to be converted
 *
 * Description - uses for loop to convert to uppercase
 * Return: pointer to converted string
*/

char *string_toupper(char *s)
{
	int i;
	int l;

	l = _strlen(s);

	for (i = 0; i < l; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}
	return (s);

}
