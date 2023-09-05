#include <stdlib.h>

/**
 * alloc_grid - allocates a space in memory to a two-dimensional array of
 * integers
 * @width: number of columns of array
 * @height: number of rows of array
 * Definition - allocates
 * Return: pointer to two-dimensional array
*/

int **alloc_grid(int width, int height)
{
	int i;
	int **p;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = (int **)malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);


}
