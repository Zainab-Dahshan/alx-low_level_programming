#include "main.h"

/**
 * read_textfile - this is main function that reads a
 * text file and prints it to POSIX standard output
 * @filename: Name of a file to read
 * @letters: Number of letters it should read and print
 * Return: Actual number of letters it could read and print,
 *         0 if file can not be opened or read,
 *         0 if filename is NULL,
 *         0 if write fails or does not write expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file;
char *buffer;
ssize_t read_bytes, write_bytes;

if (filename == NULL)
	return (0);

file = fopen(filename, "r");
if (file == NULL)
	return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
fclose(file);
return (0);
}

read_bytes = fread(buffer, sizeof(char), letters, file);
if (read_bytes == -1)
{
fclose(file);
free(buffer);
return (0);
}

write_bytes = fwrite(buffer, sizeof(char), read_bytes, stdout);
if (write_bytes != read_bytes)
{
fclose(file);
free(buffer);
return (0);
}

fclose(file);
free(buffer);
return (read_bytes);
}
