#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stddef.h>


void do_exit(char *format, int code, char *data, int fd);

/**
 * main - run the program
 * @ac: integer argument count
 * @av: pointer to array of strings
 *
 * Return: integer always 0
 */
int main(int ac, char **av)
{
	ssize_t from_fd, to_fd;
	char buffer[1024];
	const int BUF_SIZE = 1024;
	int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	int write_size, read_size;
	char *error98 = "Error: Can't read from file %s\n";
	char *error99 = "Error: Can't write to %s\n";
	char *error100 = "Error: Can't close fd %d\n";

	if (ac < 3)
		do_exit("%s\n", 97, "Usage: cp file_from file_to", 0);
	from_fd = open(av[1], O_RDONLY);
	if (from_fd < 0)
		do_exit(error98, 98, av[1], 0);

	to_fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (to_fd < 0)
		do_exit(error99, 99, av[2], 0);
	fchmod(to_fd, mode);
	do {
		read_size = read(from_fd, buffer, BUF_SIZE);
		if (read_size < 0)
			do_exit(error98, 98, av[1], 0);

		write_size = write(to_fd, buffer, read_size);
		if (write_size < 0)
			do_exit(error99, 99, av[2], 0);
	} while (read_size > 0);
	if (close(from_fd) < 0)
		do_exit(error100, 100, "0", from_fd);

	if (close(to_fd) < 0)
		do_exit(error100, 100, "0", to_fd);

	return (0);
}

/**
 * do_exit - Print an error message and exit with a given code
 * @format: pointer to string that represents the string format
 * @code: integer exit code
 * @data: pointer to string to insert into format output
 * @fd: integer filedescriptor
 *
 * Return: void
 */
void do_exit(char *format, int code, char *data, int fd)
{
	switch (code)
	{
		case 97:
			dprintf(STDERR_FILENO, format, data);
			exit(97);
		case 98:
			dprintf(STDERR_FILENO, format, data);
			exit(98);
		case 99:
			dprintf(STDERR_FILENO, format, data);
			exit(99);
		case 100:
			dprintf(STDERR_FILENO, format, fd);
			exit(100);
		default:
			exit(1);
	}
}
