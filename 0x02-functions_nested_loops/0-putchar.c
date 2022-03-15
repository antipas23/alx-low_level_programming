#include "main.h"

/**
 * main - printing putchar 
 * Return: 0
**/

int main(void)
{
	char *c = "_putchar ";

	while (*c != ' ')
	{
		putchar(*c);
		c++;
	}
	putchar('\n');
	return (0);
}

