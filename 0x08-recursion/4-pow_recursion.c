/**
 * _pow_recursion - calculate x raized to power y
 * recursively
 * @x: integer base
 * @y: integer exponent
 *
 * Return: integer x^y or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
