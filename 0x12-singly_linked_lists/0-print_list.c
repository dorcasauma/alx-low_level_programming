#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - Print all elements of a linked list
 * and return the number of nodes.
 * @h: Pointer to the head (start) of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t print_list(const list_t *h)
{
size_t node_count = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%lu] %s\n", node_count, h->str);
}

node_count++;
h = h->next;
}
return (node_count);
}
