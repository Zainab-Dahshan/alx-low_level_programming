#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - a function convert
 * a binary number to an unsigned int
 * @b: the pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0
 * if there is one or more chars in the
 * string b that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int x = 0;

	if (b == NULL)
	return (0);

	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
		return (0);

		number = number * 2 + (b[x] - '0');
		x++;
	}

	return (number);
}
