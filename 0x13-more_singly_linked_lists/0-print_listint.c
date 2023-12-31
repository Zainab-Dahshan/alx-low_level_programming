#include "lists.h"

/**
 * print_listint - main function to print
 *  all elements of a listint_t list.
 * @h: pointer to the head of the linked list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
