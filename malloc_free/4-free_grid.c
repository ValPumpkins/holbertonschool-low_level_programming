#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional array prev created by alloc_grid function
 * @height: rows
 * @grid: 2 dimensional array
 * Return: always return
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
