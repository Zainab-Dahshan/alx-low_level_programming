#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies up to n bytes of the source
 * string to the destination string.
 *
 * Description: Copies the first n bytes of the @src string
 * to the @dest string, including the terminating null
 * byte ('\0'), if it exists. If the @src string is less than
 * n bytes long, the remainder of @dest will be padded with
 * null bytes. If the @src string is n bytes or longer, the
 * resulting @dest string will not be null-terminated.
 *
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string.
 * @n: The maximum number of bytes to be used from @src.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
		}

	return (dest);
}
