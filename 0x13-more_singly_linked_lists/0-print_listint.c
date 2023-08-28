#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - main function to print
 *  all the elements of a listint_t list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
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

/**
 * main - main entry point
 *
 * Return: alwyas 0.
 */
int main(void)
{
	size_t count;
	listint_t *head = malloc(sizeof(listint_t));

	head->n = 1;
	head->next = malloc(sizeof(listint_t));
	head->next->n = 2;
	head->next->next = NULL;

     	count = print_listint(head);

	printf("List contains %lu nodes.\n", (unsigned long)count);

	free(head->next);
	free(head);

	return (0);
}
