#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * _atoi - Extract Number from a given string
 * @s: string to extract number from
 *
 * Return: integer Number if found and zero otherwise
 */

int _atoi(char *s)
{
	int value, size = strlen(s) - 1;
	int start, end, iterator = 0, copySize = 0;
	char *copy;

	while (iterator < size)
	{
		if (isdigit(*(s + iterator)))
			break;
		iterator++;
	}
	if (!isdigit(*(s + iterator)))
		return (0);

	if (iterator > 0 && s[iterator - 1] == '-')
		start = iterator - 1;
	else
		start = iterator;

	while (iterator < size)
	{
		if (!isdigit(*(s + iterator)))
			break;
		iterator++;
	}

	if (isdigit(*(s + iterator)))
	{
		copySize = (size - start) + 1;
		copy = malloc(copySize * sizeof(char));
		strncpy(copy, (s + start), copySize);
		value = atoi(copy);
		return (value);
	}

	end = iterator - 1;
	copySize = (end - start) + 1;
	copy = malloc(copySize * sizeof(char));
	strncpy(copy, (s + start), copySize);
	value = atoi(copy);
	return (value);
}
