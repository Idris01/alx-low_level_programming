#include "main.h"

/**
 * print_chessboard - prints a given 2D array a
 * representing the chessboard
 * @a: 2D array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int row = 8;
	int col = 8;
	int i = 0, j;
	char *base = a[0];
	int char_size = sizeof(char);
	int loc;

	for (; i < row; i++)
	{
		j = 0;
		for (; j < col; j++)
		{
			loc = (i * row + j) * char_size;
			_putchar(*(base + loc));
		}
		_putchar('\n');
	}
}
