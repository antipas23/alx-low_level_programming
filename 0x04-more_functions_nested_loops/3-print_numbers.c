#include "main.h"

/**
 *print_numbers - printing numbers 0 - 9
 *
 *
 *
 *Return: void
 **/

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
