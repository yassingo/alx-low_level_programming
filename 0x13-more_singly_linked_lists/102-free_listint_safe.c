#include "102-free_listint_safe.h"

void free_listint_safe(listint_t **h)
{
    listint_t *current = *h;
    listint_t *temp;

    while (current != NULL)
    {
        temp = current;
        current = current->next;

        /* Set the node to NULL before freeing to avoid issues with print_listint_safe */
        temp->next = NULL;
        free(temp);
    }

    *h = NULL;
}

