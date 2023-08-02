#include "lists.h"

/**
 * print_listint - function
 *
 * Description: prints all the elements of a listint_t list
 *
 * @h: pointer to head node
 *
 * Return: number of nodes
 *
*/


size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *iterator = h;

	while (iterator)
	{
		printf("%d\n", iterator->n);

		count++;

		iterator = iterator->next;
	}
	return (count);
}

