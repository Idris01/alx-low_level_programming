/**
 * _strspn - Find the number of substring prefix in s
 * that is only contained in accept
 * @s: pointer to string to search from
 * @accept: pointer to string to search
 *
 * Return: integer number of match found
 */

unsigned int _strspn(char *s, char *accept)
{
	int count1 = 0; /* indices of s */
	int count2; /* indices of accept */
	char item1; /* character in s */
	char item2; /* character in accept */
	int found; /* track if item1 found in accept */
	unsigned int total = 0;

	while ((item1 = *(s + count1)) != '\0')
	{
		count2 = 0;
		found = 0;
		while ((item2 = *(accept + count2)) != '\0')
		{
			if (item1 == item2)
			{
				found = 1;
				total++;
				break;
			}
			count2++;
		}
		if (!found)
			return (total);
		count1++;
	}
	return (total);
}
