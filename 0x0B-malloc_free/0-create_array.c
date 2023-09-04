#include <stdlib.h>

/**
 * create_array - creates an array initialised with a character
 * @size: desired length of array
 * @c: the character to be initialised with
 * Definition - uses for loop to create array
 * Return: pointer to first character of array; null if malloc fails
*/

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc((size + 1) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
