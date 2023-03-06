#include <stddef.h>

/**
 * _strstr - Find the occurence of string needle in
 * string haystack
 * @haystack: pointer string to search from
 * @needle: pointer string to find
 *
 * Return: pointer startpoint of match if found
 * otherwise NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char c1, c2;
	int loc1 = 0, loc2, start,  inner;

	while ((c1 = *(haystack + loc1)) != '\0')
	{
		loc2 = 0;
		inner = loc1;
		start = loc1;
		while ((c2 = *(needle + loc2)) != '\0')
		{
			if (c2 != *(haystack + inner))
				break;
			inner++;
			loc2++;
		}
		loc1++;

		if (c2 == '\0')
			return (haystack + start);
	}
	return (NULL);
}
