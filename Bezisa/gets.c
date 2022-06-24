#include <stdio.h>

int main()
{
	char a[100];

	gets(a);

	printf("You Entered: %s \n", a);
	puts(a);

	return (0);
}
