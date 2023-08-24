#include "main.h"

/**
 * reverse_array - reverses the order of an array
 * @a: pointer to array whose order is to be reversed
 * @n: the number of items in the array
 *
 * Description - reverses an array using for loop
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int twin1;
	int twin2;
	int i;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = (n - i) - 1;
		twin1 = a[i];
		twin2 = a[j];
		a[i] = twin2;
		a[j] = twin1;
	}
}
