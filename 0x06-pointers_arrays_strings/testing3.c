#include <stdio.h>
#include "main.h"
#include <string.h>

void second_byte(char *str, int currline);

int main(void)
{
	int i;

	char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";

	for (i = 0; i < 13; i++)
	{
		first_byte(i);
		second_byte(buffer, i);
		printf("\n");
	}
	return (0);
}

/**
 * third_byte - prints 10 bytes of char
 * @str: string whose bytes are to be printed
 * @currline: the number of the current line
 * Description - uses for loop to print bytes
 * Return: void
*/

void third_byte(char *str, int currline)
{
	int cursor;
	int num;
	int i;
	int l;
	int count;


	cursor = 10 * currline;
	l = strlen(str);
	count = cursor;

	printf("Cursor; %d, currline; %d", cursor, currline);
	printf("String length; %d", l);

	for (i = cursor; i < cursor + 10; i++)
	{
		if (count == l)
		{
			break;
			printf("broken");
		}
		num = (int)str[i];

		if (num < 16)
			printf("0");
		printf("%x", num);
		if (i % 2 == 1)
			printf(" ");
		count++;
	}
}
