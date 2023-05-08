#include "main.h"

/**
 * append_text_to_file - appends a text file to fd
 * @filename: the name of the file
 * @text_content: the text content to append to the fd
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, byte_written = 0;

	if (!filename)
		return (-1);
	
	if (!text_content)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	byte_written = write(fd, text_content, sizeof(text_content));
	if (byte_written == -1)
		return (-1);

	close(fd);
	return (1);
}
