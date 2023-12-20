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

	a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
