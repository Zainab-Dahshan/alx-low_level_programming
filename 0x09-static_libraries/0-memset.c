#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory
 * area pointed to by s with the constant byte b.
 *
 * @s: Pointer to the memory area to be filled.
 * @b: Value to be set. The value is passed as an int,
 * but the function fills the memory with the unsigned
 * char conversion of this value.
 *
 * @n: Number of bytes to be set to the value.
 * Return: Pointer to the memory area (s).
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
