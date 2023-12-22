#include "main.h"

/**
 *print_line - printing underscore lines
 *@n: the parameter
 *Return: void
 **/

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
		_putchar('\n');
}
