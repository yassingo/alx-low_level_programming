#include <stdio.h>
#include "102-free_listint_safe.h"

size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *current = head;
    const listint_t *temp;

    while (current != NULL)
    {
        printf("[%p] %d\n", (void *)current, current->n);
        count++;

        temp = current;
        current = current->next;

        /* Check if the current node points to a previously visited node */
        if (temp <= current)
        {
            if (current != NULL)
                printf("-> [%p] %d\n", (void *)current, current->n);
            break;
        }
    }

    return count;
}

