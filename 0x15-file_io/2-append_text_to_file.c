#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: NULL-terminated str to add at the end of a file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	size_t text_len;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
		text_len = strlen(text_content);
		bytes_written = write(fd, text_content, text_len);

	if (bytes_written != (int)text_len)
	{
	close(fd);
	return (-1);
	}
	}

	close(fd);
	return (1);
}
