#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/**
 * struct Node - A node in a singly linked list
 *
 * @data: The data stored in the node
 * @next: A pointer to the next node in the list
 *
 * Description: This struct defines a node in a singly linked list. Each node contains
 * some data and a pointer to the next node in the list. The `data` field can be of any
 * data type, while the `next` field is a pointer to another `Node` struct.
 */
typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node *createNode(int data)
size_t print_list(const list_t *head);
size_t list_len(const list_t *head);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


#endif
