#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - prints every other character of a string starting withthe first
 * character
 * @str: string argument
 * Description - uses for loop to print every other character in str argument
 * Return: void
*/

void puts2(char *str)
{
	int i;
	int length;

	length = strlen(str);

	for (i = 0; i < length; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
