#include "main.h"
#include <stdio.h>

/**
 * *_strcat - Concatenates two strings.
 *
 * Description: Appends the @src string to
 * the end of the @dest string, overwriting the
 * terminating null byte ('\0') at the end
 * of @dest, and then adds a terminating null byte.
 * The strings may not overlap, and the @dest string
 * must have sufficient space for the result.
 *
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
	ptr++;

	while (*src)
	{
	*ptr = *src;
	ptr++;
	src++;
	}

	*ptr = '\0';

	return (dest);
}
