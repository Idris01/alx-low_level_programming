#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stddef.h>

/**
 * append_text_to_file - Append given string to file
 * @filename: pointer to string
 * @text_content: pointer to string to append to file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	size_t content_size, char_written;
	ssize_t file_desc;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_APPEND);

	if (file_desc < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(file_desc);
		return (1);
	}
	content_size = strlen(text_content);
	char_written = write(file_desc, text_content, content_size);

	close(file_desc);

	if (content_size != char_written)
		return (-1);
	return (1);
}
