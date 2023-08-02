#include "lists.h"

listint_t *find_listint_loop(listint_t *head) {
    listint_t *slow = head;
    listint_t *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            /* Reset one of the pointers to the head and
               move both pointers one step at a time until they meet */
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow; /* Both pointers now point to the start of the loop */
        }
    }

    return NULL; /* No loop found */
}

