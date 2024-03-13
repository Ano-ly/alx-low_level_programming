#include <stdio.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in an array using the jump search
 * algorithm
 * @array: array to be searched in
 * @size: size of array
 * @value: value to be searched for
 * Definition - searches for a value in an array using the
 * jump search
 * Return: index of value in array, -1 if value not found
*/

int jump_search(int *array, size_t size, int value)
{
	int start;
	int end;
	int lower;
	int upper;
	int i;
	int step;

	start = 0;
	end = (int)(size - 1);
	step = sqrt(size);

	while (1)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		start += step;
		if (start > end)
			break;
		if (array[start] >= value)
			break;
	}
	lower = start - step;
	if (start < end)
		upper = start;
	else
		upper = end;
	printf("Value found between indexes [%d] and [%d]\n", lower, start);
	for (i = lower; i < upper + 1; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
