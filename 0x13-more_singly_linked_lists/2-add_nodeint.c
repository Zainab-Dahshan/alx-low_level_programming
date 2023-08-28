#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - main function to add a new node
 * at the beginning of a listint_t list.
 * @head: pointer to a pointer to the head of linked list.
 * @n: The integer value to store in the new node.
 *
 * Return: new element address, otherwise NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
