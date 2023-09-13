#include <stdlib.h>

/**
 * int_index - searched for the first instance in an array that
 * satisfies a certain condition as indicated by a function passed
 * @array: array to be searched in
 * @size: size of array passed
 * @cmp: function passed
 * Definition - searches for an integer in an array
 * Return: the index of the first instance of integer found
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int conf;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
	for (i = 0; i < size; i++)
	{
		conf = (*cmp)(array[i]);
		if (conf != 0)
			return (i);
	}
	}
	return (-1);
}


