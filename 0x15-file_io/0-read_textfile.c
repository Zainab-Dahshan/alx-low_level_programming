#include "main.h"

/**
 * read_textfile - main function reads a text file.
 * @filename: name of the text file to be read.
 * @letters: number of letters to be read and printed.
 * Return: letters read and printed, or 0 if there was an error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *buffer = malloc(letters);
	ssize_t bytes_read = read(fd, buffer, letters);
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (filename == NULL)
	return (0);
	if (fd == -1)
	return (0);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_written);
}
