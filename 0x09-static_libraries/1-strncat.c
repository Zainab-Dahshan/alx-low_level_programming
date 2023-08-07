#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - Concatenates two strings up to n bytes.
 *
 * Description: Appends the first n bytes of the @src
 * string to the end of the @dest string, overwriting
 * the terminating null byte ('\0') at the end of @dest,
 * and then adds a terminating null byte. The strings may not overlap,
 * and the @dest string must have sufficient space for the result.
 *
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string.
 * @n: The maximum number of bytes to be used from @src.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
