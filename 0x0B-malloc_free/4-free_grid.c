#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d grid previously created by alloc_grid function
 * in the previous task.
 *
 * @grid: grid to be freed
 * @height: number of rows of the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{

	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
