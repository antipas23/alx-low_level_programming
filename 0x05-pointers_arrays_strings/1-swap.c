#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: integer pointer 1
 * @b: integer pointer 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
