#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary - searches for a value in an array
 * using a binary search algorithm
 * @array: array to be searched in
 * @size: size of array
 * @value: value to be searched for
 * Description - searches an array for a value
 * Return: index of the value, -1 if value not found
*/

int advanced_binary(int *array, size_t size, int value)
{
	int l_o;
	int r_o;
	int m_o;
	int val;

	if (array == NULL)
		return (-1);
	l_o = 0;
	r_o = size - 1;
	m_o = (int)((l_o + r_o) / 2);

	val = rec(l_o, r_o, m_o, array, value);
	return (val);
}

/**
 * rec - performs recursive binary search
 * @l_o: lower bound index
 * @r_o: upper bound index
 * @array: array to be searched in
 * @value: value to be searched for
 * @m_o: midpoint index
 * Description - searches for a value using recursive binary
 * search algorithm
 * Return: index of value, -1 if not found
*/

int rec(int l_o, int r_o, int m_o, int *array, int value)
{
	if ((l_o >= r_o) && (array[l_o] == value))
		return (l_o);
	print_array(l_o, r_o, array);
	m_o = (int)((l_o + r_o) / 2);
	if (l_o >= r_o)
		return (-1);
	if (array[m_o] < value)
		return (rec(m_o + 1, r_o, m_o, array, value));
	if (array[m_o] >= value)
		return (rec(l_o, m_o, m_o, array, value));
	if (array[m_o] == value)
		return (m_o);
	return (-1);
}

/**
 * print_array - prints an array
 * @l_o: lower bound index
 * @r_o: upper bound index
 * @array: array to be printed
 * Description - prints an array
 * Return: void
*/

void print_array(int l_o, int r_o, int *array)
{
	int i;

	i = 0;

	printf("Searching in array: ");
	for (i = l_o; i < r_o + 1; i++)
	{
		printf("%d", array[i]);
		if (i != r_o)
			printf(", ");
	}
	printf("\n");
}
