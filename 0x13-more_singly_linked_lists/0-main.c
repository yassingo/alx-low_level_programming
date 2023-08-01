#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t node1, node2;
    listint_t *head;

    node1.n = 9;
    node1.next = &node2;
    node2.n = 8;
    node2.next = NULL;

    head = &node1;

    print_listint(head);

    return (0);
}

