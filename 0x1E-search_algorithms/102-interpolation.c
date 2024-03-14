#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array
 * using an interpolation search algorithm
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
	m_o = (low + (((double)(high - low) / (array[high] - array[low])) *
	(value - array[low])));

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
	m_o = (low + (((double)(high - low) / (array[high] - array[low])) *
	(value - array[low])));

	if (m_o > high)
	{
		printf("Value checked array[%d] is out of range\n", m_o);
		return (-1);
	}
	printf("Value checked array[%d] = [%d]\n", m_o, array[m_o]);
	if ((low >= high) || (array[low] == value))
		return (low);
	if (array[m_o] < value)
		return (rec(m_o + 1, high, m_o, array, value));
	if (array[m_o] > value)
		return (rec(low, m_o, m_o, array, value));
	if (array[m_o] == value)
		return (m_o);
	return (-1);
}

