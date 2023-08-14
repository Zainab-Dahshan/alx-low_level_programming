#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - main function
 *
 * Description: if malloc failed, the malloc_checked
 * function causes normal process termination
 * with a status value of 98.
 * @b: The size of the memory block to allocate.
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
