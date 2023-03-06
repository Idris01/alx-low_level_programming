#include <stddef.h>

/**
 * _strchr - Find the first occurence of character
 * c in string s
 * @s: pointer to string
 * @c: character to find
 *
 * Return: pointer to address of c in s otherwise
 * NULL
 */

char *_strchr(char *s, char c)
{
	int locator = 0;
	char itm;

	while ((itm = *(s + locator)) != '\0')
	{
		if (itm == c)
			return (s + locator);
		locator++;
	}
	if (c == *(s + locator))
		return (s + locator);
	return (NULL);
}
