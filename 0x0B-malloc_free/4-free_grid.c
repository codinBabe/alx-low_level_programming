#include "main.h"
/**
 * free_grid - This is a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: a pointer to the 2-dimensional grid.
 * @height:number of rows in the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}
	free(grid);
	grid = NULL;
}
