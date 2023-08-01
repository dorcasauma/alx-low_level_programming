#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index `index` of a listint_t linked list.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to be deleted (starting from 0).
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *prev = NULL;
listint_t *current = *head;
unsigned int count = 0;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
*head = current->next;
free(current);
return (1);
}
while (current != NULL && count < index)
{
prev = current;
current = current->next;
count++;
}
if (current != NULL)
{
prev->next = current->next;
free(current);
return (1);
}
return (-1);
}

