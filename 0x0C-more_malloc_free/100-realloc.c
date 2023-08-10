#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 *
 * @ptr: A pointer to the memory previously allocated with malloc().
 * @old_size: The size of the allocated space for ptr.
 * @new_size: The new size of the memory block.
 *
 * Return: If successful, a pointer to the newly allocated memory.
 * If new_size is equal to old_size, return ptr.
 * If ptr is NULL, the call is equivalent to malloc(new_size).
 * If new_size is equal to zero, and ptr is not NULL,
 * the call is equivalent to free(ptr).
 * If malloc fails, return NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i, copy_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		return (NULL);
		return (new_ptr);
	}

	if (new_size == old_size)
	return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	return (NULL);

	copy_size = old_size < new_size ? old_size : new_size;

	for (i = 0; i < copy_size; i++)
	((char *)new_ptr)[i] = ((char *)ptr)[i];

	free(ptr);

	return (new_ptr);
}
