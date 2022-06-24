#include <stdio.h>

void add(int a, int b)
{
	printf("Addition is %d\n", a + b);
}
void sub(int a, int b)
{
	printf("Substraction is %d\n", a - b);

}
void multi(int a, int b)
{
	printf("Multiplication is %d\n", a * b);
}

int main()
{
	// fun_ptr_arr is an array of function pointers
	void (*fun_ptr_arr[])(int, int) = {add, sub, multi};
	unsigned int ch, a = 15, b = 10;

	printf("Enter choice: 0 for add, 1 for sub and 2 " "for
		       multi\n");
	scanf("%d", &ch);

	if (ch > 2) return 0;
	(*fun_ptr_arr[ch])(a, b);

	return 0;	
}
