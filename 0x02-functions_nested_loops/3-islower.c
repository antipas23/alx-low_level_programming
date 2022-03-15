#include "main.h"

/**
 * _islower - checke lower
 *
 * @c: is given
 *
 * Return: 0 else 0
**/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
