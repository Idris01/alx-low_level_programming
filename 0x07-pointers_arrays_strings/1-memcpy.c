/**
 * _memcpy - Copy n number of memory area from src
 * to dest
 * @src: pointer to source string
 * @dest: pointer to destination string
 * @n: number of memory areas to copy
 *
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter = 0;

	while (counter < n)
	{
		*(dest + counter) = *(src + counter);
		counter++;
	}
	return (dest);
}
