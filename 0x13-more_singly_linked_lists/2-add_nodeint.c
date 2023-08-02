#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of
 * a linked list
 *
 * @head: point to the first node of the list
 * @n: data to be inserted in the new node
 *
 * Return: pointer to the new node, or NULL in case
 *  it fails
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (!x)
		return (NULL);

	x->n = n;
	x->next = *head;
	*head = x;

	return (x);
}

