#include "main.h"

/**
 * swap_int - swap the value store in a and b
 * @a: first swap integer
 * @b: second swap integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
