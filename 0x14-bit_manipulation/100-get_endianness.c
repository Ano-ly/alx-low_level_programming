#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * get_endianness - checks whether a computer is little or big endian
 *
 * Return: 0 if big endian, or 1 if little endian.
 */
int get_endianness(void)
{
	long int test;
	char *point_test;

	test = 0x5f5d;
	point_test = (char *)&test;

	if (*point_test == 93)
		return (1);
	else
		return (0);
	return (0);
}
