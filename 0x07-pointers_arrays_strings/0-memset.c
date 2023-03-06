/**
 * _memset - Set the first n address of given
 * string s to b
 * @s: string to set change values of
 * @b: character constant value
 * @n: integer number of addresses to set to b
 *
 * Return: pointer to string s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter = 0;

	while (counter < n)
	{
		*(s + counter++) = b;
	}
	return (s);
}
