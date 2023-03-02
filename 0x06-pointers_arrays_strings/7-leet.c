#include <ctype.h>

void encode(char *str);

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
	char c;
	int loc = 0;

	while ((c = *(str + loc)) != '\0')
	{
		if (isalpha(c))
			encode((str + loc));
		loc++;
	}
	return (str);
}

/**
 * encode - Encode a given character
 * @str: character to encode
 *
 * Return: void
 */

void encode(char *str)
{
	char c = *str;

	if (c == 'a' || c == 'A')
		*str = '4';
	else if (c == 'e' || c == 'E')
		*str = '3';
	else if (c == 'o' || c == 'O')
		*str = '0';
	else if (c == 't' || c == 'T')
		*str  = '7';
	else if (c == 'l' || c == 'L')
		*str = '1';
}
