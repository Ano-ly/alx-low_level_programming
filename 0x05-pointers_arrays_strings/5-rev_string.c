#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - reverses the string passed to it
 * @s: string to be reversed
 * Description - makes use of for loop
 * Return: void
*/

void rev_string(char *s)
{
	int twin1;
	int twin2;
	int i;
	int j;
	int l;

	l = strlen(s);

	for (i = 0; i < l / 2; i++)
	{	j = (l - i) - 1;
		twin1 = s[i];
		twin2 = s[j];
		s[i] = twin2;
		s[j] = twin1;
	}
}
