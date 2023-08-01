#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *node;

	head = NULL;
	node = add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	add_nodeint(&head, 4);
	add_nodeint(&head, 5);
	add_nodeint(&head, 6);
	node->next = add_nodeint(&head, 7);
	add_nodeint(&head, 8);
	add_nodeint(&head, 9);

	printf("First Linked List (with a loop):\n");
	print_listint_safe(head);

	node = find_listint_loop(head);
	if (node != NULL)
	{
		printf("Loop starts at [%p] %d\n", (void *)node, node->n);
	}
	else
	{
		printf("No loop found in the first linked list.\n");
	}

	free_listint_safe(&head);

	head = NULL;
	node = add_nodeint(&head, 10);
	add_nodeint(&head, 11);
	add_nodeint(&head, 12);
	add_nodeint(&head, 13);
	add_nodeint(&head, 14);
	add_nodeint(&head, 15);
	add_nodeint(&head, 16);
	add_nodeint(&head, 17);
	add_nodeint(&head, 18);
	add_nodeint(&head, 19);

	printf("\nSecond Linked List (without a loop):\n");
	print_listint_safe(head);

	node = find_listint_loop(head);
	if (node != NULL)
	{
		printf("Loop starts at [%p] %d\n", (void *)node, node->n);
	}
	else
	{
		printf("No loop found in the second linked list.\n");
	}

	free_listint_safe(&head);

	return (0);
}

