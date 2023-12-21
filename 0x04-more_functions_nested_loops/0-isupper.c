#include<stdio.h>
#include<ctype.h>

/**
 *_isupper - check if it is upper char
 *@c: parametr recive
 *
 *
 *Return: if true 1 else 0
 **/

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
