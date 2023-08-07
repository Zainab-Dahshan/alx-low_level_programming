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
	char *arr;

	if (size == 0)
	{
	return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
	return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
	arr[i] = c;
	}

	return (arr);
}
