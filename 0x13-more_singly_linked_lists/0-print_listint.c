#include "lists.h"

size_t print_listint(const listint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }

    printf("-> %lu elements\n", count);

    return (count);
}

