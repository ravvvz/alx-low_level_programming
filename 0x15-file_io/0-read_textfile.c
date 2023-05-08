#include "main.h"

/**
 * read_textfile - read a file and write to text
 * @filename: the name of the file
 * @letters: number of characters to print
 *
 * Return: number of characters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[1024];
	int fd;
	ssize_t fd_check = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	fd_check = read(fd, buffer, letters);
	if (fd_check == -1)
		return (0);

	fd_check = write(STDOUT_FILENO, buffer, fd_check);
	if (fd_check == -1)
		return (0);

	close(fd);
	return (fd_check);
}
