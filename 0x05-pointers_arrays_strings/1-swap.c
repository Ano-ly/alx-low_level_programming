#include "main.h"

/**
 * swap_int - swaps the values of two integer arguments
 * @a: the pointer to the one of the variables to be swapped
 * @b: the pointer to the second variable to be swapped
 * Description - swaps the values of two variables
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int val_a;
	int val_b;

	val_a = *a;
	val_b = *b;
	*a = val_b;
	*b = val_a;
}
