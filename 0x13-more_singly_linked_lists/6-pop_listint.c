#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - main function to delete
 * the head node of a listint_t linked list.
 * @head: pointer to a pointer to the head node of the list.
 *
 * Return: If the linked list is empty, 0.
 * Otherwise, the data stored in the head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
	return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
