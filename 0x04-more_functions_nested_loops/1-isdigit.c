#include "main.h"
#include <ctype.h>

/**
 *_isdigit - checking if c is Digit or not
 *@c: paramater to be checked
 *
 *Return: if it is number return 1 if not 0
 **/

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
		return (0);
}
