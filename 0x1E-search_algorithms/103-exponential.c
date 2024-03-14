#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - searches for a value in an array using
 * an exponential search algorithm
 * @array: array to be searched in
 * @size: size of array to be searched
 * @value: value to be searched for
 * Description - searches for a value in an array using exponential search
 * Delivers index of first instance of item in array
 * Return: index of item in array, -1 if value not found
*/

int exponential_search(int *array, size_t size, int value)
{
	int select;
	int i;
	int low;
	int end;

	if (array == NULL)
		return (-1);
	select = 0;
	i = 0;
	end = (int)(size - 1);

	while (1)
	{
		low = select;
		select = raise_em(2, i);
		if (select >= end)
		{
			select = end;
			printf("Value found between indexes [%d] and [%d]\n", low,
			select);
			break;
		}
		if (array[select] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", low,
			select);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", select, array[select]);
		i++;
	}
	return (my_advanced_binary(low, select, array, value));
}

/**
 * my_advanced_binary - searches for a value in an array
 * using a binary search algorithm
 * @low: lower bound index
 * @high: upper bound index (select)
 * @array: array to be searched in
 * @value: value to be searched for
 * Description - searches an array for a value using binary search
 * Return: index of the value, -1 if value not found
*/

int my_advanced_binary(int low, int high, int *array, int value)
{
	int l_o;
	int r_o;
	int m_o;
	int val;

	if (array == NULL)
		return (-1);
	l_o = low;
	r_o = high;
	m_o = (int)((l_o + r_o) / 2);

	val = my_rec(l_o, r_o, m_o, array, value);
	return (val);
}

/**
 * my_rec - performs recursive binary search
 * @l_o: lower bound index
 * @r_o: upper bound index
 * @array: array to be searched in
 * @value: value to be searched for
 * @m_o: midpoint index
 * Description - searches for a value using recursive binary
 * search algorithm
 * Return: index of value, -1 if not found
*/

int my_rec(int l_o, int r_o, int m_o, int *array, int value)
{
	if ((l_o >= r_o) && (array[l_o] == value))
		return (l_o);
	my_print_array(l_o, r_o, array);
	m_o = (int)((l_o + r_o) / 2);
	if (l_o >= r_o)
		return (-1);
	if (array[m_o] < value)
		return (my_rec(m_o + 1, r_o, m_o, array, value));
	if (array[m_o] > value)
		return (my_rec(l_o, m_o, m_o, array, value));
	if (array[m_o] == value)
		return (m_o);
	return (-1);
}

/**
 * my_print_array - prints an array
 * @l_o: lower bound index
 * @r_o: upper bound index
 * @array: array to be printed
 * Description - prints an array
 * Return: void
*/

void my_print_array(int l_o, int r_o, int *array)
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

/**
 * raise_em - raises a number to a power and returns result
 * @number: base
 * @power: power
 * Description - above
 * Return: result
*/

int raise_em(int number, int power)
{
	int i;
	int result;

	result = 1;
	for (i = 0; i < power; i++)
	{
		result *= number;
	}
	return (result);
}

