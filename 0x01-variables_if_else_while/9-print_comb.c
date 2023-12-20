#include <stdio.h>

/**
 *main - check the code
 *
 *
 *Return: Always 0
 **/
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
