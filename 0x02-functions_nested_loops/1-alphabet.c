#include "main.h"

/**
 * main - Entry point
 * Description: print _putchar using putchar
 * Return: Always 0 (success)
**/

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
