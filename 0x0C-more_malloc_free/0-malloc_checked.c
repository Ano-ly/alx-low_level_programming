#include <stdlib.h>

/**
 * malloc_checked - allocates memory of size b bytes using malloc
 * @b: number of bytes to be allocated in memory
 * Definition - allocated memory
 * Return: pointer to allocated memory, exit status 98
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
