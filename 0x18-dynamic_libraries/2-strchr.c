#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: pointer to the first occurence of the character
 * Return: the pointer to c if found, NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return ('\0');
}
