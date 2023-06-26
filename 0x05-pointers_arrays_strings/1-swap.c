#include "main.h"

/**
  * swap_int - swaps the values of two digits
  * using two input parameters
  *
  * @a: input parameter 1
  * @b: input parameter 2
  *
  * Return: zero
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
