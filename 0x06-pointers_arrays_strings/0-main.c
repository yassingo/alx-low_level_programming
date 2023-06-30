#include "main.h"
#include <stdio.h>

int main(void)
{
    char s1[100] = "Hello ";
    char s2[] = "World!";
    char *result;

    printf("Before concatenation:\n");
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);

    result = _strcat(s1, s2);

    printf("After concatenation:\n");
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("Result: %s\n", result);

    return 0;
}

