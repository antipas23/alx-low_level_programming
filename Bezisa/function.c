#include <stdio.h>

/* function declaration */
int min(int num1, int num2);

int main()
{
	/* local variable definition */

	int a = 100;
	int b = 200;
	int ret;

	/* calling a function to get min value */

	ret = min(a, b);

	printf("Min value is : %d\n", ret);
	
	return 0;

}

/* function returning the min between two numbers */

int min(int num1, int num2)
{
	/* local variable declaration */

	int result;

	if (num2 > num1)
		result = num1;
	else 
		result = num2;
	return result;

}
