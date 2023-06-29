#include <main.h>

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to be used from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* Move the dest pointer to the end of the string */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Copy at most n bytes from src to dest */
	while (n > 0 && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	*ptr = '\0';

	return dest;
}

