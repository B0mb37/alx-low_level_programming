#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d aray
 * @grid: the grid to be freed
 * @height: height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
