#ifndef FREE_LISTINT_SAFE_H
#define FREE_LISTINT_SAFE_H

#include <stdlib.h>

typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

void free_listint_safe(listint_t **h);

#endif /* FREE_LISTINT_SAFE_H */

