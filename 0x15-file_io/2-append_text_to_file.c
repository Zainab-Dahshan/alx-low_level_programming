#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - main function that append text at the end of a file.
 * @filename: a file name.
 * @text_content: a NULL terminated str added at the end of the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);
	int length = strlen(text_content);
	ssize_t bytes_written = write(fd, text_content, length);

	if (filename == NULL)
	{
	fprintf(stderr, "[ERROR] Invalid input. filename cannot be NULL.");
	return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	if (fd == -1)
	{
	fprintf(stderr, "[ERROR] Failed to open file: %s", filename);
	return (-1);
	}
	if (bytes_written == -1)
	{
	fprintf(stderr, "[ERROR] Failed to write to file: %s", filename);
	close(fd);
	return (-1);
	}
	close(fd);
	return (1);
}
