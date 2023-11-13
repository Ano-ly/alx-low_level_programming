#include "main.h"

/**
 * _strspn - counts matching bytes in substring
 * @s: string to be checked for matching bytes
 * @accept: list of bytes that constitute a match
 * Description - uses for and while loops for this purpose
 * Return: integer, number of matching bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int l1;
	int l2;
	int j;
	int determinant;
	int count;

	i = 0;
	count = 0;
	l1 = _strlen(s);
	l2 = _strlen(accept);
	determinant = 1;

	while (determinant != 0 && i != l1)
	{
		for (j = 0; j < l2; j++)
		{
			if (accept[j] == s[i])
			{
				i++;
				count++;
				break;
			}
			else if (j == l2 - 1)
			{
				determinant = 0;
				i++;
			}
		}
	}
	return (count);
}
