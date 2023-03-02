/**
 * reverse_array - Reverse integer array a
 * @a: array of integer
 * @n: size of array a
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int start = 0, end = n - 1, temp;

	while (start < end)
	{
		temp = *(a + start);
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
