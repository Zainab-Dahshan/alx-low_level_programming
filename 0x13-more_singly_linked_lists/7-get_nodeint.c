#include "lists.h"

/**
 * get_nodeint_at_index - main function to
 * return the nth node of a listint_t linked list.
 * @head: pointer to the head node of the list.
 * @index: The index of the node to retrieve (starting at 0).
 *
 * Return: If the node does not exist, NULL.
 *         Otherwise, a pointer to the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;

	for (i = 0; i < index && temp != NULL; i++)
	temp = temp->next;

	return (temp);
}

