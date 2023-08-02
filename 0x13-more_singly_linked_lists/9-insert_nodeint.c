#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node in linked list,
 * at the given position
 *
 * @head: pointes to the1st node in the list
 * @idx: index of where the new node is added
 * @n: data to insert in the new node
 *
 * return: pointes to new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int y;
	listint_t *x;
	listint_t *temp = *head;

	x = malloc(sizeof(listint_t));
	if (!x || !head)
		return (NULL);

	x->n = n;
	x->next = NULL;

	if (idx == 0)
	{
		x->next = *head;
		*head = x;
		return (x);
	}

	for (y = 0; temp && y < idx; y++)
	{
		if (y == idx - 1)
		{
			x->next = temp->next;
			temp->next = x;
			return (x);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

