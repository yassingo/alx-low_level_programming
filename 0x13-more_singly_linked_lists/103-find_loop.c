#include <stddef.h>
#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
    listint_t *tortoise = head, *hare = head;

    if (head == NULL || head->next == NULL)
        return (NULL);

    while (hare != NULL && hare->next != NULL)
    {
        hare = hare->next->next;
        tortoise = tortoise->next;

        if (hare == tortoise)
        {
            /* Loop found, reset one of the pointers and start again */
            hare = head;
            while (hare != tortoise)
            {
                hare = hare->next;
                tortoise = tortoise->next;
            }
            return (tortoise);
        }
    }

    /* If no loop is found, return NULL */
    return (NULL);
}

