#include <stdlib.h>

/**
 * _realloc - reallocates memory
 * @ptr: pointer to old memory space
 * @old_size: size of old memory space in bytes
 * @new_size: new size in bytes required
 * Definition - reallocates memory
 * Return: NULL, if function fails, a pointer to new memory space, if not
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int _type;
	char *p;
	char *pp;
	int i;
	int num;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && !(ptr == NULL))
	{
		free(ptr);
		return (NULL);
	}
	pp = ptr;
	_type = sizeof(*pp);
	num = 0;
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	if (new_size < old_size)
		num += (new_size / _type);
	if (new_size > old_size)
		num += (old_size / _type);
	for (i = 0; i < num; i++)
	{
		p[i] = pp[i];
	}
	free(ptr);

	return (p);
}
