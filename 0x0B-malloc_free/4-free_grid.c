#include "main.h"

/**
 * free_grid - frees up all alocated malloc
 * @grid: the allocated 2D array
 * @height: the height of the array
 *
 * Return: void
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
