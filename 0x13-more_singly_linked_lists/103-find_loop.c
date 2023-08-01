#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the linked list.
 * Return: The address of the node where the loop starts, or NULL if there is no loop.
 */
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

