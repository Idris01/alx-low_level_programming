#include <ctype.h>

/**
 * leet - Encode a given string by replacing upper
 * and lowercase a, e, t and l respectively with
 * 4, 3, 7, 1.
 * @str: string to encode
 *
 * Return: pointer to string
 */

char *leet(char *str)
{
	char c, d;
	char *code = "43710";
	char *val = "aetlo";
	int loc = 0;
	int loc2;

	while ((c = *(str + loc)) != '\0')
	{
		loc2 = 0;
		while ((d = *(val + loc2)) != '\0')
		{
			if (d == tolower(c))
				*(str + loc) = *(code + loc2);
			loc2++;
		}
		loc++;
	}
	return (str);
}

