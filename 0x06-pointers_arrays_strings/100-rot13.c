#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rot13 - encodes a string in ROT13
 * @str: string to be encoded
 * Description - encodes string to ROT13 using arrays, for loops and if block
 * Return: encoded string
*/

char *rot13(char *str)
{
	int i;
	int j;
	int l1;
	int l2;

	char arr1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char arr2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	l1 = strlen(str);
	l2 = strlen(arr1);

	for (i = 0; i < l1; i++)
	{
		for (j = 0; j < l2; j++)
		{
			if ((int)str[i] == (int)arr1[j])
			{
				str[i] = arr2[j];

				break;
			}
		}
	}
	return (str);
}
