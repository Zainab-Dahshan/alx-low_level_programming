#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings,
 * s1 followed by the first n bytes of s2.
 *
 * Description: The returned pointer points to a newly allocated
 * space in memory, which contains s1 followed by
 * the first n bytes of s2, and null-terminated.
 * Note If n is greater or equal to the length of
 * s2, the entire string s2 is used. If NULL is
 * passed for either s1 or s2, treat it as an empty string.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 * @n: The number of bytes from s2 to concatenate.
 * Return: A pointer to the newly allocated concatenated
 * string or NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_length, s2_length, concat_length;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_length = strlen(s1);
	s2_length = strlen(s2);
	concat_length = s1_length + (n >= s2_length ? s2_length : n) + 1;

	result = malloc(concat_length);

	if (result == NULL)
	{
		return (NULL);
	}

	strncpy(result, s1, s1_length);
	strncat(result + s1_length, s2, concat_length - s1_length);

	result[concat_length - 1] = '\0';

	return (result);
}
