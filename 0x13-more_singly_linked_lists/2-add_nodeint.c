#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to the pointer to the head of the linked list.
 * @n: Integer value to be added to the new node.
 *
 * Return: The address of the new element (new node),
 *         or NULL if memory allocation fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
if (new_node == NULL)
{
return NULL;
}
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}

