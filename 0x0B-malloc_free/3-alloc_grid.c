#include <stdlib.h>

/**
 * alloc_grid - Allocate 2D grid integer space of
 * size width x height
 * @width: integer width of the grid
 * @height: integer height of the grid
 *
 * Return: pointer to 2d array on success otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	int **array2d;
	int row, col;

	if (width <= 0 || height <= 0)
		return (NULL);
	array2d = (int **) malloc(sizeof(int *) * height);
	if (array2d == NULL)
		return (NULL);

	row = 0;
	for (; row < height; row++)
	{
		*(array2d + row) = (int *) malloc(sizeof(int) * width);
		if (*(array2d + row) == NULL)
			return (NULL);
		col = 0;
		for (; col < width; col++)
		{
			*(*(array2d + row) + col) = 0;
		}
	}
	return (array2d);
}
