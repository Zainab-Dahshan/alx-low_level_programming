#include "main.h"
#include <stdio.h>

/**
 * _strchr - to locate the memory area with two parameters.
 * @s: the string.
 * @c: the character.
 *
 * Return: returns a pointer to the first occurrence of c in
 *	the string. If not found, it returns NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}
	return (NULL);
}
