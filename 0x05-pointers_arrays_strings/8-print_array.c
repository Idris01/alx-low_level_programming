#include "main.h"
#include <stdio.h>

/**
 * print_array - Print all elements in an array
 * @a: array to print
 * @n: size of array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	_putchar('\n');
}
