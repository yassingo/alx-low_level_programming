#include "main.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Hello, World!";
    
    printf("Before conversion: %s\n", str);
    
    string_toupper(str);
    
    printf("After conversion: %s\n", str);
    
    return 0;
}

