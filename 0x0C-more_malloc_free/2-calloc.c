#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of type to be added to array
 * Definition - allocates memory for an array
 * Return: pointer to allocated memory space; NULL if function fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*unsigned int i;*/
	void *pp;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pp = malloc(nmemb * size);
	if (pp == NULL)
	{
		return (NULL);
	}
	/*for (i = 0; i < nmemb; i++)*/
	/*{*/
	/*	pp[i] = 0;*/
	/*}*/
	return (pp);
}
