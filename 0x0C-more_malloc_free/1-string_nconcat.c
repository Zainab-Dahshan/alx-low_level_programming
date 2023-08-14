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
	unsigned int s1_len = 0, s2_len = 0, i = 0;
	char *result;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[s1_len] != '\0')
	s1_len++;
	while (s2[s2_len] != '\0')
	s2_len++;

	if (n >= s2_len)
	n = s2_len;

	result = malloc(sizeof(char) * (s1_len + n + 1));

	if (result == NULL)
	return (NULL);

	for (i = 0; i < s1_len; i++)
	result[i] = s1[i];
	for (i = 0; i < n; i++)
	result[s1_len + i] = s2[i];
	result[s1_len + n] = '\0';

	return (result);
}
