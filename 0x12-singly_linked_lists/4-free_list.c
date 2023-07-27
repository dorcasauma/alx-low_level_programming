#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head (start) of the linked list.
 *
 * Description: This function deallocates the memory used by each node
 *              in the linked list, including the memory for the strings
 *              stored in each node. The function frees the nodes one by one
 *              while updating the head pointer until the entire list is freed.
 */

void free_list(list_t *head)
{
list_t *current = head;
list_t *next;
while (current != NULL)
{
next = current->next;
free(current->str);
free(current);
current = next;
}
}
