#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix of
 * integers
 * @a: square matrix involved
 * @size: size of matrix
 * Definition - prints the sums
 * Return: void
*/

void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
	}
	for (i = 0; i < size; i++)
	{
		sum2 += a[i][size - 1 - i];
	}
	printf("%d, %d", sum1, sum2);
}
