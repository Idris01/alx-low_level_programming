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
		if (c == 'a' || c == 'A')
			*(str + loc) = '4';
		else if (c == 'e' || c == 'E')
			*(str + loc) = '3';
		else if (c == 'o' || c == 'O')
			*(str + loc) = '0';
		else if (c == 't' || c == 'T')
			*(str + loc) = '7';
		else if (c == 'l' || c == 'L')
			*(str + loc) = '1';
		loc++;
	}
	return (str);
}
