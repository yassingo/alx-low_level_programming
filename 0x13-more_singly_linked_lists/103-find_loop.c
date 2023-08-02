#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - it finds the loop in the linked list
 * @head: linked list to look for
 *
 * return: node address where the loop starts or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snail_man = head;
	listint_t *flash = head;

	if (!head)
		return (NULL);

	while (snail_man && flash && flash->next)
	{
		flash = flash->next->next;
		snail_man = snail_man->next;
		if (flash == snail_man)
		{
			snail_man = head;
			while (snail_man != flash)
			{
				snail_man = snail_man->next;
				flash = flash->next;
			}
			return (flash);
		}
	}

	return (NULL);
}

