#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an array of integers
 * containing all values from min to max,
 * inclusive and ordered from min to max.
 *
 * @min: The minimum value to include in the array.
 * @max: The maximum value to include in the array.
 *
 * Return: If successful, a pointer to the newly created array.
 * If min > max, return NULL.
 * If malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
	return (NULL);

	size = max - min + 1;
	array = malloc(size * sizeof(int));

	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	array[i] = min + i;

	return (array);
}
