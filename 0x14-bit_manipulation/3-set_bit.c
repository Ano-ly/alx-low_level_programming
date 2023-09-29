#include "main.h"

/**
 * set_bit - sets a bit to 1 at a particular index
 * @n: pointer to int to be set
 * @index: index at whose bit is to be set
 * Definition - sets a bit at an index
 * Return: -1 if failed, 1 if success
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
