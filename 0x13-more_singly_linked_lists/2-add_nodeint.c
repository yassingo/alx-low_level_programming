#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer that points to the head of the list.
 * @n: Integer value to be stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node;

    /* Allocate memory for new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    /* Assign data and update next pointer */
    new_node->n = n;
    new_node->next = *head;

    /* Update head to point to the new node */
    *head = new_node;

    return (new_node);
}

