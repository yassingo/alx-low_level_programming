#include <stdio.h>
#include "main.h"

int main(void)
{
    char src[10] = "Hello";
    char dest[10] = "";

    printf("Before strncpy:\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    _strncpy(dest, src, 3);

    printf("After strncpy:\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}

