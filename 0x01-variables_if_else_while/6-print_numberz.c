#include<stdio.h>

/**
 *main - check the code
 *prints all single digit numbers of base 10 starting from 0,by a new line
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
	}
	putchar('\n');
	return (0);
}
