#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>

/**
 * create_file - Create a file with a given content
 * @filename: pointer to string
 * @text_content: pointer to string
 *
 * Return: 1 on success amd -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t file_des;
	size_t char_written, text_size;

	if (filename == NULL)
		return (-1);

	file_des = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);

	if (file_des < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(file_des);
		return (1);
	}
	text_size = strlen(text_content);
	char_written = write(file_des, text_content, text_size);

	if (text_size != char_written)
		return (-1);
	close(file_des);
	return (1);
}
