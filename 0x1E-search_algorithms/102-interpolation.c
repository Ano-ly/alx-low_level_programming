#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array
 * using a binary search algorithm
 * @array: array to be searched in
 * @size: size of array
 * @value: value to be searched for
 * Description - searches an array for a value
 * Return: index of the value, -1 if value not found
*/

int interpolation_search(int *array, size_t size, int value)
{
	int low;
	int high;
	int m_o;
	int val;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	m_o = (int)((low + high) / 2);

	val = rec(low, high, m_o, array, value);
	return (val);
}

/**
 * rec - performs recursive binary search
 * @low: lower bound index
 * @high: upper bound index
 * @array: array to be searched in
 * @value: value to be searched for
 * @m_o: midpoint index
 * Description - searches for a value using recursive binary
 * search algorithm
 * Return: index of value, -1 if not found
*/

int rec(int low, int high, int m_o, int *array, int value)
{
	print_array(low, high, array);
	m_o = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
	printf("%d", m_o);
	if (array[m_o] == value)
	{
		return (m_o);
	}
	if (low >= high)
		return (-1);
	if (array[m_o] < value)
		return (rec(m_o + 1, high, m_o, array, value));
	if (array[m_o] > value)
		return (rec(low, m_o - 1, m_o, array, value));
	return (-1);
}

/**
 * print_array - prints an array
 * @low: lower bound index
 * @high: upper bound index
 * @array: array to be printed
 * Description - prints an array
 * Return: void
*/

void print_array(int low, int high, int *array)
{
	int i;

	i = 0;

	printf("Searching in array: ");
	for (i = low; i < high + 1; i++)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
	}
	printf("\n");
}
