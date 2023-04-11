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
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
