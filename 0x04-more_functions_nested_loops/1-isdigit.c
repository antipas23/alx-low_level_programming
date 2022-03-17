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
	for (; c <= '9'; c++)
	{
		if (c <= 'z')
		{
			return (1);
		}
	}
	return (0);
}
