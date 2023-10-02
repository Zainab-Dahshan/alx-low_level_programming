#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - main function that reads a text
 * file and prints it to POSIX standard output
 * @filename: Name of a file to read
 * @letters: Number of letters to read and print
 * Return: the actual number of letters read and
 * printed, otherwise 0 if an error occured.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t bytes_read, bytes_written;

if (filename == NULL)
	return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}

bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
close(fd);
free(buffer);
return (0);
}

bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written != bytes_read)
{
close(fd);
free(buffer);
return (0);
}

close(fd);
free(buffer);
return (bytes_written);
}
