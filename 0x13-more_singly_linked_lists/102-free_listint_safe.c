#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list without causing memory leaks.
 * @h: Double pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *slow, *fast, *temp;
    size_t size = 0;

    if (h == NULL || *h == NULL)
        return (0);

    slow = *h;
    fast = (*h)->next;

    while (fast && fast->next)
    {
        if (slow == fast)
        {
            /* Loop detected; stop freeing at the loop's start */
            size++;
            temp = *h;
            while (*h != slow->next)
            {
                temp = *h;
                *h = (*h)->next;
                free(temp);
                size++;
            }
            *h = NULL; /* Set the head to NULL */
            return (size);
        }
        slow = slow->next;
        fast = fast->next->next;
    }

    /* No loop detected; free the entire list */
    while (*h != NULL)
    {
        temp = *h;
        *h = (*h)->next;
        free(temp);
        size++;
    }

    *h = NULL; /* Set the head to NULL */
    return (size);
}

