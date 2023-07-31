#include "lists.h"

int main(void)
{
    listint_t *head = NULL;
    listint_t *new_node = NULL;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        printf("Error: Can't allocate memory for new node\n");
        return (1);
    }

    new_node->n = 9;
    new_node->next = head;
    head = new_node;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        printf("Error: Can't allocate memory for new node\n");
        return (1);
    }

    new_node->n = 8;
    new_node->next = head;
    head = new_node;

    print_listint(head);

    return (0);
}

