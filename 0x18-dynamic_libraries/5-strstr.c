#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to string
 * @needle: pointer to substring
 * Return: the pointer to the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int x;
	int y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x + y] != needle[y])
			{
				break;
			}
		}
		if (!needle[y])
		{
			return (&haystack[x]);
		}
	}
	return ('\0');
}
