#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head = NULL;

    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);

    printf("Original list:\n");
    print_listint(head);
    printf("-----------------\n");

    insert_nodeint_at_index(&head, 5, 4096);

    printf("List after inserting 4096 at index 5:\n");
    print_listint(head);

    free_listint2(&head);
    return (0);
}

