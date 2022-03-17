#include "main.h"

/**
 * _isupper- code check for uppercase
 *
 * @c: the value given
 *
 * Return: if it is 1 else 0
 * 
**/

int _isupper(int c)
{
	for (; c <='z'; c++)
	{	
		if (c <= 'Z')
		{
			return (1);
		}
	}
	return (0);
}
