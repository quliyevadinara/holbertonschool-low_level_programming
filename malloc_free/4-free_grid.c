#include <stdlib.h>

/**
 * free_grid - Frees the memory allocated for a 2D grid.
 * @grid: The 2D grid to free.
 * @height: The height of the 2D grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
