#include "main.h"

/**
 * append_text_to_file - this is main function that
 * appends text to an end of a file
 * @filename: Name of a file to append to
 * @text_content: NULL-terminated string to append to a file
 * Return: 1 on success, or  -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int bytes_written = 0;

if (filename == NULL)
	return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
	return (-1);

if (text_content != NULL)
bytes_written = write(fd, text_content, strlen(text_content));

close(fd);

return (bytes_written == -1 ? -1 : 1);
}

