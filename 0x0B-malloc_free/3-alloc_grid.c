#include "main.h"

/**
 * alloc_grid - function that allocates memory to a pointer
 * @width: the width of the pointer
 * @height: the height of the pointer
 *
 * Return: pointer to matrice
 */

int **alloc_grid(int width, int height)
{
	int **grid, i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	while (i < height)
	{
		j = 0;
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}

	return (grid);
}
