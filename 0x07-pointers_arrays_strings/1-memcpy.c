#include "main.h"

/**
 * _memcpy - copies bytes from a memory area to another memory area.
 * @dest: destination for bytes to be copied to
 * @src: source that bytes are copied from
 * @n: number of bytes to be copied
 * Description - copies bytes from one memory area to another using
 * for loops and indices.
 * Return: pointer to destination string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	int j;

	j = 0;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[j];
		j++;
	}
	return (dest);
}
