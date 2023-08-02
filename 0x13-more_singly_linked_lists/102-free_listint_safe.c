#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees the linked list safely.
 * @h: Pointes to the 1st node in the linked list.
 *
 * return: number of elements in the freed list.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t L = 0;
	int dif;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			L++;
		}
		else
		{
			free(*h);
			*h = NULL;
			L++;
			break;
		}
	}

	*h = NULL;

	return (L);
}

