#include "main.h"

/**
 * _isalpha - is is alpha
 * @c: is is declared
 * Return: 0
 * **/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' | c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
