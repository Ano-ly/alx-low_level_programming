#include "main.h"
#include <stdio.h>


/**
 * _strstr - searches
 * @haystack: string to be searched
 * @needle: substring to be searched for
 * Definition: searches for substring
 * Return: pointer to first occurence
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	char *p;
	int loc;

	int j = 0;
	int l1 = _strlen(haystack);
	int l2 = _strlen(needle);
	int found = 0;

	p = 0;
	for (i = 0; i < l1; i++)
	{
		if (haystack[i] == needle[0])
			break;
	}
	loc = i;

	while (i < l1 + 1)
	{
		printf("inside while loop");
		printf("i: %d, j: %d", i, j);
		if (j == l2)
		{

			found = 1;
			break;
		}
		else if (haystack[i] == needle[j])
		{
			printf("i: %d, j: %d", i, j);
			i++;
			j++;
		}
		else
			break;
	}
	if (found == 1)
		p = haystack + loc;
	return (p);
}
