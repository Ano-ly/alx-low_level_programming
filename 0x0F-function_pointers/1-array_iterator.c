#include <stdlib.h>

/**
 * array_iterator - passes each element of an int array to a function
 * passed into the function array_iterator
 * @array: array of integers
 * @size: size of array passed into the function
 * @action: function passed
 * Definition - a function that takes another function as argument
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
