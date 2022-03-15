#include "main.h"

/**
 * print_sign - this is printing sighn
 * @n: this is value
 * Return: 1 0 -1
 * **/

int print_sign(int n)
{
	char pos = '+';
	char oo = '0';
	char neg = '-';

	if (n > 0)
	{
		_putchar(pos);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(oo);
		return (0);
	}
	else
	{
		_putchar(neg);
		return (-1);
	}
}
