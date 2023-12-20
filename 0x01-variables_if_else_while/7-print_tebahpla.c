#include <stdio.h>

/**
 *main - check the code
 *Write a program that prints the lowercase alphabet in reverse,
 *followed by a new line.
 *
 *Return: Always 0
 **/
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
