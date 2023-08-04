#include "main.h"
#include <stdio.h>

/**
 * _memset - fill the memory area with three parameters.
 * @s: a pointer to the memory area s.
 * @b: the constant byte.
 * @n: the number of bytes.
 *
 * Return: returns a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
	*ptr = b;
	ptr++;
	n--;
	}

	return (s);
}
