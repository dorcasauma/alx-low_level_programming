#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t
 * linked list and returns its data.
 * @head: Double pointer to the head of the list.
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
listint_t *current = *head;
int data = current->n;
*head = current->next;
if (head == NULL || *head == NULL)
return (0);
free(current);
return (data);
}
