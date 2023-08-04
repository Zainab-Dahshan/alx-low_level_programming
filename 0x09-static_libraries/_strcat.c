#include "main.h"
#include <string.h>

/**
 * _stract - Concatenates the string pointed to
 * by src to the end of the string pointed to by dest.
 *
 * @dest: Pointer to the destination array,
 * which should contain a string.
 * @src: Pointer to the source array,
 * which should contain a string.
 *
 * Return:return to the destination array.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
