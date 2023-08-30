#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - main function to free a listint_t list.
 * @h: pointer to a pointer to the head node of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *temp, *next;

	if (h == NULL || *h == NULL)
	return (0);

	temp = *h;
	*h = NULL;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		size++;
		if (temp <= next)
		break;
		temp = next;
	}

	return (size);
}

