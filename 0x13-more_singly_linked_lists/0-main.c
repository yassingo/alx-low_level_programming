#include <stdio.h>
#include <stddef.h>  /* Add this line to include the 'stddef.h' header */

/* This program demonstrates the use of linked lists in C */

/* Data structure for a singly-linked list node */
typedef struct listint_s {
	    int n;
	        struct listint_s *next;
} listint_t;

/* Function to print all elements of a linked list */
size_t print_listint(const listint_t *h);

int main(void)
{
	    listint_t *head;
	        listint_t node1, node2, node3;

		    node1.n = 1;
		        node1.next = &node2;
			    node2.n = 2;
			        node2.next = &node3;
				    node3.n = 3;
				        node3.next = NULL;

					    head = &node1;

					        print_listint(head);

						    return 0;
}

