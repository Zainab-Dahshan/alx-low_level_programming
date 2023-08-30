#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - main function to delete
 * the node at a given index in a listint linked list.
 * @head: pointer to a pointer to the head node of the list.
 * @index: The index of the node to delete (starting at 0).
 *
 * Return: If the function succeeds, 1.
 * If the linked list is empty or the node does not exist, -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *prev;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	return (1);
	}

	prev = *head;

	for (i = 0; i < index - 1 && prev->next != NULL; i++)

	prev = prev->next;

	if (i < index - 1 || prev->next == NULL)
	return (-1);

	temp = prev->next;
	prev->next = temp->next;
	free(temp);

	return (1);
}
