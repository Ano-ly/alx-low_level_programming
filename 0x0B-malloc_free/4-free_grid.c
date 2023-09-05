#include <stdlib.h>

/**
 * free_grid - frees a memory space containing a two-dimensional array
 * @grid: grid to be freed
 * @height: number of rows of grid
 * Definition - uses for loop to free grid
 * Return: void
*/

void free_grid(int **grid, int height)
{
	(void)height;

	free(grid);
}
