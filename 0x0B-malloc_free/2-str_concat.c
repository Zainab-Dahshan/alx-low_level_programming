#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into
 * a new dynamically allocated string.
 *
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 *
 * Return: A pointer to the newly allocated
 * string, or NULL if allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	char *result = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	int i, j;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
	result[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
	result[i + j] = s2[j];
	}
	result[i + j] = '\0';
	return (result);
}
