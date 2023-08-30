#include "lists.h"

/**
 * reverse_listint - main function to reverse a listint_t list.
 * @head: pointer to the address of the head of the list_t list.
 *
 * Return: pointer to first node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *cur = *head;

	*head = NULL;
	while (cur)
	{
		tmp = tmp->next;
		cur->next = *head;
		*head = cur;
		cur = tmp;
	}
	return (*head);
}
