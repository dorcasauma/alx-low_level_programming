#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast;
size_t node_count = 0;

slow = head;
fast = head;
while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
printf("[%p] %d\n", (void *)head, head->n);
exit(98);
}
}
while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
node_count++;
}
return (node_count);
}
