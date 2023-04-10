#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * read_textfile - Read given number of characters from a
 * given file and print to standard output
 * @filename: pointer to strng
 * @letters: integer number of letters to print
 *
 * Return: integer number of characters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_read, num_written;
	char *buf;
	ssize_t file_descriptor;

	if (filename == NULL || letters == 0)
		return (0);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	num_read = read(file_descriptor, buf, letters);
	num_written = write(STDOUT_FILENO, buf, num_read);

	if (num_read != num_written)
		return (0);
	free(buf);
	close(file_descriptor);
	return (num_written);
}
