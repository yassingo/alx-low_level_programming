#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int main(void)
{
	listint_t *node1, *node2;
	listint_t *head = NULL;

	node1 = malloc(sizeof(listint_t));
	if (node1 == NULL)
	{
		perror("malloc");
		return (1);
	}
	node1->n = 9;
	node1->next = NULL;

	node2 = malloc(sizeof(listint_t));
	if (node2 == NULL)
	{
		perror("malloc");
		free(node1);
		return (1);
	}
	node2->n = 8;
	node2->next = NULL;

	/* Link the nodes together */
	node1->next = node2;
	head = node1;

	/* Print the linked list */
	print_listint(head);

	/* Free the memory */
	free(node1);
	free(node2);

	return (0);
}

