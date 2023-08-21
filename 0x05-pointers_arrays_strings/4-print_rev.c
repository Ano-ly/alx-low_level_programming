#include "main.h"
#include <string.h>
#include <stdio.h>

/**
  * print_rev - prints the reversed form of the string argument
  * @s: string whose reversed form is to be printed
  * Description - takes a string argument and prints its reversed form
  * Return: void
*/

void print_rev(char *s)
{
	int i;
	int _length;
	int value;

	_length = strlen(s);

	for (i = _length - 1; i > -1; i--)
	{
		value = s[i];
		printf("%c", value);
		printf("\n");
	}

}
