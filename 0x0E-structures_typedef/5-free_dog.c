#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated
 * for a dog structure.
 *
 * Description: function takes a pointer to
 * a dog structure and frees the memory
 * allocated for it, including the memory
 * allocated for the dog's name and
 * owner strings. If the pointer is already NULL,
 * this function does nothing.
 *
 * @d: Pointer to the dog structure to free.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);

	free(d);
}
