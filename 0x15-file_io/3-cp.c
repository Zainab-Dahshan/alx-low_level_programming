#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * open_file - main function that opens a file
 * and performs error checking
 * @filename: Name of a file to open
 * @mode: A mode to use when opening a file
 * @perms: Permissions to set on a file
 * Return: File descriptor for an opened file,
 * otherwise -1 on error
 */
int open_file(char *filename, int mode, mode_t perms)
{
int fd = open(filename, mode, perms);

if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
exit(98);
}
return (fd);
}

/**
 * copy_file - main function that copies
 * data from one file to another
 * @fd_from: File descriptor for source file
 * @fd_to: File descriptor for destination file
 */
void copy_file(int fd_from, int fd_to)
{
ssize_t bytes_read = 0, bytes_written = 0;
char buffer[BUFFER_SIZE] = {0};

do {
bytes_read = read(fd_from, buffer, BUFFER_SIZE);
if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file descriptor %d\n", fd_from);
exit(98);
}
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to file descriptor %d\n", fd_to);
exit(99);
}
} while (bytes_read > 0);
}

/**
 * close_file - main function that closes
 * a file and performs error checking
 * @fd: File descriptor to close
 */
void close_file(int fd)
{
int status = close(fd);

if (status == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd);
exit(100);
}
}

/**
 * main - main entry point for a cp program
 * @argc: Number of command-line arguments
 * @argv: An array of command-line argument strings
 * Return: 0 on success, or a non-zero error code on failure
 */
int main(int argc, char **argv)
{
int fd_from, fd_to;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

fd_from = open_file(argv[1], O_RDONLY, 0664);
fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

copy_file(fd_from, fd_to);

close_file(fd_from);
close_file(fd_to);
return (0);
}
