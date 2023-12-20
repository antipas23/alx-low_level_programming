#include <stdio.h>

/**
 *main - check the code
 * program that prints all the numbers of base 16 in lowercase,
 *followed by a new line.
 *Return: Always 0
 **/
int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	for (b = 97; b <= 102; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
