#include "main.h"

/**
 * _isdigit- this is a number checker
 *
 * @c: this is the value of the question
 *
 * Return: 1 or 0
 * **/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
