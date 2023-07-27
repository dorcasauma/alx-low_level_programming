#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for the linked list node
typedef struct Node {
    char *str;
    size_t len;
    struct Node *next;
} list_t;

// Function to print all elements of the linked list and return the number of nodes
size_t print_list(const list_t *h) {
    size_t node_count = 0; // Counter to keep track of the number of nodes

    // Traverse the linked list and print each element
    while (h != NULL) {
        // If the string is NULL, print "[0] (nil)"
        if (h->str == NULL) {
            printf("[0] (nil)\n");
        } else {
            printf("[%lu] %s\n", node_count, h->str);
        }

        node_count++; // Increment the node counter
        h = h->next;  // Move to the next node
    }

    return node_count; // Return the number of nodes
}
