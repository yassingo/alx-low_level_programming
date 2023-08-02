#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int main(void)
{
	listint_t *head;
	listint_t *head2;
	listint_t *node;

	head2 = NULL;
	add_nodeint(&head2, 0);
	add_nodeint(&head2, 1);
	add_nodeint(&head2, 2);
	add_nodeint(&head2, 3);
	add_nodeint(&head2, 4);

	node = find_listint_loop(head2);
	if (node != NULL)
		printf("Loop starts at [%p] %d\n", (void *)node, node->n);
	else
		printf("No loop\n");

	head = NULL;
	add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	add_nodeint(&head, 4);
	add_nodeint(&head, 5);
	add_nodeint(&head, 6);
	add_nodeint(&head, 7);
	add_nodeint(&head, 8);
	add_nodeint(&head, 9);
	print_listint_safe(head);
	free_listint_safe(&head);
	printf("-> %p\n", (void *)head);

	node = find_listint_loop(head);
	if (node != NULL)
		printf("Loop starts at [%p] %d\n", (void *)node, node->n);
	else
		printf("No loop\n");

	return (0);
}

