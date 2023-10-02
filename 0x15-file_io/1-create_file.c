#include "main.h"

/**
 * create_file - this is main function that creates
 * a new file with specified content
 * @filename: Name of a file to create
 * @text_content: NULL-terminated string to write to a file
 * Return: 1 on success, or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd;
int bytes_written = 0;

if (filename == NULL)
	return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
	return (-1);

if (text_content != NULL)
bytes_written = write(fd, text_content, strlen(text_content));

close(fd);

return (bytes_written == -1 ? -1 : 1);
}

