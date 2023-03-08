/**
 * _strlen_recursion - find the length of a string
 * Recursively
 * @s: pointer to string to find length of
 *
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
