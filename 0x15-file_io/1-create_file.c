#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - main function used to create a file with
 * a specified name and write content inside it.
 * @filename: name of file to be created.
 * @text_content: NULL-terminated str to write into the textfile.
 * Returns: 1 on success oterwise -1 on failure
 */
int create_file(const char *filename, char *text_content) 
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
        
	if (filename == NULL)
	return (-1);
	if (fd == -1)
	return (-1);
	if (text_content != NULL) 
	{
	ssize_t bytes_written = write(fd, text_content, strlen(text_content));
	if (bytes_written == -1)
		{
		close(fd);
		return (-1);
        	}	
	}
	close(fd);
	return (1);
}
