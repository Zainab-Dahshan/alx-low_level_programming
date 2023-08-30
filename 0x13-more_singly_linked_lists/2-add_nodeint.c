#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - main function to add a new node
 * at the beginning of a listint_t list.
 * @head: pointer to pointer to the head node of the list.
 * @n: The integer to be stored in the new node.
 *
 * Return: If memory allocation fails or head is NULL, NULL.
 *         Otherwise, the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
