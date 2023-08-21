#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the first n elements of an array of integers
 * @a: the array to be used in the function
 * @n: the number of elements to be printed
 * Description - prints the first n elements of an array
 * Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
