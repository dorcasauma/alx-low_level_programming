#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in the list.
 * @head: Double pointer to the head of the list.
 * @idx: Index where the new node should be added (starting from 0).
 * @n: Value to be assigned to the new node's data (n).
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *prev = *head;
listint_t *current = *head;
unsigned int count = 0;
listint_t *new_node = malloc(sizeof(listint_t));
new_node->n = n;
if (head == NULL)
return (NULL);
if (new_node == NULL)
return NULL;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
while (current != NULL && count < idx)
{
prev = current;
current = current->next;
count++;
}
if (count == idx)
{
prev->next = new_node;
new_node->next = current;
return (new_node);
}
else
{
free(new_node);
return (NULL);
}
}
