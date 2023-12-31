#include "main.h"
#include <stdio.h>


/**
 * get_bit - gets the value of a bit at a particular index
 * @n: pointer to integer
 * @index: required index
 * Definition - gets the value of a bit
 * Return: value of the bit, -1 if error occurred
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return ((n & (1 << index)) >> index);
}
