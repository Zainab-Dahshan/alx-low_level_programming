#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - Prints all the elements of a linked list_t list
 *
 * @head: Pointer to the head of the linked list
 *
 * Description: This function takes a pointer to the head of
 * a linked list as input, and iterates through the list printing
 * out each element. If an element's `str` field is NULL, it prints
 * `[0] (nil)` instead of the string. The function
 * returns the number of nodes in the list.
 *
 * Return: The number of nodes in the linked list
 */
size_t print_list(const list_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (head->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", head->len, head->str);
		}
		count++;
		head = head->next;
	}
	return (count);
}
