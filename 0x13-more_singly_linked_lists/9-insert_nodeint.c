#include "lists.h"

/**
 * insert_nodeint_at_index - main function to insert
 * a new node to a listint_t list at a given position.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 * node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	temp = *head;
	for (i = 0; i < idx - 1 && temp != NULL; i++)
	temp = temp->next;

	if (i < idx - 1)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
