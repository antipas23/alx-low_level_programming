#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - until 98
 * @n: input number
 * description - fun adds to integers
**/

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%i", n);
			if (n != 98)
				printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%i", n);
			if (n != 98)
				printf(", ");
		}
		printf("\n");
	}
}
