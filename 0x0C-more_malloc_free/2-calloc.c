#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array of nmemb
 * elements of size bytes each,
 * and returns a pointer to the allocated memory.
 * The memory is set to zero.
 *
 * @nmemb: The number of elements in the array to allocate.
 * @size: The size of each element in bytes.
 *
 * Return: If successful, a pointer to the allocated memory.
 * If nmemb or size is 0, then _calloc returns NULL.
 * If malloc fails, then _calloc returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < nmemb * size; i++)
	ptr[i] = 0;

	return (ptr);
}
