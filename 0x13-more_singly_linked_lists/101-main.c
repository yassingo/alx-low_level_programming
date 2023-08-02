#include <stdio.h>
#include "lists.h"

int main(void) {
    listint_t *head = NULL;
    listint_t *node;

    /* Create a linked list with a loop for testing */
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    node = add_nodeint(&head, 5);
    add_nodeint(&head, 6);
    add_nodeint(&head, 7);
    add_nodeint(&head, 8);
    add_nodeint(&head, 9);
    add_nodeint(&head, 10);
    node->next = head->next->next; /* Creating a loop */

    /* Print the linked list and check if there's a loop */
    size_t node_count;
    node_count = print_listint_safe(head);
    listint_t *loop_node = find_listint_loop(head);

    if (loop_node != NULL) {
        printf("Loop detected at node: [%p] %d\n", (void *)loop_node, loop_node->n);
        printf("Number of nodes before the loop: %lu\n", (unsigned long)(node_count - 1));
    } else {
        printf("No loop detected.\n");
    }

    /* Free the list, including the nodes in the loop */
    free_listint_safe(&head);

    return 0;
}

