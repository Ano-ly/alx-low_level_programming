#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints the last half of a string
 * @str: string whose last half is to be printed
 * Description - uses for loop to print last half of a string
 * Return: void
*/

void puts_half(char *str)
{
	int length;
	int i;

	length = strlen(str);

	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
		{
			printf("%c", str[i]);
		}
	}
	else
	{
		for (i = (length / 2) + 1; i < length; i++)
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
}
