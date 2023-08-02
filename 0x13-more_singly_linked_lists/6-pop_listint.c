#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - it deletes the head node of the linked list
 *
 * @head: pointer to the 1st  element in the linked list
 *
 * return: the data inside the elements that was deleted,
 * or 0 when  the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}

