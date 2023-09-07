#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of integer
 * @max: maximum value of integer
 * Definition- creates an array of integers with values min to max
 * Return: pointer to created array, NULL if min > max
 * or malloc fails
*/

int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * ((max - min) + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
	{
		p[i] = min + i;
	}
	return (p);
}
