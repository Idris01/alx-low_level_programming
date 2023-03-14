#include <stdlib.h>

/**
 * free_grid - Realeases Memory occupied by a
 * 2d array
 * @grid: pointer to 2d integer array
 * @height: integer number of rows in grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int count = 0;

	for (; count < height; count++)
	{
		free(*(grid + count));
	}
	free(grid);
}
