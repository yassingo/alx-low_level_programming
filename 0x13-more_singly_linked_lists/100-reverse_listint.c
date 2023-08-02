#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - it reverses the linked list
 * @head: pointes to the 1st node of the list
 *
 * Return: pointes to the 1st node of the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}

