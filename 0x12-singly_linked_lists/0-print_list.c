#include "lists.h"

/**
 * print_list - function with one argument
 * @h: pointer to struct
 *
 * Description: prints all the elements of a list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%p\n", (void *)h->next);
		h = h->next;
		count++;
	}
	return (count);
}
