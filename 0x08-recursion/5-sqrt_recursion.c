int squareroot(int n, int odd);

/**
 * _sqrt_recursion - Find the square root of n recursively
 * @n: integer number to find square root of
 *
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (squareroot(n, 1));
}

/**
 * squareroot - Helper squareroot recursive definition
 * for "_sqrt_recursion"
 * @n: integer number to find square root of
 * @odd: integer first odd number (Always 1)
 *
 * Return: integer
 */

int squareroot(int n, int odd)
{
	int ans;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	ans = squareroot(n - odd, odd + 2);
	ans = ans < 0 ? ans : ans + 1;
	return (ans);
}
