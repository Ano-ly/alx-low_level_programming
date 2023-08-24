#include "main.h"
#include <string.h>

/**
 * leet - converts string to leet
 * @s: string to be converted
 * Description - converts string
 * Return: converted string
*/

char *leet(char *s)
{
	int array1[] = {97, 101, 111, 116, 108, 65, 69, 79, 84, 76};
	int array2[] = {52, 51, 48, 55, 49, 52, 51, 48, 55, 49};

	int i;
	int j;
	int l;

	l = strlen(s);
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
