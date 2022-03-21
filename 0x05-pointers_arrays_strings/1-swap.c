#include "main.h"

/*
 * swap_int -this is a main
 * *@a: the first value to swap
 * *@b: the second value to swap
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
