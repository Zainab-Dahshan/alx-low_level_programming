#include "lists.h"

/**
 * listint_len - main function to return number
 * of elements in a listint_t list.
 * @h: pointer to the head of the linked list.
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		j++;
		h = h->next;
	}

	return (j);
}
