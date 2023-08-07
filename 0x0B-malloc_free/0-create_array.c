#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - main function
 *
 * @size: The size of the array to be created.
 * @c: The character to initialize each element of the array with.
 *
 * Return: A pointer to the array if successful, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
