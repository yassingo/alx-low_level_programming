#include <stdio.h>
#include <stdlib.h>
#include "102-free_listint_safe.h"

listint_t *add_nodeint(listint_t **head, int n);

/* create_listint_safe - Creates a linked list (for testing purposes) */
listint_t *create_listint_safe(void)
{
    listint_t *head;
    listint_t *new_node;

    int values[] = {0, 1, 2, 3, 4, 98, 402, 1024};
    size_t num_nodes = sizeof(values) / sizeof(values[0]);
    size_t i;

    head = NULL;

    for (i = 0; i < num_nodes; i++)
    {
        new_node = add_nodeint(&head, values[i]);
        if (new_node == NULL)
        {
            free_listint_safe(&head); // If memory allocation fails, free previously allocated memory
            return (NULL);
        }
    }

    /* Create a loop for testing purposes */
    if (head != NULL)
    {
        listint_t *last_node = head;
        while (last_node->next != NULL)
            last_node = last_node->next;
        last_node->next = head; // Make the last node point back to the head to create a loop
    }

    return (head);
}

int main(void)
{
    listint_t *head;
    size_t n;

    head = create_listint_safe();
    if (head == NULL)
    {
        fprintf(stderr, "Failed to create a linked list\n");
        return (EXIT_FAILURE);
    }

    n = print_listint_safe(head);
    printf("-> %lu elements\n", n);

    free_listint_safe(&head);

    return (EXIT_SUCCESS);
}

