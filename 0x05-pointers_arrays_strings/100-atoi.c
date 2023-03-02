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
	int value, neg = 0, size = strlen(s) - 1;
	int start, end, iterator = 0, copySize = 0;
	char *copy, *negs;

	while (iterator < size)
	{
		if (*(s + iterator) == '-')
			neg++;
		else if (isdigit(*(s + iterator)))
			break;
		iterator++;
	}
	if (!isdigit(*(s + iterator)))
		return (0);
	start = iterator;
	while (iterator < size)
	{
		if (!isdigit(*(s + iterator)))
			break;
		iterator++;
	}
	if (isdigit(*(s + iterator)))
	{
		if (neg % 2 == 1)
		{
			copySize = (size - start) + 2;
			copy = malloc(copySize * sizeof(char));
		strncpy(copy, (s + start), copySize);

		if (neg % 2 == 1)
			negs = malloc((1 + copySize) * sizeof(char));
			
		return (value);
	}
	end = iterator - 1;
	copySize = (end - start) + 1;
	copy = malloc(copySize * sizeof(char));
	strncpy(copy, (s + start), copySize);
	value = atoi(copy);
	if (neg % 2 == 1)
		value = -value;
	return (value);
}
