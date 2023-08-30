#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - main function to add a new node
 * at the end of a listint_t list.
 * @head: pointer to pointer to the head node of the list.
 * @n: The integer to be stored in the new node.
 *
 * Return: If memory allocation fails or head is NULL, NULL.
 * Otherwise, the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
