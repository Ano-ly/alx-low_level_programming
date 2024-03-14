#include <stdio.h>

/**
 * binary_search - searches for a value in an array
 * using a binary search algorithm
 * @array: array to be searched in
 * @size: size of array
 * @value: value to be searched for
 * Description - searches an array for a value
 * Return: index of the value, -1 if value not found
*/

int binary_search(int *array, size_t size, int value)
{
	int l_o;
	int r_o;
	int m_o;

	l_o = 0;
	r_o = size - 1;
	m_o = int((l_o + r_o) / 2);

	rec(l_o, r_o, array, value);

}

/**
 * rec - performs recursive binary search
 * @l_o: lower bound index
 * @r_o: upper bound index
 * @arrray: array to be searched in
 * @value: value to be searched for
 * Description - searches for a value using recursive binary
 * search algorithm
 * Return: index of value, -1 if not found
*/

rec(int l_o, int r_o, int *array, int value)
{

}
