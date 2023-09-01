#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: byte with which to fill memory area
 * @n: number of times to fill in memory space with byte
 * Description - Uses for loop to fill in a memory area with n repetitions of a
 * constant byte.
 * Return: a pointer to that memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

