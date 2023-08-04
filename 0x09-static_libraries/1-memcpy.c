#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copy the memory area with three parameters.
 * @src: a pointer to the source memory area.
 * @n: the number of bytes.
 * @dest: the destination memory area.
 *
 * Return: returns a pointer to the destination memory area (dest).
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = dest;
	char *ptr_src = src;

	while (n > 0)
	{
	*ptr_dest = *ptr_src;
	ptr_dest++;
	ptr_src++;
	n--;
	}

	return (dest);
}
