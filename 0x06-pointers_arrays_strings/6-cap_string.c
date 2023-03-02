#include <ctype.h>
#include <stdlib.h>

int is_sep(char c);

/**
 * cap_string - Capitalize a given string
 * @str: string to capitalize
 *
 * Return: pointer to character
 */

char *cap_string(char *str)
{
	int loc = 0;
	char val, prev;

	while ((val = *(str + loc)) != '\0')
	{
		if (loc == 0 && isalpha(val))
			*(str + loc) = toupper(val);
		else
		{
			prev = *(str + loc - 1);
			val = *(str + loc);

			if (is_sep(prev) && isalpha(val))
				*(str + loc) = toupper(val);
		}
		loc++;
	}
	return (str);
}

/**
 * is_sep - check if a given character is a separator
 * A character 'c' is a separator if it is a
 * space, tab, newline, '.','!','?','(',')','{',
 * '}',';' or '"'.
 * @c: character to check
 *
 * Return: 1 if true otherwise 0
 */

int is_sep(char c)
{
	int ans = 1;

	switch (c)
	{
		case ' ':
		case ',':
		case ';':
		case '.':
		case '?':
		case '"':
		case '!':
		case '}':
		case '{':
		case '(':
		case ')':
		case '\n':
		case '\t':
			break;
		default:
			ans = 0;

	}
	return (ans);
}
