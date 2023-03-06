#include <stddef.h>

/**
 * _strpbrk - Find the first occurence of any char of
 * accept in s
 * @s: pointer to string
 * @accept: pointer to string to match
 *
 * Return: pointer to string
 */

char *_strpbrk(char *s, char *accept)
{
	char c1, c2;
	int track1 = 0, track2;

	while ((c1 = *(s + track1)) != '\0')
	{
		track2 = 0;
		while ((c2 = *(accept + track2)) != '\0')
		{
			if (c1 == c2)
				return (s + track1);
			track2++;
		}
		track1++;
	}
	return (NULL);
}
