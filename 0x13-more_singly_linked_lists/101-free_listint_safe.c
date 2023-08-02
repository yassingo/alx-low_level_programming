#include <stdlib.h>
#include "lists.h"

void free_listint_safe(listint_t **head) {
    listint_t *current;
    listint_t *next;

    if (head == NULL) {
        return;
    }

    current = *head;
    *head = NULL;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}

