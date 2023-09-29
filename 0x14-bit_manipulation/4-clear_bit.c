#include "main.h"

/**
 * clear_bit - change to value of a bit to 0 at an index
 * @n: pointer to integer
 * @index: index desired
 * Description - clears a bit
 * Return: 1, if succcessful, -1 if not
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n && (~(1 << index));
	return (1);
}
