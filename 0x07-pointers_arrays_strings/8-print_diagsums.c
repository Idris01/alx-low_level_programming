#include <stdio.h>

/**
 * print_diagsums - Prints the sum of diagonals of a
 * square matrix a
 * @a: pointer to array representing matrix size x size
 * @size: integer size of the square matri
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int diag1 = 0, diag2 = 0;
	int loc1, loc2;
	int row_cnt = 0;
	int i = sizeof(int);

	for (; row_cnt < size; row_cnt++)
	{
		loc1 = (size * row_cnt + row_cnt);
		loc2 = (size * row_cnt + (size - row_cnt - 1));
		diag1 += *(a + loc1);
		diag2 += *(a + loc2);
	}
	printf("%d %d\n", diag1, diag2);
}
