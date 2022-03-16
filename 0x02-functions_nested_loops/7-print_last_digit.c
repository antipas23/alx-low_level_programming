#include "main.h"

/**
 * print_last_digit - i is number
 * @i: number
 * Return: r
 * **/

int print_last_digit(int i)
{
	int r;

	if (i < 0)
		r = -1 * (i % 10);
	else
		r = i % 10;
	_putchar(r + '0');
	return (r);
}
