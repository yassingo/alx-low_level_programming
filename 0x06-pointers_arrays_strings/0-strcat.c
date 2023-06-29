#include <main.h>

char* _strcat(char* dest, char* src) {
    char* original_dest = dest;

    // Move the dest pointer to the end of the string
    while (*dest != '\0') {
        dest++;
    }

    // Copy the src string to the end of dest
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    // Add the terminating null byte
    *dest = '\0';

    return original_dest;
}

int main() {
    char dest[100] = "Hello, ";
    char src[] = "world!";

    printf("Before concatenation: %s\n", dest);
    _strcat(dest, src);
    printf("After concatenation: %s\n", dest);

    return 0;
}

