#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - this function frees a 2 dimensional grid
 * that was already created by the "alloc_grid" function
 * @grid: the grid to be freed
 * @height: the height of the grid
 *
 * Description: refer to the first commented out line
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

