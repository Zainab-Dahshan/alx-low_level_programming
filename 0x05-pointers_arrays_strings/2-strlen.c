#include "main.h"
#include <stdio.h>

/**
 * _strlen - Computes the length of a string.
 *
 * Given a pointer to a null-terminated character array, this function
 * iterates over the array and counts the number of characters until
 * the null terminator is reached. The resulting count is returned as
 * an integer.
 *
 * @s: Pointer to the character array.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	len++;
	s++;
	}
	return (len);
}
