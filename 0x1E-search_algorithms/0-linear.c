#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * using the linear search algorithm
 * @array: the array to be searched
 * @size: size of array
 * @value: value to be searched for
 * Description - searches for a value in an array
 * Return: index of value
*/

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
