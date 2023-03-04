#include <ctype.h>
#include <string.h>

/**
 * rot13 - Encode a given string using rot13
 * The rot13 repaces a given character with the
 * character in the next 13 position in a cyclical
 * way
 * @str: string to encode
 *
 * Return: pointer to string
 */

char *rot13(char *str)
{
	char low[] = "abcdefghijklmnopqrstuvwxyz";
	char up[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *val = strcat(low, up);
	char cod1[] = "nopqrstuvwxyzabcdefghijklm";
	char cod2[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char *rot = strcat(cod1, cod2);
	int loc, location = 0;
	char c, d;

	while ((c = *(str + location)) != '\0')
	{
		loc = 0;
		while ((d = *(val + loc)) != '\0')
		{
			if (isalpha(c) && (c == d))
			{
				*(str + location) = *(rot + loc);
				break;
			}
			loc++;
		}
		location++;
	}
	return (str);
}
